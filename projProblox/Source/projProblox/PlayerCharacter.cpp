// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

#include "Components/CapsuleComponent.h"
#include "Pickupables/Cores/Connectors/CubeConnector.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	camBoom = CreateDefaultSubobject<USpringArmComponent>("Camera Boom");
	camBoom->SetupAttachment(GetCapsuleComponent());
	camBoom->TargetArmLength = 0;
	
	playerCam = CreateDefaultSubobject<UCameraComponent>("Camera");
	playerCam->SetupAttachment(camBoom);
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	UWorld* wrld = GetWorld();
	instance = Cast<UCustomGameInstance>(UGameplayStatics::GetGameInstance(wrld));
	if(!IsValid(instance)) Print("Player failed to cast to game instance...", 7)
	
	core = Cast<ACubeCore>(UGameplayStatics::GetActorOfClass(wrld, ACubeCore::StaticClass()));
	if(!IsValid(core)) Print("Core Invalid... ~ player", 5);
	
	Super::BeginPlay();
}


void APlayerCharacter::DetachAll(APickupableMaster* obj)
{
	if(!IsValid(obj))
	{
		Print("Invalid object, couldnt detach..", 4)
		return;
	}
	
	TArray<APickupableMaster*> detachedObjects;
	
	// Try to cast to a core
	if(ACubeCore* objCore = Cast<ACubeCore>(obj)) detachedObjects = objCore->DetachAll();

	// If the cast fails... cast to the object's parent core
	else if(ACubeCore* parentCore = obj->GetCore()) detachedObjects = parentCore->DetachAll();

	UWorld* wrld = GetWorld();
	if(!IsValid(wrld)) return;

	// Destroy each detached object after a delay
	FTimerHandle destroyHandle;
	for(const auto& detachedObj : detachedObjects)
	{
		FTimerDelegate timerDelegate = FTimerDelegate::CreateUObject(detachedObj, &APickupableMaster::Deselect);
		wrld->GetTimerManager().SetTimer(destroyHandle, timerDelegate, despawnDelay, false);
	}
}

FName APlayerCharacter::FindSuggestedSlot(APickupableMaster* obj) const
{
	if(!IsValid(obj))
	{
		Print("no selected object... couldnt find favoured socket", 4)
		return NAME_None;
	}
	
	if(!IsValid(core))
	{
		Print("Core invalid.... couldn't find slot.", 5)
		return NAME_None;
	}

	FName suggestion = "FRONT";
	
	switch (obj->GetFavouredSocket())
	{
		case ECoreSockets::Front:
			suggestion = "FRONT";
			break;
		
		case ECoreSockets::Back:
			suggestion = "BACK";
			break;

		case ECoreSockets::Right:
			suggestion = "RIGHT";
			break;

		case ECoreSockets::Left:
			suggestion = "LEFT";
			break;

		case ECoreSockets::Up:
			suggestion = "UP";
			break;

		case ECoreSockets::Down:
			suggestion = "DOWN";
			break;
	}

	// If the socket isn't occupied, return it
	if(!core->ObjectInSocket(suggestion)) return suggestion;

	// Otherwise return nothing
	return NAME_None;
}

void APlayerCharacter::OrbitControls(const float deltaTime)
{
	if(currentMode != EGameMode::Build) return;
	Zoom();
	
	if (!core) return;

	const FVector corePos = core->GetActorLocation();
	const FVector currentPos = GetActorLocation();

	if (!orbiting) return;

	FVector direction = currentPos - corePos;
	const float radius = direction.Size();
	direction = direction.GetSafeNormal();

	// Horizontal and vertical angles in radians
	const float horiAngle = FMath::DegreesToRadians(orbitSpeed * deltaTime * mouseValues.X);
	const float vertAngle = FMath::DegreesToRadians(orbitSpeed * deltaTime * mouseValues.Y);

	// Horizontal rotation
	const FQuat horiQuatRot = FQuat(FVector::UpVector, horiAngle);
	direction = horiQuatRot.RotateVector(direction);

	// Vertical rotation
	const FVector rightVec = FVector::CrossProduct(direction, FVector::UpVector).GetSafeNormal();
	const FQuat vertQuatRot = FQuat(rightVec, vertAngle);

	const FVector newDirection = vertQuatRot.RotateVector(direction);
	const float dotProduct = FVector::DotProduct(newDirection, FVector::UpVector);

	// Clamps the rotation
	const float tolerance = 0.95f; 
	if (FMath::Abs(dotProduct) < tolerance) direction = newDirection;

	const FVector newPos = corePos + direction * radius;
	SetActorLocation(newPos);

	if (AController* controller = GetController())
	{
		controller->SetControlRotation(UKismetMathLibrary::FindLookAtRotation(newPos, corePos));
	}
}

void APlayerCharacter::Zoom()
{
	if(currentMode != EGameMode::Build) return;
	if (!zooming) return;
	
	const float armLength = camBoom->TargetArmLength;
	camBoom->TargetArmLength = FMath::Clamp((mouseValues.Y * camZoomSpeed) + armLength, minOrbitDistance, maxOrbitDistance);
}

void APlayerCharacter::ScrollZoom(const float input)
{
	if(currentMode != EGameMode::Build) return;
	
	const float armLength = camBoom->TargetArmLength;
	camBoom->TargetArmLength = FMath::Clamp((-input * camZoomSpeed) + armLength, minOrbitDistance, maxOrbitDistance);
}

void APlayerCharacter::NextPreviousSlot(const bool next)
{
	if(currentMode != EGameMode::Build) return;
	if(!IsValid(core)) return;
	
	const TArray<FName> freeSockets = core->GetFreeSockets();
	if(freeSockets.IsEmpty()) return;

	// Array to hold reordered sockets
	TArray<FName> reorderedSockets;

	// Define the desired order of sockets
	const TArray<FName> desiredOrder = { "FRONT", "RIGHT", "BACK", "LEFT" };

	for (const auto& orderSocket : desiredOrder)
	{
		if (freeSockets.Contains(orderSocket))
		{
			reorderedSockets.Add(orderSocket);
		}
	}
	currentSocketIndex += next? 1 : -1;
	if(currentSocketIndex >= reorderedSockets.Num()) currentSocketIndex = 0;
	if(currentSocketIndex < 0) currentSocketIndex = reorderedSockets.Num() - 1;
		
	if(reorderedSockets.IsValidIndex(currentSocketIndex)) selectedSocket = reorderedSockets[currentSocketIndex];
	GoToSlot();
}

void APlayerCharacter::AboveBelowSlot(const bool above)
{
	if(currentMode != EGameMode::Build) return;
	if(!core) return;
	
	const TArray<FName> freeSockets = core->GetFreeSockets();
	if(freeSockets.IsEmpty()) return;

	if(freeSockets.Contains("UP") && above)
	{
		selectedSocket = "UP";
		GoToSlot();
		return;
	}

	if(freeSockets.Contains("DOWN") && !above)
	{
		selectedSocket = "DOWN";
		GoToSlot();
		return;
	}

	// Fallback to cycling through the sockets if the up and down sockets are full
	currentSocketIndex += above? 1 : -1;
	if(currentSocketIndex >= freeSockets.Num()) currentSocketIndex = 0;
	else if(currentSocketIndex < 0) currentSocketIndex = freeSockets.Num() - 1;
		
	if(freeSockets.IsValidIndex(currentSocketIndex)) selectedSocket = freeSockets[currentSocketIndex];
	GoToSlot();
}

void APlayerCharacter::GoToSlot() const
{
	if(!selectedObj)
	{
		Print("Couldn't go to slot because theres no selected obj", 4)
		return;
	}

	if(selectedSocket == NAME_None)
	{
		Print("The selected socket was bad... couldn't go to socket ~ player", 4)
		return;
	}
	
	if(!core)
	{
		Print("Couldn't go to slot because the core is invalid", 4)
		return;
	}

	selectedObj->Placement(core, selectedSocket);
}

void APlayerCharacter::EndTurnEarly()
{
	if(currentMode == EGameMode::Build) return;
	if(adjustPhase) return;

	if(core) core->EndTurn();
}

void APlayerCharacter::SelectObject(APickupableMaster* obj)
{
	// Can't select anything whilst not in the build area...
	if(currentMode != EGameMode::Build) return;
	
	if(!obj) return;
	if(!core) return;
	
	selectedSocket = FindSuggestedSlot(obj);
	if(selectedSocket == NAME_None) selectedSocket = core->GetFreeSockets()[0];
	GoToSlot();
}

void APlayerCharacter::Deselect()
{
	if(!selectedObj) return;

	selectedObj->Attach();
	if(selectedObj == core) core->ToggleGravity(true);
	selectedObj = nullptr;
}

void APlayerCharacter::Confirm()
{
	if(currentMode != EGameMode::Build) return;
	if(!selectedObj)
	{
		// Print("Couldnt confirm because there was no selected object...", 6)
		return;
	}
	if(!core)
	{
		// Print("Couldnt confirm because the core was invalid...", 6)
		return;
	}

	selectedObj->SetCore(core);
	selectedObj->Attach();

	Deselect();
}


void APlayerCharacter::BuildControls(const FHitResult& hit, const float deltaTime)
{
	if(currentMode != EGameMode::Build) return;
	
	OrbitControls(deltaTime);
	
	// Only continue if the hit object is a mesh or a box collider (ignores its widget)...
	if(!Cast<UStaticMeshComponent>(hit.GetComponent()) && !Cast<UBoxComponent>(hit.GetComponent())) return;
	AActor* hitActor = hit.GetActor();

	if(ABuyableAttachment* buyable = Cast<ABuyableAttachment>(hitActor))
	{
		const FBuyableInfoStruct info = buyable->GetInfo();

		// Hide the previous one
		if(hoveredBuyable) hoveredBuyable->HideDescription();
		
		// Show the new one
		hoveredBuyable = buyable;
		hoveredBuyable->ShowDescription();
	}

	
	// If the cast fails / when not hovering over the object.... 
	else if(hoveredBuyable) hoveredBuyable->HideDescription();
}

void APlayerCharacter::SpawnFromBuyable(const FHitResult& hit)
{
	if(currentMode != EGameMode::Build) return;

	// Only continue if the hit object is a mesh or a box collider...
	if (!(Cast<UStaticMeshComponent>(hit.GetComponent()) || Cast<UBoxComponent>(hit.GetComponent()))) return;
	AActor* hitActor = hit.GetActor();
	
	if(ABuyableAttachment* buyable = Cast<ABuyableAttachment>(hitActor))
	{
		const FBuyableInfoStruct buyInfo = buyable->GetInfo();
		if(!buyable->IsUnlocked())
		{
			if(!core)
			{
				Print("Couldn't buy object because the core was invalid...", 4)
				return;
			}
			if (!instance) 
			{
				Print("Couldn't buy because instance was invald...", 4)
				return;
			}

			const int money = instance->GetMoney();
			if(money < buyInfo.price)
			{
				Print("Couldn't afford it...: " + FString::FromInt(money), 4)
				return;
			}

			// Deselect the selected object
			if(selectedObj) selectedObj->Deselect();
			instance->LoseMoney(buyInfo.price);
			// Print("new balance = " + FString::FromInt(instance->GetMoney()), 5)

			buyable->UnlockAttachment();
			return;
		}
		
		/////////////// When clicking on an unlocked buyable ///////////////
		// Don't do anything if there aren't any free slots...
		if(core->GetFreeSockets().IsEmpty()) return;

		UWorld* wrld = GetWorld();
		if(!wrld)
		{
			Print("couldnt get world to spawn from purchase...", 4)
			return;
		}
		
		FActorSpawnParameters params;
		params.bNoFail = true;
		
		APickupableMaster* pickupable = wrld->SpawnActor<APickupableMaster>(buyInfo.classToSpawn, buyable->GetActorLocation(), buyable->GetActorRotation(), params);
		if(!pickupable)
		{
			Print("couldnt cast after spawning from purchase...", 4)
			return;
		}

		if(selectedObj) selectedObj->Deselect();
		selectedObj = pickupable;
		SelectObject(selectedObj);
	}

	// If the hit actor wasn't a buyable (clicking anything that isn't a buyable deselects the selected object if there is one).
	else if(selectedObj) selectedObj->Deselect();
}

void APlayerCharacter::EjectObject(const FHitResult& hit)
{
	if(currentMode != EGameMode::Build) return;
	if(!core)
	{
		Print("Core was invalid. couldnt eject...", 4)
		return;
	}
	
	AActor* hitActor = hit.GetActor();
	if(!hitActor) return;
	if(hitActor == core) return;
	
	// Never eject the actual core (for when detaching connectors to the core)
	if(hitActor->IsA<ACubeCore>() && !hitActor->IsA<ACubeConnector>()) return;
	
	if(APickupableMaster* obj = Cast<APickupableMaster>(hitActor))
	{
		// Don't do anything if it's not attached...
		if(!obj->GetIsAttached()) return;

		core->EjectObject(obj);
		
		UWorld* wrld = GetWorld();
		if(!wrld) return;

		// Destroy the object after a delay
		FTimerHandle destroyHandle;
		FTimerDelegate timerDelegate = FTimerDelegate::CreateUObject(obj, &APickupableMaster::Deselect);
		
		wrld->GetTimerManager().SetTimer(destroyHandle, timerDelegate, despawnDelay, false);
	}
}

void APlayerCharacter::AdjustCore(const FVector& mousePos)
{
	if(!core)
	{
		Print("Couldnt adjust core. it's invalid...", 4)
		return;
	}

	// Can't select when already selected...
	if(selectedObj == core) return;
	
	// Can't do it if the core is moving
	if(core->GetVelocity().Length() > adjustSpeedThreshold) return;
		
	// Only when the game isn't playing but in the actual levels
	if(currentMode != EGameMode::Story) return;
	if(!adjustPhase) return;
	
	// If the cast is successful... Try to get its parent
	selectedObj = core;

	constexpr float heightOffset = 100;
	const FVector corePos = core->GetActorLocation();

	core->ToggleGravity(false);
	core->SetActorLocation({corePos.X, corePos.Y, corePos.Z + heightOffset});

	const FRotator direction = (mousePos - selectedObj->GetActorLocation()).GetSafeNormal().Rotation();
	selectedObj->SetActorRotation({0, direction.Yaw, 0});
}

void APlayerCharacter::MouseRotateCore(const FVector& mousePos)
{
	if(currentMode == EGameMode::Build) return;
	if(!core) return;
	if(selectedObj != core) return;

	const FRotator direction = (mousePos - selectedObj->GetActorLocation()).GetSafeNormal().Rotation();
	selectedObj->SetActorRotation({0, direction.Yaw, 0});
}

bool APlayerCharacter::EjectAll()
{
	if(currentMode != EGameMode::Build) return false;
	if(!core) return false;
	
	const TArray<APickupableMaster*> attachments = core->GetCloseAttachments(); 
	if(attachments.IsEmpty()) return false;
	
	for (const auto& obj : attachments)
	{
		core->EjectObject(obj, false);
		
		const UWorld* wrld = GetWorld();
		if(!wrld) return false;

		FTimerHandle destroyHandle;
		FTimerDelegate timerDelegate = FTimerDelegate::CreateUObject(obj, &APickupableMaster::Deselect);
		
		wrld->GetTimerManager().SetTimer(destroyHandle, timerDelegate, despawnDelay, false);
	}
	return true;
}

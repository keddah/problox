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
	Super::BeginPlay();

	TArray<AActor*> coreActors;
	UWorld* wrld = GetWorld();
	instance = Cast<UCustomGameInstance>(UGameplayStatics::GetGameInstance(wrld));
	if(!instance) Print("Player failed to cast to game instance...", 7)
	
	UGameplayStatics::GetAllActorsOfClass(wrld, ACubeCore::StaticClass(), coreActors);
	
	// Since the connectors inherit from the core and are technically cube cores...
	for (const auto& coreObj: coreActors)
	{
		if(coreObj->IsA<ACubeConnector>()) continue;

		core = Cast<ACubeCore>(coreObj);
	}
	if(!IsValid(core)) Print("Core Invalid... ~ player", 5);
	
	// core->onReset.AddDynamic(this, &APlayerCharacter::GoToCore);

	history = NewObject<UActionHistory>();
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void APlayerCharacter::UndoRedo(const bool redo)
{
	// Stops the player from being able to spam undo/redo
	FTask task;
	history->PrintTaskIndex();
	if(redo) task = history->Redo();
	else task = history->Undo();
		
	TArray<APickupableMaster*> changedObjs = task.modifiedObjs;
	TArray<TSubclassOf<APickupableMaster>> changedClasses = task.modifiedClasses;
	holding = false;
	selectedObj = nullptr;

	// Clear things to ignore once not selecting anything.
	exclusions.Empty();

	Print(task.taskName.ToString(), 4)
	
	for (int i = 0; i < changedObjs.Num(); i++)
	{
		if(APickupableMaster* obj = changedObjs[i])
		{
			// Redoing Detach
			if(task.operation == EOperations::Detach && redo)
			{
				Print("func1", 4)
				core->EjectObject(obj);
			}
			
			// Undoing Attach
			if(task.operation == EOperations::Attach && !redo)
			{
				Print("func2", 4)
				core->EjectObject(obj);
			}

			FTimerHandle destroyHandle;
			FTimerDelegate timerDelegate = FTimerDelegate::CreateUObject(obj, &APickupableMaster::Deselect);
		
			GetWorld()->GetTimerManager().SetTimer(destroyHandle, timerDelegate, despawnDelay, false);
		}
		
		// Undoing Detach
		else if(task.operation == EOperations::Detach && !redo)
		{
			Print("func3", 4)
			history->RecreateObject(GetWorld(), core, task.modifiedClasses[i], task.attachedSockets[i]);
		}
		
		// Redoing Attach
		else if(task.operation == EOperations::Attach && redo)
		{
			Print("func4", 4)
			history->RecreateObject(GetWorld(), core, task.modifiedClasses[i], task.attachedSockets[i]);
		}
	}
}

void APlayerCharacter::CreateTaskHistory(const FName& task, TArray<APickupableMaster*> objs, const TArray<FName>& attachedSockets) const
{
	FTask newTask;
	TArray<TSubclassOf<APickupableMaster>> modifiedClasses;
	for(const auto& obj  : objs)
	{
		modifiedClasses.Add(obj->GetClass());
	}
	
	if(task == "ATTACH") newTask = {task, objs, modifiedClasses, attachedSockets, EOperations::Attach};
	else if(task == "DETACH") newTask = {task, objs, modifiedClasses, attachedSockets, EOperations::Detach};

	Print(newTask.taskName.ToString(), 4)
	history->NewAction(newTask);
}

void APlayerCharacter::CreateDetachHistory(APickupableMaster* obj)
{
	// Try to cast to a core
	if(ACubeCore* objCore = Cast<ACubeCore>(obj))
	{
		const TArray<FName> usedSockets = objCore->GetOccupiedSockets();
		TArray<APickupableMaster*> detachedObjects = objCore->DetachAll();
		
		if(detachedObjects.IsEmpty()) return;
		CreateTaskHistory("DETACH", detachedObjects, usedSockets);
	}

	// If the cast fails... cast to the object's parent core
	else if(ACubeCore* parentCore = obj->GetCore())
	{
		const TArray<FName> usedSockets = parentCore->GetOccupiedSockets();
		TArray<APickupableMaster*> detachedObjects = parentCore->DetachAll();
		
		if(detachedObjects.IsEmpty()) return;
		CreateTaskHistory("DETACH", detachedObjects, usedSockets);
	}

	UWorld* wrld = GetWorld();
	if(!wrld) return;

	FTimerHandle destroyHandle;
	FTimerDelegate timerDelegate = FTimerDelegate::CreateUObject(obj, &APickupableMaster::Deselect);
		
	wrld->GetTimerManager().SetTimer(destroyHandle, timerDelegate, despawnDelay, false);
}

FName APlayerCharacter::FindSuggestedSlot(APickupableMaster* obj) const
{
	if(!obj)
	{
		Print("no selected object... couldnt find favoured socket", 4)
		return NAME_None;
	}
	
	if(!core)
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
	camBoom->TargetArmLength = FMath::Clamp((mouseValues.Y * orbitSpeed) + armLength, minOrbitDistance, maxOrbitDistance);
}

void APlayerCharacter::ScrollZoom(const float input)
{
	if(currentMode != EGameMode::Build) return;
	
	const float armLength = camBoom->TargetArmLength;
	camBoom->TargetArmLength = FMath::Clamp((-input * orbitSpeed) + armLength, minOrbitDistance, maxOrbitDistance);
}

void APlayerCharacter::NextPreviousSlot(const bool next)
{
	if(currentMode != EGameMode::Build) return;
	if(!core) return;
	
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
	currentSlot += next? 1 : -1;
	if(currentSlot >= reorderedSockets.Num()) currentSlot = 0;
	if(currentSlot < 0) currentSlot = reorderedSockets.Num() - 1;
		
	if(reorderedSockets.IsValidIndex(currentSlot)) selectedSocket = reorderedSockets[currentSlot];
	GoToSlot(true, next);
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
	
	currentSlot += above? 2 : -2;
	if(currentSlot >= freeSockets.Num()) currentSlot = 0;
	else if(currentSlot < 0) currentSlot = freeSockets.Num() - 1;
		
	if(freeSockets.IsValidIndex(currentSlot)) selectedSocket = freeSockets[currentSlot];
	GoToSlot();
}

void APlayerCharacter::GoToSlot(const bool move, const bool next)
{
	if(!selectedObj)
	{
		Print("Couldn't go to slot because theres no selected obj", 4)
		return;
	}

	if(!core)
	{
		Print("Couldn't go to slot because the core is invalid", 4)
		return;
	}

	selectedObj->Placement(core, selectedSocket);

	// Move in relation to the new socket placement...
	if(!move) return;

	// constexpr float moveAmount = 9;
	// mouseValues.X += next? moveAmount : -moveAmount;
	// orbiting = true;
	// OrbitControls(.1f);
	// orbiting = false;
}

void APlayerCharacter::GoToCore()
{
	if(!core) return;
	const FVector corePos = core->GetActorLocation();
	SetActorRotation(UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), corePos));

	// Look at the core first so that you can move in the opposite direction...
	const FVector direction = -GetActorForwardVector();
	const FVector newPos = corePos + (direction * 300);
	
	SetActorLocation(newPos);
}

void APlayerCharacter::SelectObject(APickupableMaster* obj)
{
	// Can't select anything whilst not in the build phase...
	if(currentMode != EGameMode::Build) return;

	selectedSocket = FindSuggestedSlot(obj);
	if(selectedSocket == NAME_None) selectedSocket = core->GetFreeSockets()[0];
	GoToSlot();
}

void APlayerCharacter::Detach(const FHitResult& hit)
{
	// if the cast is successful...
	if(ACubeCore* hitCore = Cast<ACubeCore>(hit.GetActor()))
	{
		// When middle clicking a core... check if it has a parent core...
		// If it has a parent core...
		if(ACubeCore* parentCore = hitCore->GetCore())
		{
			CreateDetachHistory(parentCore);
			return;
		}

		// Otherwise just detach everything on the hit core.
		CreateDetachHistory(hitCore);
		return;
	}

	// Otherwise try to cast to the pickupmaster and get its parent... so that it can detach all..
	if(APickupableMaster* obj = Cast<APickupableMaster>(hit.GetActor())) CreateDetachHistory(obj);
}

void APlayerCharacter::Deselect()
{
	if(!IsValid(selectedObj)) return;

	// Is the selected object a core?
	if(const ACubeCore* objCore = Cast<ACubeCore>(selectedObj))
	{
		// Is the obj not a connector... if it is... check if it can collect... if it can't return
		if(!objCore->IsA<ACubeConnector>()) if(!objCore->CanCollect())
		{
			holding = true;
			return;
		}
	}
	
	// Clear things to ignore.
	exclusions.Empty();
	holding = false;

	selectedObj->SetSelected(false);
	selectedObj = nullptr;
}

void APlayerCharacter::Confirm()
{
	if(currentMode != EGameMode::Build) return;
	if(!selectedObj)
	{
		Print("Couldnt confirm because there was no selected object...", 6)
		return;
	}

	selectedObj->SetCore(core);
	selectedObj->SetSelected(false);

	CreateTaskHistory("ATTACH", {selectedObj}, {selectedObj->GetAttachedSocket()});
	Deselect();
}


void APlayerCharacter::BuildControls(const FHitResult& hit, const float deltaTime)
{
	if(currentMode != EGameMode::Build) return;

	OrbitControls(deltaTime);
	
	// Only continue if the hit object is a mesh or a box collider...
	if(!Cast<UStaticMeshComponent>(hit.GetComponent()) && !Cast<UBoxComponent>(hit.GetComponent())) return;
	AActor* hitActor = hit.GetActor();
	
	// Don't allow this to run if it's already being hovered over
	if(hitActor == hoveredBuyable) return;

	if(ABuyableAttachment* buyable = Cast<ABuyableAttachment>(hitActor))
	{
		const FBuyableInfoStruct info = buyable->GetInfo();

		// Hide the previous one
		if(hoveredBuyable) hoveredBuyable->HideDescription();
		
		// Show the new one
		hoveredBuyable = buyable;
		hoveredBuyable->ShowDescription();
	}
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
			if(!(money >= buyInfo.price))
			{
				Print("Couldn't afford it...: " + FString::FromInt(money), 4)
				return;
			}

			if(selectedObj) selectedObj->Deselect();
			instance->LoseMoney(buyInfo.price);
			Print("new balance = " + FString::FromInt(instance->GetMoney()), 5)
			buyable->UnlockAttachment();
			return;
		}

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

		holding = true;
		if(selectedObj) selectedObj->Deselect();
		selectedObj = pickupable;
		SelectObject(selectedObj);
	}

	else if(selectedObj) selectedObj->Deselect();
}

void APlayerCharacter::EjectObject(const FHitResult& hit)
{
	if(currentMode != EGameMode::Build) return;

	AActor* hitActor = hit.GetActor();
	if(!hitActor) return;
	if(hitActor == core) return;
	
	// Never eject the actual core
	if(hitActor->IsA<ACubeCore>() && !hitActor->IsA<ACubeConnector>()) return;
	
	if(APickupableMaster* obj = Cast<APickupableMaster>(hitActor))
	{
		if(!obj->GetIsAttached()) return;

		CreateTaskHistory("DETACH", {obj}, {obj->GetAttachedSocket()});
		core->EjectObject(obj);
		
		UWorld* wrld = GetWorld();
		if(!wrld) return;

		FTimerHandle destroyHandle;
		FTimerDelegate timerDelegate = FTimerDelegate::CreateUObject(obj, &APickupableMaster::Deselect);
		
		wrld->GetTimerManager().SetTimer(destroyHandle, timerDelegate, despawnDelay, false);
	}

}

void APlayerCharacter::AdjustCore(const FHitResult& hit)
{
	// Can't do it if the core is moving
	if(core->GetVelocity().Length() > adjustSpeedThreshold) return;
		
	// Only when the game isn't playing but in the actual levels
	if(currentMode != EGameMode::Story) return;
	if(!adjustPhase) return;
	
	if(!hit.bBlockingHit) return;
	AActor* AHit = hit.GetActor();
	if(!core) return;

	APickupableMaster* hitObj = Cast<APickupableMaster>(AHit);
	if(!hitObj) return;

	// If the cast is successful... Try to get its parent
	selectedObj = hitObj->GetParent();

	// If the object's parent is valid...
	if(IsValid(selectedObj))
	{
		// Its parent is always a core.
		// Prevent the core from being picked up if it's out of range
		if(const ACubeCore* objCore = Cast<ACubeCore>(selectedObj))
		{
			if(!objCore->IsA<ACubeConnector>()) if(!objCore->CanCollect())
			{
				// Return if can't pickup
				holding = false;
				selectedObj = 0;
				return;
			}
		}
	}

	// If the object doesn't have a parent....
	else selectedObj = hitObj;

	if(!IsValid(selectedObj)) return;

	selectedObj = core;
	constexpr float heightOffset = 100;
	const FVector corePos = core->GetActorLocation();

	core->SetSelected(true);
	core->SetActorLocation({corePos.X, corePos.Y, corePos.Z + heightOffset});
	const FRotator forwardRot = GetActorForwardVector().Rotation();
	
	core->SetActorRotation({0, forwardRot.Yaw, 0});
}

void APlayerCharacter::EjectAll()
{
	if(currentMode != EGameMode::Build) return;

	if(!core) return;

	for (auto& obj : core->GetCloseAttachments())
	{
		core->EjectObject(obj);
		
		UWorld* wrld = GetWorld();
		if(!wrld) return;

		FTimerHandle destroyHandle;
		FTimerDelegate timerDelegate = FTimerDelegate::CreateUObject(obj, &APickupableMaster::Deselect);
		
		wrld->GetTimerManager().SetTimer(destroyHandle, timerDelegate, despawnDelay, false);
	}
}
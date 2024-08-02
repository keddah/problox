/**************************************************************************************************************
* Cube Core - Code
* 
* The code file for cube core (the main thing that things attach to). Gives functionality to the declared functions. Deactivates the collision collection boxes that.
* were inherited by the cube core). Also overrides some of the inherited functions so that they work as intended for how this actor is supposed to act.
*
* PROBLEMS:
*	Detaching isn't always done correctly - The socket information still thinks that things are in sockets when they're not... (sometimes)
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "CubeCore.h"

#include "./projProblox/Cells/Cell.h"
#include "Kismet/GameplayStatics.h"
#include "projProblox/GameModes/Modes.h"
#include "projProblox/Pickupables/Balloon.h"


ACubeCore::ACubeCore()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	cellHomer = CreateDefaultSubobject<UBoxComponent>("Bigger Collider");
	cellHomer->SetupAttachment(mesh);
	cellCollector = CreateDefaultSubobject<UBoxComponent>("Smaller Collider");
	cellCollector->SetupAttachment(mesh);

	camArm = CreateDefaultSubobject<USpringArmComponent>("Cam Boom");
	camArm->SetupAttachment(mesh);
	
	coreCam = CreateDefaultSubobject<UCameraComponent>("Core Camera");
	coreCam->SetupAttachment(camArm);
	
	mouseDetector->SetBoxExtent({});
	
	soundPlayer->AddAbilitySFX(TEXT("/Script/MetasoundEngine.MetaSoundSource'/Game/Audio/MetaSounds/MS_collect.MS_collect'"));
}

void ACubeCore::BeginPlay()
{
	wrld = GetWorld();
	
	// Create a socket info for each cube (also inherited to connectors)
	// Need to create one for each cube otherwise the information would be shared/overrided.
	socketInfo = NewObject<UCubeSocketInfo>();
	
	onTurnStarted.AddDynamic(this, &ACubeCore::Start);
	if(ACollector* _collector = Cast<ACollector>(UGameplayStatics::GetActorOfClass(GetWorld(), ACollector::StaticClass()))) collector = _collector;

	if (UCustomGameInstance* customInst = Cast<UCustomGameInstance>(UGameplayStatics::GetGameInstance(wrld)))
	{
		instance = customInst;
	}
	else Print("Couldn't cast to game instance...", 4)

	cellCollector->OnComponentBeginOverlap.AddDynamic(this, &ACubeCore::PickupCell);
	
	Super::BeginPlay();
}

void ACubeCore::Reset()
{
	if(IsValid(mesh)) mesh->SetAngularDamping(heavyAngularDrag);
	ClearAndInvalidateTimer();
	onReset.Broadcast();
}


void ACubeCore::SetEnableCollisions(const bool enable) const
{
	if(!IsValid(mesh)) return;
	
	mesh->SetSimulatePhysics(enable);
	mesh->SetCollisionResponseToAllChannels(enable ? ECR_Block : ECR_Ignore);
	
	for(const auto& obj : GetCloseAttachments())
	{
		if(!IsValid(obj)) continue;
		
		UStaticMeshComponent* objMesh = obj->GetMesh();
		if(!IsValid(objMesh)) continue;

		objMesh->SetCollisionResponseToAllChannels(enable ? ECR_Block : ECR_Ignore);
		objMesh->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
		objMesh->SetCollisionResponseToChannel(ECC_Camera, ECR_Block);
	}
	mesh->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	mesh->SetCollisionResponseToChannel(ECC_Camera, ECR_Block);
}

void ACubeCore::AddAttachment(APickupableMaster* attachment, const FName& socket)
{
	if(!IsValid(socketInfo)) return;
	
	if(socketInfo->ObjectInSocket(socket))
	{
		// Print("Already an object in this socket", 4)
		return;
	}
	
	attachedSocket = socket;

	socketInfo->AddAttachment(attachment, socket);
	isAttached = true;
}

void ACubeCore::RemoveAttachment(const FName& socket)
{
	Super::RemoveAttachment(socket);

	if(!IsValid(socketInfo))
	{
		Print("SocketInfo invalid..... couldn't remove",4)
		return;
	}

	socketInfo->RemoveAttachment(socket);

	if(!IsValid(mesh))
	{
		Print("mesh was invalid..... couldn't remove",4)
		return;
	}
	mesh->SetEnableGravity(true);
}

void ACubeCore::RemoveAttachment(APickupableMaster* obj)
{
	if(!IsValid(obj)) return;
	if(!IsValid(socketInfo))
	{
		Print("SocketInfo invalid..... couldn't remove",4)
		return;
	}
	socketInfo->RemoveAttachment(obj);

	if(!IsValid(mesh))
	{
		Print("mesh was invalid..... couldn't remove",4)
		return;
	}
	mesh->SetEnableGravity(true);
}

TArray<APickupableMaster*> ACubeCore::DetachAll()
{
	if(!socketInfo) return {};

	// Return false if there weren't any things to detach
	const TArray<APickupableMaster*> objs = socketInfo->GetAttachments();
	if(objs.IsEmpty()) return {};
	
	for(const auto& obj : objs)
	{
		if(!IsValid(obj)) continue;
		
		obj->Detach(false, detachForce * obj->GetMass(), detachAngularForce * obj->GetMass());
	}

	if(IsValid(soundPlayer)) soundPlayer->PlayDetachAll();
	socketInfo->ClearAttachments();
	return objs;
}


void ACubeCore::SetAbilityActive(bool value)
{
	if(IsValid(selectedObj)) selectedObj->SetAbilityActive(value);
}

void ACubeCore::EjectObject(APickupableMaster* toEject, const bool playSound)
{
	if(!toEject) return;

	toEject->Detach(playSound, detachForce, detachAngularForce);
	// soundPlayer->PlayDetachAll();
}

void ACubeCore::EjectObject(const FName& ejectSocket, const bool playSound) const
{
	if(!IsValid(socketInfo)) return;
	APickupableMaster* toEject = socketInfo->GetObjectFromSocket(ejectSocket);

	if(!toEject) return;
	toEject->Detach(playSound, detachForce, detachAngularForce);
	// soundPlayer->PlayDetachAll();
}

float ACubeCore::GetMass() const
{
	if(!IsValid(mesh)) return 0;
	if(!mesh->IsSimulatingPhysics()) return 0;
	
	float mass = mesh->GetMass();

	const AActor* self = this;
	TArray<APickupableMaster*> children;
	GetDescendents(self, children);
	
	for (const auto& obj : children)
	{
		if(IsValid(obj)) mass += obj->GetMass();
	}
	return mass;
}

// Passing an actor to work around the #include dependency loop.....
void ACubeCore::PickupCell(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(!IsValid(collector)) return;
	if(!IsValid(OtherActor)) return;

	if(ACell* cell = Cast<ACell>(OtherActor))
	{
		if(cell->IsCollected()) return;
		
		// Using a delegate so that it can send a message to the blueprint (because ui...)
		cell->ToCollector();
		collector->AddCell();
		PlayCollectSound();
		onAddedCell.Broadcast(cell);
	}
}

void ACubeCore::Teleport(const FRotator& rot, const FVector& pos = FVector(), bool respawning)
{
	if(!IsValid(instance)) return;
	if(!IsValid(mesh)) return;
	
	// Only if the passed position isn't empty .. set the new spawnPos
	if(!respawning) lastSpawnPos = pos;
	
	// End the turn early when respawning (falling out the map)
	else EndTurn(true);

	const bool bEnablePhysics = instance->GetCurrentLevel() != 0;
	mesh->SetSimulatePhysics(bEnablePhysics);
	mesh->SetAllUseCCD(bEnablePhysics);
	
	SetActorLocation(lastSpawnPos);
	SetActorRotation(rot);
	
	for (const auto& obj : GetCloseAttachments())
	{
		if(ABalloon* balloon = Cast<ABalloon>(obj)) balloon->Teleport(bEnablePhysics);
	}

	// Remove the velocity of all the things attach to the core and the core itself.
	RemoveVelocity();
}

void ACubeCore::EndTurn(const bool force)
{
	if(!IsValid(wrld))
	{
		Print("world is invalid.. can't end turn", 4)
		return;
	}
	FTimerManager& manager = wrld->GetTimerManager();

	if(force)
	{
		for(const auto& obj : GetCloseAttachments())
		{
			if(!IsValid(obj)) continue;
			
			// Clear the timer
			manager.ClearAllTimersForObject(obj);

			// Deactivate all the attachments
			obj->SetAbilityActive(false);
		}

		// Call the function the timer is supposed to call
		Reset();
		return;
	}
	
	if(!manager.IsTimerActive(resetTimer))
	{
		Print("Couldnt stop early because there was no active timer...", 3)
		return;
	}

	// Over x% done - Guarantee that you can end the turn if at least some of the end turn percent has been crossed and the longest duration is longer than 24 seconds. 
	constexpr float helper = 24;
	const float elapsedTime = manager.GetTimerElapsed(resetTimer);

	const bool canSkip = (elapsedTime / longestDuration) > endTurnPercent * .4f && longestDuration >= helper;
	
	const float percent = canSkip? 1 : elapsedTime / longestDuration;
	if(percent < endTurnPercent) return;

	Print("Ending turn", 4)
	
	// Call the function the timer is supposed to call
	Reset();

	for(const auto& obj : GetCloseAttachments())
	{
		if(!IsValid(obj)) continue;
		
		// Clear the timer
		manager.ClearAllTimersForObject(obj);
		
		// Deactivate all the attachments
		obj->SetAbilityActive(false);
	}
}


void ACubeCore::CoreCamera(const float deltaTime)
{
	if(!IsValid(camArm)) return;
	if(!IsValid(coreCam)) return;

	// If the camera is facing directly up... swap to an actual camera
	if(coreCam->GetForwardVector().Equals({0,0,1}, .125f))
	{
		onBadCamera.Broadcast();
		camArm->SetRelativeRotation({0,0,0});
		return;
	}
	
	const FVector currentPos = camArm->GetRelativeLocation();
	const FVector target = {-200, 0, 130};
	
	// Interpolate X and Z positions
	const float x = FMath::FInterpTo(currentPos.X, target.X, deltaTime, cameraDamping);
	const float z = FMath::FInterpTo(currentPos.Z, target.Z, deltaTime, cameraDamping);

	// Maintain the current Y position
	const FVector newPos = {x, currentPos.Y, z};

	// Update the Spring Arm location
	camArm->SetRelativeLocation(newPos);
	camArm->SetRelativeRotation(GetActorForwardVector().Rotation());
}

void ACubeCore::ResetRotation(bool resetVelocity)
{
	Super::ResetRotation(resetVelocity);

	if(!resetVelocity) return;
	if(!IsValid(socketInfo)) return;

	const TArray<APickupableMaster*> objs = socketInfo->GetAttachments();
	if(objs.IsEmpty()) return;
	
	for(const auto& obj : objs) if(IsValid(obj)) obj->RemoveVelocity();
}

void ACubeCore::RemoveVelocity() const
{
	Super::RemoveVelocity();

	const AActor* self = this ;
	TArray<APickupableMaster*> children;
	GetDescendents(self, children);
	
	for(const auto& obj : children) if(IsValid(obj)) obj->RemoveVelocity();
}

void ACubeCore::TimedObjectActivation(const TArray<int>& delays, const TArray<int>& durations, const float _longestTime)
{
	if(!IsValid(wrld)) return;
	if(wrld->GetTimerManager().IsTimerActive(resetTimer)) return;
	
	const TArray<APickupableMaster*> objs = GetCloseAttachments();

	if(objs.IsEmpty())
	{
		longestDuration = 3;
		const FTimerDelegate resetDelegate = FTimerDelegate::CreateUObject(this, &ACubeCore::Reset);
		wrld->GetTimerManager().SetTimer(resetTimer, resetDelegate, longestDuration, false);
		return;
	}

	// If the longest time is 0 (the player set the delay and duration to 0)...
	// Set the longest time to .1 (that's the longest duration when setting both values to 0).
	longestDuration = _longestTime == 0? .1f : _longestTime;
	
	for(int i = 0; i < objs.Num(); i++)
	{
		if(!objs[i]->IsTimerRequired()) continue;
		
		FTimerHandle activationHandle;
		FTimerHandle deactivationHandle;
        
		// Activate/Deactivate the things
		FTimerDelegate activateDelegate = FTimerDelegate::CreateUObject(objs[i], &APickupableMaster::SetAbilityActive, true);
		FTimerDelegate deactivateDelegate = FTimerDelegate::CreateUObject(objs[i], &APickupableMaster::SetAbilityActive, false);

		if(!(delays.IsValidIndex(i) && durations.IsValidIndex(i)))
		{
			Print("The delay / duration was out of range...", 4)
			continue;
		}
		const float delayTime = delays[i] < 1? .01f : delays[i];
		const float durationTime = durations[i] < 1? .1f : durations[i];
		
		// Activate...
		wrld->GetTimerManager().SetTimer(activationHandle, activateDelegate, delayTime, false);

		// Deactivate after the delay and duration elapses activation...
		wrld->GetTimerManager().SetTimer(deactivationHandle, deactivateDelegate, delayTime + durationTime, false);
	}

	// Longest duration can't be 0 otherwise the timer won't start.
	const FTimerDelegate resetDelegate = FTimerDelegate::CreateUObject(this, &ACubeCore::Reset);
	wrld->GetTimerManager().SetTimer(resetTimer, resetDelegate, longestDuration, false);
}
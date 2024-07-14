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

#include "Connectors/CuboidConnector.h"
#include "./projProblox/Cells/Cell.h"
#include "Connectors/WedgeConnector.h"
#include "Kismet/GameplayStatics.h"
#include "projProblox/SaveFiles.h"
#include "projProblox/GameModes/Modes.h"
#include "projProblox/Pickupables/Balloon.h"
#include "projProblox/Pickupables/BounceSpring.h"
#include "projProblox/Pickupables/Piston.h"


ACubeCore::ACubeCore()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	thingHomer = CreateDefaultSubobject<UBoxComponent>("Bigger Collider");
	thingHomer->SetupAttachment(mesh);
	thingCollector = CreateDefaultSubobject<UBoxComponent>("Smaller Collider");
	thingCollector->SetupAttachment(mesh);

	mouseDetector->SetBoxExtent({});
	
	soundPlayer->AddAbilitySFX(TEXT("/Script/MetasoundEngine.MetaSoundSource'/Game/Audio/MetaSounds/MS_collect.MS_collect'"));
}

void ACubeCore::BeginPlay()
{
	Super::BeginPlay();
	
	// Create a socket info for each cube (also inherited to connectors)
	// Need to create one for each cube otherwise the information would be shared/overrided.
	socketInfo = NewObject<UCubeSocketInfo>();
	
	onTurnStarted.AddDynamic(this, &ACubeCore::Start);
	if(ACollector* _collector = Cast<ACollector>(UGameplayStatics::GetActorOfClass(GetWorld(), ACollector::StaticClass()))) collector = _collector;

	if(Cast<AMode_Story>(UGameplayStatics::GetGameMode(wrld))) currentMode = EGameMode::Story;
	else if(Cast<AMode_Build>(UGameplayStatics::GetGameMode(wrld))) currentMode = EGameMode::Build;

	if (UCustomGameInstance* customInst = Cast<UCustomGameInstance>(UGameplayStatics::GetGameInstance(wrld)))
	{
		instance = customInst;
	}
	else Print("Couldn't cast to game instance...", 4)
}


void ACubeCore::SetSelected(const bool value)
{
	// Not allowed to drop the cube if unable to collect 
	selected = value;

	// Only use continuous collisions while selected (to prevent objects from going through objects).
	mesh->SetUseCCD(selected);
	SetEnableCollisions(!selected);
	ToggleGravity();

	// Reset the silhouette after using its transform
	ResetGhost();
}

void ACubeCore::Detach(const bool push)
{
	if(!ObjectInSocket(raySocket)) return;

	APickupableMaster* obj = socketInfo->GetObjectFromSocket(raySocket);
	if(!obj) return;

	obj->Detach(push);
}

void ACubeCore::ResetToStart() const
{
	if(mesh)
	{
		if(mesh->IsSimulatingPhysics()) mesh->SetAngularDamping(heavyAngularDrag);
	}
	onReset.Broadcast();
}

// When the start button is pressed....
void ACubeCore::Start()
{
	if(mesh)
	{
		if(mesh->IsSimulatingPhysics()) mesh->SetAngularDamping(defaultAngularDrag);
	}
}



void ACubeCore::SetEnableCollisions(const bool enable) const
{
	mesh->SetSimulatePhysics(enable);
	mesh->SetCollisionResponseToAllChannels(enable ? ECR_Block : ECR_Ignore);
	
	for(auto& obj : GetCloseAttachments())
	{
		UStaticMeshComponent* objMesh = obj->GetMesh();
		objMesh->SetCollisionResponseToAllChannels(enable ? ECR_Block : ECR_Ignore);
		objMesh->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
		objMesh->SetCollisionResponseToChannel(ECC_Camera, ECR_Block);
	}
	mesh->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	mesh->SetCollisionResponseToChannel(ECC_Camera, ECR_Block);
}

void ACubeCore::AddAttachment(APickupableMaster* attachment, const FName& socket)
{
	if(socketInfo->ObjectInSocket(socket))
	{
		// Print("Already an object in this socket", 4)
		return;
	}
	
	attachedSocket = socket;

	socketInfo->AddAttachment(attachment, socket);
	ToggleGravity();
	isAttached = true;

	onChangeAttachments.Broadcast();
	previousAttachments = GetAttachedObjs();
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
	mesh->SetEnableGravity(true);

	onChangeAttachments.Broadcast();
	previousAttachments = GetAttachedObjs();
}

void ACubeCore::RemoveAttachment(APickupableMaster* obj)
{
	if(!IsValid(obj)) return;
	
	socketInfo->RemoveAttachment(obj);
	mesh->SetEnableGravity(true);

	onChangeAttachments.Broadcast();
	previousAttachments = GetAttachedObjs();
}

TArray<APickupableMaster*> ACubeCore::DetachAll(const bool push)
{
	if(!socketInfo) return {};

	// Return false if there weren't any things to detach
	const TArray<APickupableMaster*> objs = socketInfo->GetAttachments();
	if(objs.IsEmpty()) return {};
	
	for(const auto& obj : objs)
	{
		if(!IsValid(obj)) continue;
		
		obj->Detach(push);
	}

	soundPlayer->PlayDetachAll();
	socketInfo->ClearAttachments();
	return objs;
}


void ACubeCore::SetAbilityActive(bool value)
{
	if(IsValid(selectedObj)) selectedObj->SetAbilityActive(value);
}

void ACubeCore::EjectObject(APickupableMaster* toEject)
{
	if(!toEject) return;

	toEject->Detach(true);
	soundPlayer->PlayDetachAll();
}

void ACubeCore::EjectObject(const FName& ejectSocket) const
{
	APickupableMaster* toEject = socketInfo->GetObjectFromSocket(ejectSocket);

	if(!toEject) return;

	toEject->Detach(true);
	soundPlayer->PlayDetachAll();
}

float ACubeCore::GetMass() const
{
	if(!mesh->IsSimulatingPhysics()) return 0;
	
	float mass = mesh->GetMass();

	const AActor* self = this;
	TArray<APickupableMaster*> children;
	GetDescendents(self, children);
	
	for (const auto& obj : children) mass += obj->GetMass();
	return mass;
}

// Passing an actor to work around the #include dependency loop.....
void ACubeCore::AddThing(AActor* _thing) const
{
	if(!IsValid(collector)) return;
	if(!IsValid(_thing)) return;

	if(ACell* thing = Cast<ACell>(_thing))
	{
		// Using a delegate so that it can send a message to the blueprint (because ui...)
		thing->Teleport(collector->GetCollectPoint());
		onAddedThing.Broadcast(thing);
	}
}

void ACubeCore::Teleport(const FRotator& rot, const FVector& pos = FVector(), bool respawning)
{
	// Only if the passed position isn't empty .. set the new spawnPos
	if(!respawning) lastSpawnPos = pos;
	// End the turn early when respawning (falling out the map)
	else EndTurn();
	
	mesh->SetSimulatePhysics(true);
	for (auto& obj : GetCloseAttachments())
	{
		if(obj->IsA<ABalloon>())
		{
			obj->GetMesh()->SetSimulatePhysics(true);
			obj->SetActorLocation(pos + obj->GetActorForwardVector() * 150);
		}
	}

	SetActorLocation(lastSpawnPos);
	SetActorRotation(rot);
	mesh->SetAllUseCCD(true);

	// Remove the velocity of all the things attach to the core and the core itself.
	RemoveVelocity();
}

void ACubeCore::EndTurn()
{
	FTimerManager& manager = wrld->GetTimerManager();
	if(!manager.IsTimerActive(resetTimer)) return;
	
	const float percent = manager.GetTimerElapsed(resetTimer) / longestDuration;

	// Over 60% done
	if(percent < .6f) return;

	// Play a sound???
	
	// Clear the timer 
	manager.ClearTimer(resetTimer);

	// Call the function the timer is supposed to call
	ResetToStart();

	// Deactivate all the attachments
	for(const auto& obj : GetCloseAttachments()) obj->SetAbilityActive(false);
}


void ACubeCore::ResetRotation(bool resetVelocity)
{
	Super::ResetRotation(resetVelocity);

	if(!resetVelocity) return;

	const TArray<APickupableMaster*> objs = socketInfo->GetAttachments();
	if(objs.IsEmpty()) return;
	
	for(const auto& obj : objs) obj->RemoveVelocity();
}

void ACubeCore::RemoveVelocity() const
{
	Super::RemoveVelocity();

	const AActor* self = this ;
	TArray<APickupableMaster*> children;
	GetDescendents(self, children);
	
	for(const auto& obj : children) obj->RemoveVelocity();
}

void ACubeCore::ToggleGravity() const
{
	// Disable gravity on this.
	Super::ToggleGravity();

	// Disable gravity on all of the things attached to the core.
	for(const auto& obj : socketInfo->GetAttachments()) obj->ToggleGravity(!selected);
}

void ACubeCore::TimedObjectActivation(const TArray<int>& delays, const TArray<int>& durations, const float _longestTime)
{
	 const TArray<APickupableMaster*> objs = GetCloseAttachments();

	if(objs.IsEmpty())
	{
		longestDuration = 3;
		const FTimerDelegate resetDelegate = FTimerDelegate::CreateUObject(this, &ACubeCore::ResetToStart);
		wrld->GetTimerManager().SetTimer(resetTimer, resetDelegate, longestDuration, false);
		return;
	}

	// If the longest time is 0 (the player set the delay and duration to 0)...
	// Set the longest time to .1 (that's the longest duration when setting both values to 0).
	longestDuration = _longestTime == 0? .1f : _longestTime;
	
	for(int i = 0; i < objs.Num(); i++)
	{
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
	const FTimerDelegate resetDelegate = FTimerDelegate::CreateUObject(this, &ACubeCore::ResetToStart);
	wrld->GetTimerManager().SetTimer(resetTimer, resetDelegate, longestDuration, false);
}
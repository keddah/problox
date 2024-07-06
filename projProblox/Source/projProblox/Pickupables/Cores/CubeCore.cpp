/**************************************************************************************************************
* Cube Core - Code
* 
* The code file for cube core (the main thing that things attach to). Gives functionality to the declared functions. Deactivates the collision collection boxes that.
* were inherited by the cube core). Also overrides some of the inherited functions so that they work as intended for how this actor is supposed to act.
*
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
#include "projProblox/Pickupables/Piston.h"


ACubeCore::ACubeCore()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	thingHomer = CreateDefaultSubobject<UBoxComponent>("Bigger Collider");
	thingHomer->SetupAttachment(mesh);
	thingCollector = CreateDefaultSubobject<UBoxComponent>("Smaller Collider");
	thingCollector->SetupAttachment(mesh);

	distanceLine = CreateDefaultSubobject<UArrowComponent>("Line");
	distanceLine->ArrowSize = 1;
	distanceLine->ArrowLength = 100;
	distanceLine->SetRelativeScale3D({1,7,7});
	distanceLine->SetHiddenInGame(true);

	mouseDetector->SetBoxExtent({});
	
	placeRange = 50;

	soundPlayer->AddAbilitySFX(TEXT("/Script/MetasoundEngine.MetaSoundSource'/Game/Audio/MetaSounds/MS_collect.MS_collect'"));
}

void ACubeCore::BeginPlay()
{
	Super::BeginPlay();
	
	defaultMat = Cast<UMaterial>(mesh->GetMaterial(0));

	// Create a socket info for each cube (also inherited to connectors)
	// Need to create one for each cube otherwise the information would be shared/overrided.
	socketInfo = NewObject<UCubeSocketInfo>();
	
	onTurnStarted.AddDynamic(this, &ACubeCore::Start);
	if(ACollector* _collector = Cast<ACollector>(UGameplayStatics::GetActorOfClass(GetWorld(), ACollector::StaticClass()))) collector = _collector;

	if(Cast<AMode_Story>(UGameplayStatics::GetGameMode(wrld))) currentMode = EGameMode::Story;
	else if(Cast<AMode_Wave>(UGameplayStatics::GetGameMode(wrld))) currentMode = EGameMode::Wave;
	else if(Cast<AMode_Assault>(UGameplayStatics::GetGameMode(wrld))) currentMode = EGameMode::Assault;
	else if(Cast<AMode_Creative>(UGameplayStatics::GetGameMode(wrld))) currentMode = EGameMode::Creative;

	if (UCustomGameInstance* customInst = Cast<UCustomGameInstance>(UGameplayStatics::GetGameInstance(wrld)))
	{
		instance = customInst;
	}
	else Print("Couldn't cast to game instance...", 4)
}

EOperations ACubeCore::SetSelected(const bool value)
{
	// Not allowed to drop the cube if unable to collect 
	selected = value;

	// Only use continuous collisions while selected (to prevent objects from going through objects).
	mesh->SetUseCCD(selected);
	SetEnableCollisions(!selected);

	ToggleGravity();
	return EOperations::Move;
}

void ACubeCore::Detach(const bool push)
{
	if(!ObjectInSocket(raySocket)) return;

	APickupableMaster* obj = socketInfo->GetObjectInSocket(raySocket);
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
	if(!mesh) return;
	if(mesh->IsSimulatingPhysics()) mesh->SetAngularDamping(defaultAngularDrag);
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
	TArray<APickupableMaster*> objs = socketInfo->GetAttachments();
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

void ACubeCore::SetAllAbilityActive(bool value) const
{
	const AActor* self = this;

	// The get descendents function ensures that every single thing that is attached to the core (even if it's connected in a chain) is set. 
	TArray<APickupableMaster*> children;
	GetDescendents(self, children);
	
	for (const auto& obj : children) obj->SetAbilityActive(value);
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

void ACubeCore::RevertAttachments()
{
	TArray<APickupableMaster*> currentAttachments = GetAttachedObjs();

	// Removes all the attachments that weren't there before the undo/redo
	for (auto& obj : currentAttachments)
	{
		if(!previousAttachments.Contains(obj))
		{
			obj->Detach(false);
			RemoveAttachment(obj);
		}
	}
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

int ACubeCore::SelectSocket(int socket)
{
	if(!IsValid(socketInfo))
	{
		Print("Socket info invalid...", 5)
		return -1;
	}
	
	TArray<APickupableMaster*> objs = socketInfo->GetAttachments();
	if(objs.IsEmpty()) return -1;

	for (const auto& obj : objs) if(obj) obj->DeactivateOutline();
	
	// Set socket to -1 if the first element is the same element
	if(objs.Find(selectedObj) == socket && socket == 0) socket = objs.Num() - 1;
	if(!objs.IsValidIndex(socket))
	{
		if(socket > objs.Num() - 1) socket = objs.Num() - 1;
		else socket = 0;
	}

	if(objs.IsValidIndex(socket)) selectedObj = objs[socket];
	
	selectedObj->ActivateOutline(selectedMat);
	return socket;
}

void ACubeCore::Teleport(const FVector& pos, const FRotator& rot)
{
	mesh->SetSimulatePhysics(true);
	for (auto& obj : GetCloseAttachments())
	{
		if(obj->IsA<ABalloon>())
		{
			obj->GetMesh()->SetSimulatePhysics(true);
			obj->SetActorLocation(pos + obj->GetActorForwardVector() * 150);
		}
	}

	SetActorLocation(pos);
	SetActorRotation(rot);
}


void ACubeCore::ResetRotation(bool resetVelocity)
{
	Super::ResetRotation(resetVelocity);

	if(!resetVelocity) return;

	TArray<APickupableMaster*> objs = socketInfo->GetAttachments();
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

void ACubeCore::SetAttachedSocket(FName socket, const bool useDirection)
{
	
}

void ACubeCore::TimedObjectActivation(TArray<int> delays, TArray<int> durations, const float longestDuration)
{
	 TArray<APickupableMaster*> objs = GetCloseAttachments();

	if(objs.IsEmpty())
	{
		const FTimerDelegate resetDelegate = FTimerDelegate::CreateUObject(this, &ACubeCore::ResetToStart);
		wrld->GetTimerManager().SetTimer(resetTimer, resetDelegate, 3, false);
		return;
	}

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

	const FTimerDelegate resetDelegate = FTimerDelegate::CreateUObject(this, &ACubeCore::ResetToStart);
	wrld->GetTimerManager().SetTimer(resetTimer, resetDelegate, longestDuration, false);
}

void ACubeCore::SetCanCollect(bool collectable)
{
	mesh->SetMaterial(0, !collectable? inactiveMat: defaultMat);
	canCollect = collectable;
}

void ACubeCore::Reattach(const bool sound)
{
	// The previous object needs to be valid
	if(!previousObj) return;
	
	RevertAttachments();
}

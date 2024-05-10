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
#include "Connectors/WedgeConnector.h"
#include "./projProblox/Pickupables/Wheel.h"
#include "Kismet/GameplayStatics.h"
#include "projProblox/GameModes/Modes.h"

void ACubeCore::SetupIndicator()
{
	indicator->ArrowColor.A = .5f;

	const float length = placeRange * 2;
	indicator->ArrowLength = length;

	const FRotator rot = UKismetMathLibrary::MakeRotFromX({0,0,-1});
	indicator->SetRelativeRotation(rot);

	indicator->SetWorldLocation(mesh->GetSocketLocation("DOWN"));
	SetHideIndicator(true);
}

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

	pickupCollider->SetBoxExtent({});
	
	placeRange = 50;
}

void ACubeCore::BeginPlay()
{
	Super::BeginPlay();
	defaultMat = Cast<UMaterial>(mesh->GetMaterial(0));

	SetupIndicator();
	
	// Create a socket info for each cube (also inherited to connectors)
	// Need to create one for each cube otherwise the information would be shared/overrided.
	socketInfo = NewObject<UCubeSocketInfo>();
	AdjustRange();

	onStartGame.AddDynamic(this, &ACubeCore::Start);
	if(ACollector* _collector = Cast<ACollector>(UGameplayStatics::GetActorOfClass(GetWorld(), ACollector::StaticClass()))) collector = _collector;

	UWorld* wrld = GetWorld();
	if(Cast<AMode_Story>(UGameplayStatics::GetGameMode(wrld))) currentMode = EGameMode::Story;
	else if(Cast<AMode_Wave>(UGameplayStatics::GetGameMode(wrld))) currentMode = EGameMode::Wave;
	else if(Cast<AMode_Assault>(UGameplayStatics::GetGameMode(wrld))) currentMode = EGameMode::Assault;
	else if(Cast<AMode_Creative>(UGameplayStatics::GetGameMode(wrld))) currentMode = EGameMode::Creative;

	resetTransform = GetActorTransform();
}


void ACubeCore::Placement()
{
	if(!canPlace) return;
	if(!selected) return;

	// Unhide the indicator...
	SetHideIndicator(false);
	if(ObjectInSocket(raySocket))
	{
		// Hide it if blocked...
		SetHideIndicator(true);
		return;
	}

	RemoveVelocity();
	
	const UWorld* wrld = GetWorld();
	
	FHitResult hit;
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);
	collisionParams.MobilityType = EQueryMobilityType::Any;
	collisionParams.bDebugQuery = true;

	const FVector direction = mesh->GetComponentRotation().RotateVector(placeDir);
	
	// Debug Draw
	const FVector start = mesh->GetSocketLocation(raySocket);
	// DrawDebugLine(wrld, start, start + direction * placeRange, FColor::Red, false, 5);	
	wrld->LineTraceSingleByChannel(hit, start, start + direction * placeRange, ECC_Visibility, collisionParams);

	AActor* hitActor = hit.GetActor();
	if(!hit.bBlockingHit)
	{
		hitObj = 0;
		ResetGhost();
		return;
	}

	// DrawDebugPoint(wrld, hit.ImpactPoint, 10, FColor::Green, false, 5);
	
	if(!hitActor)
	{
		hitObj = 0;
		ResetGhost();
		return;
	}
	
	// If the cast was unsuccessful....
	if(APickupableMaster* obj = Cast<APickupableMaster>(hitActor)) hitObj = obj;
	else hitObj = 0;
	
	if(!IsValid(hitObj)) return;

	OtherGhostPlacement();
	attachedSocket = "DOWN";
}

void ACubeCore::OtherGhostPlacement()
{
	RemoveVelocity();

	if(!hitObj) return;
	
	// The cube core uses the silhouette of the other thing since the other thing is being attached to this. 
	silhouette = hitObj->GetSilhouette();
	attachOffset = hitObj->GetAttachOffset(*this);
	
	silhouette->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	
	silhouette->SetHiddenInGame(false);
	silhouette->AttachToComponent(mesh, ghostRules, raySocket);
	
	silhouette->SetRelativeLocation({hitObj->GetAttachOffset(*this),0,0});

	OtherRotations(*hitObj);
}

void ACubeCore::OtherRotations(const APickupableMaster& other)
{
	if(!IsValid(&other)) return;

	silhouette = other.GetSilhouette();
	FRotator socketRot = mesh->GetSocketRotation(raySocket);

	// Need to start with the class at the bottom of the inheritance chain and go up from there... 
	if(other.IsA<AWedgeConnector>())
	{
		silhouette->SetRelativeRotation({135,0,0});
		silhouette->SetRelativeLocation({0,0,0});
	}
	else if(other.IsA<ACubeConnector>())
	{
		// Ignore if the X and Y vectors aren't low...
		constexpr float aboveThreshold = .075f;
		const bool above = abs(socketRot.Vector().X) < aboveThreshold && abs(socketRot.Vector().Y) < aboveThreshold;
	
		if(above)
		{
			// Rotate the socket since the axis aren't the same orientation when the object is pointing upwards/downwards.
			const FVector socketForward = UKismetMathLibrary::GetForwardVector(socketRot);
			socketRot = socketRot.RotateVector(socketForward).Rotation();
		}
		else socketRot = RoundRotation(other.GetActorRotation(), socketRot);

		silhouette->SetWorldRotation(socketRot);

		// Ensure that it's aligned with this core.
		silhouette->SetWorldRotation(RoundRotation(silhouette->GetComponentRotation(), GetActorRotation(), -90));
	}
	else if(!other.IsA<ACubeCore>())
	{
		if(other.ShouldSnapRotation())
		{
			const FVector forwardVec = UKismetMathLibrary::GetForwardVector(mesh->GetSocketRotation(raySocket));

			FRotator rot;
			const FVector otherPlaceDir = other.GetPlaceDir();
			
			if(otherPlaceDir.X != 0) rot = UKismetMathLibrary::MakeRotFromX(forwardVec);
			else if(otherPlaceDir.Y != 0) rot = UKismetMathLibrary::MakeRotFromY(forwardVec);
			else if(otherPlaceDir.Z != 0) rot = UKismetMathLibrary::MakeRotFromZ(forwardVec);

			// Rotate to match the socket rotation
			silhouette->SetWorldRotation(rot);
			return;
		}

		// Ignore if the X and Y vectors aren't low...
		constexpr float aboveThreshold = .075f;
		const bool above = abs(socketRot.Vector().X) < aboveThreshold && abs(socketRot.Vector().Y) < aboveThreshold;
		
		if(above)
		{
			// Rotate the socket since the axis aren't the same orientation when the object is pointing upwards/downwards.
			const FVector socketForward = UKismetMathLibrary::GetForwardVector(socketRot);
			socketRot = socketRot.RotateVector(socketForward).Rotation();
		}
		else socketRot = RoundRotation(GetActorRotation(), socketRot);

		silhouette->SetWorldRotation(socketRot);

		const FRotator relativeRot = silhouette->GetComponentTransform().GetRelativeTransform(GetTransform()).Rotator();
		silhouette->SetRelativeRotation(relativeRot + other.GetRotOffset());
	}
}

EOperations ACubeCore::SetSelected(const bool value)
{
	// Not allowed to drop the cube if unable to collect 
	if(canPickup) selected = value;
	else selected = true;

	// Only use continuous collisions while selected (to prevent objects from going through objects).
	mesh->SetUseCCD(selected);
	
	ToggleGravity();
	SetHideIndicator(!selected);

	// Make the wheel ignore collisions and not ... fly away
	for(const auto& obj : socketInfo->GetAttachments())
	{
		if(obj->IsA<AWheel>()) Cast<AWheel>(obj)->SetParentDominates(true);
	}

	if(selected)
	{
		canPlace = true;
		return {EOperations::Move};
	}

	indicator->SetHiddenInGame(true);
	ResetGhost();
	
	// Make the wheel go back to normal when it's unselected.
	for(const auto& obj : socketInfo->GetAttachments())
	{
		if(obj->IsA<AWheel>()) Cast<AWheel>(obj)->SetParentDominates(false);
	}
	
	if(!IsValid(hitObj)) return {EOperations::Move};

	// Teleport the hit object to the silhouette
	hitObj->UseSilhouetteTransform(silhouette);
	
	// Syncing the socket info
	AddAttachment(hitObj, attachedSocket);
	hitObj->SetAttachedSocket(attachedSocket);
	hitObj->SetCore(this);

	// Since the wheel uses physics constraints instead of normal attachments
	if(!hitObj->IsA<AWheel>())
	{
		hitObj->AttachToActor(this, attachRules, attachedSocket);
	}
	else Cast<AWheel>(hitObj)->Attach(this);

	// Remove the reference to the hit object so that this part of SetSelected doesn't get called
	previousObj = hitObj;
	hitObj = 0;
	return {EOperations::Attach};
}

bool ACubeCore::SetGroupSelected(const bool value)
{
	if(!canCollect) return false;

	return Super::SetGroupSelected(value);
}

void ACubeCore::ResetToStart()
{
	SetActorTransform(resetTransform);
	RemoveVelocity();

	attempts++;
	buildPhase = true;
	onReset.Broadcast(attempts);
}

// When the start button is pressed....
void ACubeCore::Start()
{
	if(currentMode == EGameMode::Wave) SetActorTransform(resetTransform);
	
	// Save the transform...
	resetTransform = GetActorTransform();
	buildPhase = false;

}

void ACubeCore::CalculateRating()
{
	if(attempts <= moveRatings[3]) rating = 3;
	else if(attempts > moveRatings[3] && attempts <= moveRatings[2]) rating = 2;
	else if(attempts > moveRatings[2] && attempts <= moveRatings[1]) rating = 1;
	
	else if(attempts >= moveRatings[0]) rating = 0;
}


void ACubeCore::AddAttachment(APickupableMaster* attachment, const FName& socket)
{
	attachedSocket = socket;

	socketInfo->AddAttachment(attachment, socket);
	ToggleGravity();
	isAttached = true;

	onChangeAttachments.Broadcast();
	previousAttachments = GetAttachedObjects();
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
	previousAttachments = GetAttachedObjects();
}

void ACubeCore::RemoveAttachment(APickupableMaster* obj)
{
	if(!IsValid(obj)) return;
	
	socketInfo->RemoveAttachment(obj);
	mesh->SetEnableGravity(true);

	onChangeAttachments.Broadcast();
	previousAttachments = GetAttachedObjects();
}

bool ACubeCore::DetachAll(const bool push)
{
	if(!socketInfo) return false;

	// Return false if there weren't any things to detach
	TArray<APickupableMaster*> objs = socketInfo->GetAttachments();
	if(objs.IsEmpty()) return false;
	
	for(const auto& obj : objs)
	{
		if(!IsValid(obj)) continue;
		
		obj->Detach();
		obj->RemoveVelocity();
		
		if(!push) continue;
		const FVector launchDir = UKismetMathLibrary::GetForwardVector(mesh->GetSocketRotation(obj->GetAttachedSocket()));
		const float launchForce = obj->GetMass();

		constexpr float maxVelocity = 1000;
		obj->AddVelocity(launchDir * std::min(launchForce, maxVelocity));
	}

	socketInfo->ClearAttachments();
	return true;
}


void ACubeCore::SetAbilityActive(bool value)
{
	if(IsValid(selectedObj)) selectedObj->SetAbilityActive(value);
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
	float mass = mesh->GetMass();

	const AActor* self = this;
	TArray<APickupableMaster*> children;
	GetDescendents(self, children);
	
	for (const auto& obj : children) mass += obj->GetMass();
	return mass;
}

void ACubeCore::RevertAttachments()
{
	TArray<APickupableMaster*> currentAttachments = GetAttachedObjects();

	for (auto& obj : currentAttachments)
	{
		if(!previousAttachments.Contains(obj))
		{
			obj->Detach();
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

void ACubeCore::NextWave()
{
	attempts++;
	onNewWave.Broadcast(attempts);
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
	if(socket != raySocket)
	{
		attachedSocket = socket;
		return;
	}

	RearrangeSockets();
}

void ACubeCore::RearrangeSockets()
{
	// This only needs to happen if there's an object in the bottom slot when trying to attach to a cube..
	if(!ObjectInSocket(raySocket))
	{
		Print("down is blocked.", 4)
		return;
	}

	TArray<APickupableMaster*> objects = socketInfo->GetObjectsArray();
	TArray<FName> sockets = socketInfo->GetSockets();
	
	for(int i = 0; i < objects.Num(); i++)
	{
		// Continue if the object is invalid
		if(!objects[i]) continue;

		const FName oppSocket = socketInfo->GetOppositeSocket(i);

		// Kick out the thing that's in the opposite socket if there's something there....
		if(socketInfo->ObjectInSocket(oppSocket))
		{
			socketInfo->GetObjectInSocket(oppSocket)->Detach();
			RemoveAttachment(oppSocket);
		}

		// Then replace it with the new thing
		RemoveAttachment(sockets[i]);
		AddAttachment(objects[i], oppSocket);

		objects[i]->AttachToActor(this, attachRules, oppSocket);
		objects[i]->ApplyOffset(this);
		objects[i]->SetAttachedSocket(oppSocket, false);
	}

	attachedSocket = "Up";
}


void ACubeCore::TimedObjectActivation(TArray<int> delays, TArray<int> durations)
{
	 TArray<APickupableMaster*> objs = GetCloseAttachments();

	if(objs.IsEmpty())
	{
		Print("objects array empty", 6)
		return;
	}

	const UWorld* wrld = GetWorld();
	for(int i = 0; i < objs.Num(); i++)
	{
		FTimerHandle activationHandle;
		FTimerHandle deactivationHandle;
        
		// Activate/Deactivate the things
		FTimerDelegate activateDelegate = FTimerDelegate::CreateUObject(objs[i], &APickupableMaster::SetAbilityActive, true);
		FTimerDelegate deactivateDelegate = FTimerDelegate::CreateUObject(objs[i], &APickupableMaster::SetAbilityActive, false);

		// Activate...
		wrld->GetTimerManager().SetTimer(activationHandle, activateDelegate, delays[i] < 1? .1f : delays[i], false);

		// Deactivate after the delay and duration elapses activation...
		wrld->GetTimerManager().SetTimer(deactivationHandle, deactivateDelegate, (delays[i] < 1? .1f : delays[i]) + durations[i], false);

		// If the current duration is bigger than "longestDuration" set the new longest duration... otherwise.. same.
		longestDuration = (delays[i] < 1? .1f : delays[i]) + durations[i] > longestDuration? (delays[i] < 1? .1f : delays[i]) + durations[i] : longestDuration;
	}

	FTimerHandle startResetHandle;
	const FTimerDelegate startResetDelegate = FTimerDelegate::CreateUObject(this, &ACubeCore::InitiateReset);
	wrld->GetTimerManager().SetTimer(startResetHandle, startResetDelegate, longestDuration, false);

	const FTimerDelegate resetDelegate = FTimerDelegate::CreateUObject(this, &ACubeCore::ResetToStart);
	wrld->GetTimerManager().SetTimer(resetTimer, resetDelegate, longestDuration + resetDelay, false);
}

void ACubeCore::SetCanPickup(bool can)
{
	// Only broadcast when there's a change
	const bool change = can != canPickup;
	Super::SetCanPickup(can);

	SetCanCollect(can || !selected);

	if(!canPickup && change) onRangeExceeded.Broadcast();

	distanceLine->SetHiddenInGame(true);
	
	if(can) return;
	distanceLine->SetHiddenInGame(!buildPhase);
	
	distanceLine->SetWorldLocation(mesh->GetComponentLocation());

	const FVector thisPos = distanceLine->GetComponentLocation();
	const FVector collectorPos = collector->GetActorLocation() + FVector(0,0,750);
	
	const FRotator lookRot = UKismetMathLibrary::FindLookAtRotation(thisPos, collectorPos);
	distanceLine->SetWorldRotation(lookRot);

	const float distance = FVector::Distance(collectorPos, thisPos);
	const FVector lineSize = distanceLine->GetRelativeScale3D();
	distanceLine->SetRelativeScale3D({distance * .01f, lineSize.Y, lineSize.Z});
}

void ACubeCore::SetCanCollect(bool collectable)
{
	mesh->SetMaterial(0, !collectable? inactiveMat: defaultMat);
	canCollect = collectable;
}

void ACubeCore::Reattach(const FTransform& transform)
{
	if(!hitObj) return;
	
	hitObj = previousObj;
	hitObj->Reattach(transform);
	RevertAttachments();
}

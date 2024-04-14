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

#include "CubeConnector.h"
#include "Thing.h"
#include "WedgeConnector.h"
#include "Wheel.h"
#include "Kismet/GameplayStatics.h"

ACubeCore::ACubeCore()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	thingHomer = CreateDefaultSubobject<UBoxComponent>("Bigger Collider");
	thingHomer->SetupAttachment(objMesh);
	thingCollector = CreateDefaultSubobject<UBoxComponent>("Smaller Collider");
	thingCollector->SetupAttachment(objMesh);

	placeRange = 50;
}

void ACubeCore::BeginPlay()
{
	Super::BeginPlay();
	defaultMat = Cast<UMaterial>(objMesh->GetMaterial(0));

	SetupIndicator();
	
	// Create a socket info for each cube (also inherited to connectors)
	// Need to create one for each cube otherwise the information would be shared/overrided.
	socketInfo = NewObject<UCubeSocketInfo>();
	AdjustRange();
	
	if(ACollector* _collector = Cast<ACollector>(UGameplayStatics::GetActorOfClass(GetWorld(), ACollector::StaticClass()))) collector = _collector;
}


void ACubeCore::Placement()
{
	if(!canPlace) return;
	if(!selected) return;
	if(ObjectInSocket("Down")) return;

	RemoveVelocity();
	
	const UWorld* wrld = GetWorld();
	
	FHitResult hit;
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);
	collisionParams.MobilityType = EQueryMobilityType::Any;
	collisionParams.bDebugQuery = true;

	const FVector direction = objMesh->GetComponentRotation().RotateVector(placeDir);
	
	// Debug Draw
	const FVector start = GetActorLocation();
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
	attachedSocket = "Down";
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
	silhouette->AttachToComponent(objMesh, ghostRules, "DOWN");
	
	silhouette->SetRelativeLocation({hitObj->GetAttachOffset(*this),0,0});

	OtherRotations(*hitObj);
}

void ACubeCore::OtherRotations(const APickupableMaster& other)
{
	if(!IsValid(&other)) return;
	silhouette = other.GetSilhouette();
	
	if(other.IsA<ACubeConnector>())
	{
		
	}
	else if(other.IsA<AWedgeConnector>())
	{
		
	}
	else
	{
		if(other.ShouldSnapRotation())
		{
			const FVector forwardVec = UKismetMathLibrary::GetForwardVector(objMesh->GetSocketRotation("DOWN"));

			FRotator rot;
			const FVector otherPlaceDir = other.GetPlaceDir();
			
			if(otherPlaceDir.X != 0) rot = UKismetMathLibrary::MakeRotFromX(forwardVec);
			else if(otherPlaceDir.Y != 0) rot = UKismetMathLibrary::MakeRotFromY(forwardVec);
			else if(otherPlaceDir.Z != 0) rot = UKismetMathLibrary::MakeRotFromZ(forwardVec);

			// Rotate to match the socket rotation
			silhouette->SetWorldRotation(rot);
			return;
		}

		FRotator socketRot = objMesh->GetSocketRotation(attachedSocket);
		const FBox otherBB = other.GetMesh()->Bounds.GetBox();
		const float otherHeight = otherBB.Max.Z - otherBB.Min.Z;
		
		const bool above = other.GetActorLocation().Z + otherHeight <= GetActorLocation().Z;
		if(above)
		{
			const FVector socketForward = UKismetMathLibrary::GetForwardVector(socketRot);
			socketRot = socketRot.RotateVector(socketForward).Rotation();
		}
	
		silhouette->SetWorldRotation(RoundRotation(GetActorRotation(), socketRot));
	}
}

void ACubeCore::SetSelected(const bool value)
{
	// Not allowed to drop the cube if unable to collect 
	if(canPickup) selected = value;
	else selected = true;
	SetHideIndicator(!selected);

	// Make the wheel ignore collisions and not ... fly away
	for(const auto& obj : socketInfo->GetAttachments())
	{
		if(obj->IsA<AWheel>()) Cast<AWheel>(obj)->SetParentDominates(true);
	}

	if(selected)
	{
		canPlace = true;
		return;
	}

	indicator->SetHiddenInGame(true);
	ResetGhost();
	
	// Make the wheel go back to normal when it's unselected.
	for(const auto& obj : socketInfo->GetAttachments())
	{
		if(obj->IsA<AWheel>()) Cast<AWheel>(obj)->SetParentDominates(false);
	}
	
	if(!IsValid(hitObj)) return;

	Print("Added from core", 3)
	
	// Rotate to match the socket rotation
	hitObj->SetActorRotation(hitObj->GetSilhouette()->GetComponentRotation());
	hitObj->SetActorLocation(hitObj->GetSilhouette()->GetComponentLocation());
	
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
	hitObj = 0;
}

bool ACubeCore::SetGroupSelected(const bool value)
{
	if(!canCollect) return false;

	return Super::SetGroupSelected(value);;
}


void ACubeCore::AddAttachment(APickupableMaster* attachment, const FName& socket)
{
	attachedSocket = socket;

	socketInfo->AddAttachment(attachment, socket);
	GravitySelection();
	isAttached = true;

	onChangeAttachments.Broadcast();
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
	objMesh->SetEnableGravity(true);
	onChangeAttachments.Broadcast();
}

void ACubeCore::RemoveAttachment(APickupableMaster* obj)
{
	if(!IsValid(obj)) return;
	
	socketInfo->RemoveAttachment(obj);
	objMesh->SetEnableGravity(true);
	onChangeAttachments.Broadcast();
}

void ACubeCore::DetachAll(const bool push)
{
	if(!socketInfo) return;
	for(const auto& obj : socketInfo->GetAttachments())
	{
		if(!IsValid(obj)) continue;
		
		obj->Detach();
		obj->RemoveVelocity();
		
		if(!push) continue;
		const FVector launchDir = UKismetMathLibrary::GetForwardVector(objMesh->GetSocketRotation(obj->GetAttachedSocket()));
		const float launchForce = obj->GetMass();

		constexpr float maxVelocity = 1000;
		obj->AddVelocity(launchDir * std::min(launchForce, maxVelocity));
	}

	socketInfo->ClearAttachments();
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
	float mass = objMesh->GetMass();

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

	if(AThing* thing = Cast<AThing>(_thing))
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
		PrintInt(socket, 2)
		
		if(socket > objs.Num() - 1) socket = objs.Num() - 1;
		else socket = 0;
	}

	if(objs.IsValidIndex(socket)) selectedObj = objs[socket];
	
	Print(FString::FromInt(socket), 4)
	selectedObj->ActivateOutline(selectedMat);
	return socket;
}


void ACubeCore::ResetRotation(bool resetVelocity)
{
	Super::ResetRotation(resetVelocity);

	if(!resetVelocity) return;

	for(const auto& obj : socketInfo->GetAttachments()) obj->RemoveVelocity();
}

void ACubeCore::RemoveVelocity() const
{
	Super::RemoveVelocity();

	const AActor* self = this ;
	TArray<APickupableMaster*> children;
	GetDescendents(self, children);
	
	for(const auto& obj : children) obj->RemoveVelocity();
}

void ACubeCore::GravitySelection() const
{
	// Disable gravity on this.
	Super::GravitySelection();

	// Disable gravity on all of the things attached to the core.
	for(const auto& obj : GetAttachedObjects()) obj->GetMesh()->SetEnableGravity(!selected);
}

void ACubeCore::SetAttachedSocket(FName socket, const bool useDirection)
{
	if(socket != "Down")
	{
		attachedSocket = socket;
		return;
	}

	RearrangeSockets();
}

void ACubeCore::RearrangeSockets()
{
	// This only needs to happen if there's an object in the bottom slot when trying to attach to a cube..
	if(!ObjectInSocket("down")) return;

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
	Print("setting timer", 4)
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

		
	}
}

void ACubeCore::SetCanPickup(bool can)
{
	// Only broadcast when there's a change
	const bool change = can != canPickup;
	Super::SetCanPickup(can);
	
	SetCanCollect(can || !selected);

	if(!canPickup && change) onRangeExceeded.Broadcast();
}

void ACubeCore::SetCanCollect(bool collectable)
{
	objMesh->SetMaterial(0, !collectable? inactiveMat: defaultMat);
	canCollect = collectable;
}
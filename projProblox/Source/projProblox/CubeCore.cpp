// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeCore.h"

#include "Thing.h"
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


void ACubeCore::SetCanPickup(const bool can)
{
	// Only broadcast when there's a change
	const bool change = can != canPickup;
	Super::SetCanPickup(can);
	
	SetCanCollect(canPickup);

	if(!canPickup && change) onRangeExceeded.Broadcast();
}

void ACubeCore::SetCanCollect(bool collectable)
{
	objMesh->SetMaterial(0, !collectable? inactiveMat: defaultMat);
	canCollect = collectable;
}

void ACubeCore::BeginPlay()
{
	Super::BeginPlay();
	defaultMat = Cast<UMaterial>(objMesh->GetMaterial(0));

	// Create a socket info for each cube (also inherited to connectors)
	// Need to create one for each cube otherwise the information would be shared/overrided.
	socketInfo = NewObject<UCubeSocketInfo>();
	AdjustRange();
	
	if(ACollector* _collector = Cast<ACollector>(UGameplayStatics::GetActorOfClass(GetWorld(), ACollector::StaticClass()))) collector = _collector;
}

void ACubeCore::RemoveAttachment(const FName& socket)
{
	Super::RemoveAttachment(socket);

	socketInfo->RemoveAttachment(socket);
	GravitySelection();
}

void ACubeCore::SetAbilityActive(bool value)
{
	const AActor* self = this;
	TArray<APickupableMaster*> children;
	GetDescendents(self, children);
	
	for (const auto& obj : children) obj->SetAbilityActive(value);
}

void ACubeCore::DetachAll(const bool push)
{
	for(const auto& obj : socketInfo->GetObjectsArray())
	{
		if(!IsValid(obj)) continue;
		
		obj->Detach();
		obj->RemoveVelocity();
		
		if(!push) continue;
		const FVector launchDir = UKismetMathLibrary::GetForwardVector(objMesh->GetSocketRotation(obj->GetAttachedSocket()));
		const float launchForce = obj->GetMass();
		obj->GravitySelection();

		constexpr float maxVelocity = 1000;
		obj->AddVelocity(launchDir * std::max(launchForce, maxVelocity));
	}

	socketInfo->ClearAttachments();
}


// TArray<AActor*> ACubeCore::GetAttachedObjActors(const bool deepGet) const
// {
// 	TArray<AActor*> objects = socketInfo->GetAttachmentActors();
//
// 	if(!deepGet) return objects;
// 	
// 	for(const auto& obj : objects)
// 	{
// 		if(const ACubeCore* cube = Cast<ACubeCore>(obj))
// 		{
// 			// Don't append if the array is empty (crashes otherwise...)
// 			if(cube->GetAttachedObjects(true).IsEmpty()) continue;
//
// 			objects.Append(cube->GetAttachedObjects(true));
// 		}
// 	}
// 	
// 	return objects;
// }
//
// TArray<APickupableMaster*> ACubeCore::GetAttachedObjects(bool deepGet) const
// {
// 	TArray<APickupableMaster*> objects = socketInfo->GetAttachments();
//
// 	if(!deepGet) return objects;
//
// 	for(const auto& obj : objects)
// 	{
// 		TArray<AActor*> outActors;
// 		obj->GetAttachedActors(outActors);
//
// 		for (const auto& actor : outActors)
// 		{
// 			objects.AddUnique(Cast<APickupableMaster>(actor));
// 		}
// 		
// 	}
// 	
// 	return objects;
// }

void ACubeCore::SetSelected(const bool value)
{
	// Not allowed to drop the cube if unable to collect 
	if(canCollect) selected = value;
	else selected = true;
	
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
	// Reset once the object has been dropped 
	appliedYaw = 0;
	
	// Make the wheel go back to normal when it's unselected.
	for(const auto& obj : socketInfo->GetAttachments())
	{
		if(obj->IsA<AWheel>()) Cast<AWheel>(obj)->SetParentDominates(false);
	}
	
	if(!IsValid(hitObj)) return;

	const FVector forwardVec = UKismetMathLibrary::GetForwardVector(objMesh->GetSocketRotation(attachedSocket));
	const FRotator rot = UKismetMathLibrary::MakeRotFromZ(forwardVec);

	// Rotate to match the socket rotation
	hitObj->SetActorRotation(rot);
	
	// Syncing the socket info
	AddAttachment(hitObj, attachedSocket);
	hitObj->SetAttachedSocket(attachedSocket);
	hitObj->SetCore(this);

	// Since the wheel uses physics constraints instead of normal attachments
	if(!hitObj->IsA<AWheel>())
	{
		hitObj->AttachToActor(this, attachRules, attachedSocket);
		hitObj->ApplyOffset();
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

float ACubeCore::GetMass() const
{
	float mass = objMesh->GetMass();
	for (const auto& obj : socketInfo->GetAttachments()) mass += obj->GetMass();

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

void ACubeCore::Placement()
{
	if(!canPlace) return;
	if(!selected) return;
	if(ObjectInSocket("Down")) return;

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
		return;
	}

	// DrawDebugPoint(wrld, hit.ImpactPoint, 10, FColor::Green, false, 5);
	
	if(!hitActor)
	{
		hitObj = 0;
		return;
	}
	
	// If the cast was unsuccessful....
	if(APickupableMaster* obj = Cast<APickupableMaster>(hitActor)) hitObj = obj;
	else hitObj = 0;
	
	if(!IsValid(hitObj)) return;

	attachedSocket = "Down";
}

void ACubeCore::ResetRotation(bool resetVelocity)
{
	Super::ResetRotation(resetVelocity);

	if(!resetVelocity) return;

	for(const auto& obj : socketInfo->GetAttachments()) obj->RemoveVelocity();
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
		objects[i]->ApplyOffset();
		objects[i]->SetAttachedSocket(oppSocket, false);
	}

	attachedSocket = "Up";
}

void ACubeCore::AddAttachment(APickupableMaster* attachment, const FName& socket)
{
	attachedSocket = socket;

	socketInfo->AddAttachment(attachment, socket);
	GravitySelection();
	isAttached = true;
}

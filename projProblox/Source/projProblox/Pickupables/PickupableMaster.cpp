/**************************************************************************************************************
* Pickupable Master - Code
* 
* The code file for the parent class of all the movable things in the game. Gives functionality to the declared functions. Most of these base functions can
* be modified by inherited classes but functions like rotate and remove velocity are universal.
* Also creates the actor components that all variations of this class will have... Mesh and collider.
*
* PROBLEMS:
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/

#include "PickupableMaster.h"

#include "Cores/CubeCore.h"
#include "./projProblox/Cells/Cell.h"

// Sets default values
APickupableMaster::APickupableMaster()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	mesh->SetSimulatePhysics(true);
	mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	mesh->SetGenerateOverlapEvents(true);
	
	silhouette = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ghost Mesh"));
	silhouette->SetCollisionResponseToAllChannels(ECR_Overlap);
	silhouette->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	silhouette->SetStaticMesh(mesh->GetStaticMesh());
	silhouette->SetupAttachment(mesh);
	silhouette->SetHiddenInGame(true);
	
	silhouette->SetMassOverrideInKg("", 0);
	silhouette->SetSimulatePhysics(false);
	silhouette->UnWeldFromParent();
	silhouette->SetEnableGravity(false);
	
	placer_ = CreateDefaultSubobject<UArrowComponent>("Place Indicator");
	placer_->SetupAttachment(mesh);

	centerMass = CreateDefaultSubobject<USceneComponent>("Center of Gravity");
	centerMass->SetupAttachment(mesh);
	
	pickup = CreateDefaultSubobject<UBoxComponent>(TEXT("Pickup Detector"));
	pickup->AttachToComponent(mesh, FAttachmentTransformRules::KeepRelativeTransform);
	pickup->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	pickup->SetCollisionResponseToChannel(ECC_Camera, ECR_Block);
	pickup->AddRelativeLocation({0,0,50});
	
	defaultRot = mesh->GetRelativeRotation();
	
	sounder = CreateDefaultSubobject<UAudioManager>("Sound Player");
	sounder->Attach(mesh);
}

// Called when the game starts or when spawned
void APickupableMaster::BeginPlay()
{
	Super::BeginPlay();
	if(sounder && mesh) sounder->Attach(mesh);

	if(placeDir.X != 0) placeRange *= mesh->GetRelativeScale3D().X;
	else if(placeDir.Y != 0) placeRange *= mesh->GetRelativeScale3D().Y;
	else if(placeDir.Z != 0) placeRange *= mesh->GetRelativeScale3D().Z;
	
	defaultMat = Cast<UMaterial>(mesh->GetMaterial(0));
	silhouetteMat = Cast<UMaterial>(silhouette->GetMaterial(0));
	SetPlaceIndicator();

	// Only set a custom center of mass if it has been moved... 
	if(centerMass->GetRelativeLocation().Length() <= .005f) return;
	mesh->SetCenterOfMass(centerMass->GetRelativeLocation());
}

// Called every frame
void APickupableMaster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Ability(DeltaTime);
	Placement();
}

void APickupableMaster::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	if(!parentCore) return;

	// Don't allow cells to be collected from this collider.
	if(!Tags.IsEmpty()) return;

	// Successful cast???
	if(Cast<ACell>(OtherActor)) parentCore->AddThing(OtherActor);
}



void APickupableMaster::ScaleIndicator()
{
	placer_->ArrowColor.A = .5f;

	const FVector actorScale = GetActorRelativeScale3D();
	const FVector indiScale = placer_->GetRelativeScale3D();
	
	FVector scale;
	scale.X = indiScale.X / actorScale.X;
	scale.Y = indiScale.Y / actorScale.Y;
	scale.Z = indiScale.Z / actorScale.Z;

	// Removes the scale relativity so that the place range is accurate... 
	placer_->SetRelativeScale3D(scale);
	placer_->ArrowLength = placeRange;
}

void APickupableMaster::SetPlaceIndicator()
{
	const FRotator rot = UKismetMathLibrary::MakeRotFromX(placeDir);
	placer_->SetRelativeRotation(rot);
	ScaleIndicator();
}


void APickupableMaster::Placement()
{
	if(!selected) return;

	RemoveVelocity();
	
	const UWorld* wrld = GetWorld();
	
	FHitResult hit;
	const FVector direction = GetActorRotation().RotateVector(placeDir);

	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);
	collisionParams.MobilityType = EQueryMobilityType::Any;
	
	// Debug Draw
	const FVector start = placer_->GetComponentLocation();
	// DrawDebugLine(wrld, start, start + direction * placeRange, FColor::Red, false, .2f);	
	wrld->LineTraceSingleByChannel(hit, start, start + direction * placeRange, ECC_Camera, collisionParams);

	if(!hit.bBlockingHit)
	{
		parentCore = 0;
		ResetGhost();
		return;
	}

	// DrawDebugPoint(wrld, hit.ImpactPoint, 10, FColor::Green, false, .2f);
	
	if(ACubeCore* core = Cast<ACubeCore>(hit.GetActor())) parentCore = core;
	else parentCore = nullptr;
	
	if(!parentCore)
	{
		ResetGhost();
		return;
	}
	
	FName closestSocket = NearestSocket(parentCore, hit.Location);

	if(closestSocket != NAME_None) attachedSocket = closestSocket;
	GhostPlacement();
}

// Should only be called in the Placement Function at the very end....
void APickupableMaster::GhostPlacement()
{
	RemoveVelocity();
	
	if(!parentCore) return;
	silhouette->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	silhouette->SetHiddenInGame(false);
	silhouette->AttachToComponent(parentCore->GetMesh(), ghostRules, attachedSocket);
	
	silhouette->SetRelativeLocation({attachOffset,0,0});
	
	const UStaticMeshComponent* parentMesh = parentCore->GetMesh();
	
	if(snapRot)
	{
		const FVector forwardVec = UKismetMathLibrary::GetForwardVector(parentMesh->GetSocketRotation(attachedSocket));

		FRotator rot;
		if(placeDir.X != 0) rot = UKismetMathLibrary::MakeRotFromX(forwardVec);
		else if(placeDir.Y != 0) rot = UKismetMathLibrary::MakeRotFromY(forwardVec);
		else if(placeDir.Z != 0) rot = UKismetMathLibrary::MakeRotFromZ(forwardVec);

		// Rotate to match the socket rotation
		silhouette->SetWorldRotation(rot);
		SetGhostBlocked();
		return;
	}

	// Have to realign the socket rotation with another axis
	FRotator socketRot = parentMesh->GetSocketRotation(attachedSocket);
	const FVector socketForward = UKismetMathLibrary::GetForwardVector(socketRot);
	socketRot = socketRot.RotateVector(socketForward).Rotation();
	
	silhouette->SetWorldRotation(RoundRotation(GetActorRotation(), socketRot));

	// Whether or not the attached socket is the diagonal side of a wedge...
	const unsigned short rounder = attachedSocket == "DIAG"? 45 : 90; 
	
	// Ensures that the final rotation is always aligned.
	SetGhostBlocked();
}

EOperations APickupableMaster::SetSelected(const bool value)
{
	selected = value;

	// Only use continuous collisions while selected (to prevent objects from going through objects).
	mesh->SetUseCCD(selected);
	
	ToggleGravity();
	SetHideIndicator(!selected);

	if(selected)
	{
		wasDetached = isAttached;
		Detach(false);
		
		canPlace = true;
		return wasDetached? EOperations::Detach : EOperations::Move;
	}

	if(!parentCore) return  wasDetached? EOperations::Detach : EOperations::Move;
	if(attachedSocket == NAME_None) return wasDetached? EOperations::Detach : EOperations::Move;

	if(!previousObj) previousObj = parentCore;
	
	AttachToActor(parentCore, attachRules, attachedSocket);
	parentCore->AddAttachment(this, attachedSocket);
	isAttached = true;

	// Using the silhouette's location/rotation to set the actual transform.
	UseSilhouetteTransform();
	ResetGhost();

	sounder->PlayAttach();
	return EOperations::Attach;
}

EOperations APickupableMaster::SetGroupSelected(const bool value)
{
	groupSelected = value;

	ToggleGravity(!groupSelected);
	
	canPlace = !groupSelected;

	// If the player has unselected... the operation is move
	return EOperations::Move;
}

void APickupableMaster::AddAttachment(APickupableMaster* attachment, const FName& socket)
{
	attachedSocket = socket;
	isAttached = true;
}

void APickupableMaster::Detach(const bool push)
{
	ResetGhost();

	if(!parentCore && !previousObj)
	{
		Print("Couldn't detach... parent was invalid..", 4)
		return;
	}

	SetAbilityActive(false);

	ResetMaterial();
	RemoveVelocity();
	
	if(parentCore) parentCore->RemoveAttachment(attachedSocket);
	else previousObj->RemoveAttachment(attachedSocket);
	
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	silhouette->SetupAttachment(mesh);
	if(push)
	{
		const FVector launchDir = -UKismetMathLibrary::GetForwardVector(mesh->GetSocketRotation(attachedSocket));
		const float launchForce = GetMass();

		constexpr float maxVelocity = 1000;
		AddVelocity(launchDir * std::min(launchForce, maxVelocity));
	}
	
	if(parentCore)
	{
		previousObj = parentCore;
		parentCore = nullptr;
		
		// Only play the detach sound if there was a parent core
		sounder->PlayDetach();
	}

	ToggleGravity(true);
	isAttached = false;
}

void APickupableMaster::SetSavedTransform()
{
	if(parentCore)
	savedTransform = GetActorTransform().GetRelativeTransform(parentCore->GetActorTransform());
}


FRotator APickupableMaster::RoundRotation(const FRotator& rotation, const bool negate)
{
	// Quantize each component of the Rotator using Frac and Floor
	FRotator rounded;
	const float rounder = negate? -90 : 90;
		
	// Using -90 since otherwise the outputted rotation would face the opposite direction when attaching)
	rounded.Pitch = FMath::RoundHalfFromZero(rotation.Pitch / rounder) * rounder;
	rounded.Yaw = FMath::RoundHalfFromZero(rotation.Yaw / rounder) * rounder;
	rounded.Roll = FMath::RoundHalfFromZero(rotation.Roll / rounder) * rounder;

	return rounded;
}

FRotator APickupableMaster::RoundRotation(const FRotator& rotation, const float rounder)
{
	FRotator rounded;
		
	rounded.Pitch = FMath::RoundHalfFromZero(rotation.Pitch / rounder) * rounder;
	rounded.Yaw = FMath::RoundHalfFromZero(rotation.Yaw / rounder) * rounder;
	rounded.Roll = FMath::RoundHalfFromZero(rotation.Roll / rounder) * rounder;

	return rounded;
}

FRotator APickupableMaster::RoundRotation(const FRotator& rotation, const FRotator& referencedRot, const float rounder)
{
	const FRotator difference = rotation - referencedRot;

	// Round the differences to the rounder
	const float pitchDiff = FMath::RoundHalfFromZero(difference.Pitch / rounder) * rounder;
	const float yawDiff = FMath::RoundHalfFromZero(difference.Yaw / rounder) * rounder;
	const float rollDiff = FMath::RoundHalfFromZero(difference.Roll / rounder) * rounder;

	// Add the rounded differences to the reference rotation to get the rounded rotation
	return referencedRot + FRotator(pitchDiff, yawDiff, rollDiff);
}

FRotator APickupableMaster::RoundAxis(const FRotator& rotation, const FRotator& axis)
{
	FRotator rot = rotation;
	if(axis.Roll != 0) rot.Roll = FMath::RoundHalfFromZero(rot.Roll / axis.Roll) * axis.Roll;
	if(axis.Pitch != 0) rot.Pitch = FMath::RoundHalfFromZero(rot.Pitch / axis.Pitch) * axis.Pitch;
	if(axis.Yaw != 0) rot.Yaw = FMath::RoundHalfFromZero(rot.Yaw / axis.Yaw) * axis.Yaw;

	PrintRotator(rot, 1)
	return rot;
}

FRotator APickupableMaster::RoundAxis(const FRotator& rotation, const FRotator& referenceRot, const FRotator& axis)
{
	FRotator difference = rotation - referenceRot;

	// Round the differences to the specified axis rounder
	if(axis.Roll != 0) difference.Roll = FMath::RoundHalfFromZero(difference.Roll / axis.Roll) * axis.Roll;
	if(axis.Pitch != 0) difference.Pitch = FMath::RoundHalfFromZero(difference.Pitch / axis.Pitch) * axis.Pitch;
	if(axis.Yaw != 0) difference.Yaw = FMath::RoundHalfFromZero(difference.Yaw / axis.Yaw) * axis.Yaw;

	// Add the rounded differences to the reference rotation to get the rounded rotation
	return referenceRot + difference;
}


FRotator APickupableMaster::DiagRoundRot(const FRotator& rotation, const FRotator& referencedRot, const bool isDiag)
{
	constexpr float rounder = -90;
	
	// Calculate the difference between the rotations
	const FRotator difference = rotation - referencedRot;

	// If diag... the pitch needs to round to 45 instead of 90.
	float pitchDiff;
	if(isDiag) pitchDiff = FMath::RoundHalfFromZero(difference.Pitch / -45) * -45;
	else pitchDiff = FMath::RoundHalfFromZero(difference.Pitch / rounder) * rounder;
		
	// Round the differences to the nearest 90 degrees
	const float yawDiff = FMath::RoundHalfFromZero(difference.Yaw / rounder) * rounder;
	const float rollDiff = FMath::RoundHalfFromZero(difference.Roll / rounder) * rounder;

	// Add the rounded differences to the reference rotation to get the rounded rotation
	return referencedRot + FRotator(pitchDiff, yawDiff, rollDiff);
}

void APickupableMaster::AlignSocketRot(const bool useDirection)
{
	if(!parentCore) return;
	
	const UStaticMeshComponent* coreMesh = parentCore->GetMesh();
	const FVector forwardVec = UKismetMathLibrary::GetForwardVector(coreMesh->GetSocketRotation(attachedSocket));

	FRotator rot;
	if(placeDir.X != 0) rot = UKismetMathLibrary::MakeRotFromX(forwardVec);
	else if(placeDir.Y != 0) rot = UKismetMathLibrary::MakeRotFromY(forwardVec);
	else if(placeDir.Z != 0) rot = UKismetMathLibrary::MakeRotFromZ(forwardVec);

	const FRotator savedRot = RoundRotation(GetActorRotation());
	
	// Rotate to match the socket rotation
	SetActorRotation(rot);

	if(!useDirection) return;
	
	// Do this but just around the forward axis of the socket...
	if(placeDir.X != 0) AddActorWorldRotation(FRotator(0,0,savedRot.Roll));
	else if(placeDir.Y != 0) AddActorWorldRotation(FRotator(savedRot.Pitch,0,0));
	else if(placeDir.Z != 0) AddActorWorldRotation(FRotator(0, savedRot.Yaw, 0));
}

void APickupableMaster::ResetRotation(const bool resetVelocity)
{
	SetActorRotation(defaultRot);
	appliedYaw = 0;
	if(resetVelocity) RemoveVelocity();
}

void APickupableMaster::RotateVert(const float axis, const float rotSpeed)
{
	if(vertAxis.X != 0) AddActorWorldRotation({0,0, axis * rotSpeed});
	else if(vertAxis.Y != 0) AddActorWorldRotation({axis * rotSpeed, 0, 0});
	else if(vertAxis.Z != 0) AddActorWorldRotation({0, axis * rotSpeed, 0});
}

void APickupableMaster::RotateHori(const float axis, const float rotSpeed)
{
	if(horiAxis.X != 0) AddActorWorldRotation({0,0, axis * rotSpeed});
	else if(horiAxis.Y != 0) AddActorWorldRotation({axis * rotSpeed, 0, 0});
	else if(horiAxis.Z != 0) AddActorWorldRotation({0, axis * rotSpeed, 0});
	appliedYaw += axis * rotSpeed;
	
	// Wrap appliedYaw to -180 / 180
	if (appliedYaw > 180) appliedYaw -= 360;
	else if (appliedYaw < -180) appliedYaw += 360;
}

void APickupableMaster::SnapRotateMesh(const bool hori, const FString keypress)
{
	const float turn = keypress == "Q" || keypress == "R"? -90 : 90;
		
	if(hori)
	{
		if(horiAxis.X != 0) AddActorWorldRotation({0,0, turn});
		else if(horiAxis.Y != 0) AddActorWorldRotation({turn, 0, 0});
		else if(horiAxis.Z != 0) AddActorWorldRotation({0, turn, 0});
		appliedYaw += turn;
		
		// Wrap appliedYaw to -180 / 180
		if (appliedYaw > 180) appliedYaw -= 360;
		else if (appliedYaw < -180) appliedYaw += 360;
		return;
	}

	if(vertAxis.X != 0) AddActorWorldRotation({0,0, turn});
	else if(vertAxis.Y != 0) AddActorWorldRotation({turn, 0, 0});
	else if(vertAxis.Z != 0) AddActorWorldRotation({0, turn, 0});
}



FName APickupableMaster::NearestSocket(const ACubeCore* core, const FVector& hitPos) const
{
	if(!parentCore) return NAME_None;
	
	float shortestDistance = 999;
	FName closestSocket;
	const UStaticMeshComponent* coreMesh = core->GetMesh();
	
	for(const auto& socket: coreMesh->GetAllSocketNames())
	{
		// Don't incorporate sockets if there's already an object attached to it
		if(core) if(core->ObjectInSocket(socket)) continue;
		
		const float distance = FVector::Distance(coreMesh->GetSocketLocation(socket), hitPos);

		// Don't allow the attachment if the socket is out of range.
		if(distance > placeRange) continue;
		
		if(distance < shortestDistance)
		{
			shortestDistance = distance;
			closestSocket = socket;
		}
	}

	return closestSocket;
}

void APickupableMaster::RemoveVelocity() const
{
	mesh->SetPhysicsLinearVelocity(FVector::ZeroVector);
	mesh->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
}


void APickupableMaster::ResetGhost() const
{
	silhouette->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	silhouette->AttachToComponent(mesh, FAttachmentTransformRules::KeepWorldTransform);
	silhouette->SetHiddenInGame(true);

	silhouette->SetRelativeRotation({0,0,0});
	silhouette->SetRelativeLocation({0,0,0});
}

void APickupableMaster::SetGhostBlocked()
{
	// TArray<UPrimitiveComponent*> overlaps;
	// silhouette->GetOverlappingComponents(overlaps);
	// PrintVector(silhouette->GetRelativeLocation(), 1)
	//
	// TArray<AActor*> owners;
	// for(const auto& obj: overlaps)
	// {
	// 	AActor* owner = obj->GetOwner();
	// 	if(owner == this) continue;
	//
	// 	// only include things that are solid (ignores triggers)
	// 	if(obj->GetCollisionResponseToChannel(ECC_WorldDynamic) == ECR_Block) owners.Add(owner);
	// }
	//
	// for(const auto& obj : owners)
	// {
	// 	Print(obj->GetName(), 1)
	// 	// If there is a successful cast, there is a collision with another pickupable
	// 	const APickupableMaster* valid = Cast<APickupableMaster>(obj);
	// }
}


void APickupableMaster::ActivateOutline(UMaterialInstance* mat) const
{
	silhouette->SetHiddenInGame(false);
	silhouette->SetMaterial(0, mat);

	silhouette->AttachToComponent(mesh, ghostRules);
	silhouette->SetWorldRotation(mesh->GetComponentRotation());
	silhouette->SetWorldLocation(mesh->GetComponentLocation());
}

void APickupableMaster::DeactivateOutline() const
{
	ResetGhost();
	ResetMaterial();
}

void APickupableMaster::GetDescendents(const AActor* parent, TArray<APickupableMaster*>& outArray)
{
	if (!parent) return;

	TArray<AActor*> children;
	parent->GetAttachedActors(children);

	for (AActor* child : children)
	{
		if (APickupableMaster* objChild = Cast<APickupableMaster>(child))
		{
			outArray.Add(objChild);
			// Recursively get descendants of this child actor
			GetDescendents(child, outArray);
		}
	}
}

void APickupableMaster::GetDescendentsActors(const AActor* parent, TArray<AActor*>& outArray)
{
	if (!parent) return;

	TArray<AActor*> children;
	parent->GetAttachedActors(children);

	for (AActor* child : children)
	{
		outArray.Add(child);
		// Recursively get descendants of this child actor
		GetDescendentsActors(child, outArray);
	}
}

void APickupableMaster::GetAscendants(const AActor* child, TArray<APickupableMaster*>& outArray)
{
	if (!child) return;

	if (AActor* parent = child->GetAttachParentActor())
	{
		if (APickupableMaster* objParent = Cast<APickupableMaster>(parent))
		{
			outArray.Add(objParent);
			
			// Recursively get ascendants of this parent actor
			GetAscendants(parent, outArray);
		}
	}
}

void APickupableMaster::GetAscendantsActors(const AActor* child, TArray<AActor*>& outArray)
{
	if (!child) return;

	if (AActor* parent = child->GetAttachParentActor())
	{
		outArray.Add(parent);
		// Recursively get ascendants of this parent actor
		GetAscendantsActors(parent, outArray);
	}
}

TArray<APickupableMaster*> APickupableMaster::AllObjsInHierarchy()
{
	TArray<APickupableMaster*> all;

	GetDescendents(this, all);
	GetAscendants(this, all);
	return all;
}

APickupableMaster* APickupableMaster::GetParent()
{
	AActor* current = this;
	while (AActor* potParent = current->GetAttachParentActor()) current = potParent;

	if(APickupableMaster* parent = Cast<APickupableMaster>(current)) return parent;
	// If the cast fails
	Print("Didn't find a pickupable object at the top.", 5)
	return 0;
}

bool APickupableMaster::IsChildOf(const APickupableMaster* parent) const
{
	const AActor* current = this;
	while (AActor* toCheck = current->GetAttachParentActor())
	{
		current = toCheck;
		if(current == parent) return true;
	}

	return false;
}

void APickupableMaster::Reattach()
{
	parentCore = Cast<ACubeCore>(previousObj);
	if(!parentCore)
	{
		Print("couldnt cast to core - Reattaching...", 5)
		return;
	}

	AttachToActor(parentCore, attachRules, removedSocket);
	sounder->PlayAttach();
	UseSavedTransform();
	
	parentCore->AddAttachment(this, attachedSocket);
	isAttached = true;
}

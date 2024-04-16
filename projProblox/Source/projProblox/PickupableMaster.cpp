/**************************************************************************************************************
* Pickupable Master - Code
* 
* The code file for the parent class of all the movable things in the game. Gives functionality to the declared functions. Most of these base functions can
* be modified by inherited classes but functions like rotate and remove velocity are universal.
* Also creates the actor components that all variations of this class will have... Mesh and collider.
*
* PROBLEMS:
*	.
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/

#include "PickupableMaster.h"

#include "CubeCore.h"
#include "Thing.h"

// Sets default values
APickupableMaster::APickupableMaster()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	objMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	objMesh->SetSimulatePhysics(true);
	objMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	objMesh->SetGenerateOverlapEvents(true);
	objMesh->SetUseCCD(true);
	
	silhouette = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ghost Mesh"));
	silhouette->SetCollisionResponseToAllChannels(ECR_Ignore);
	silhouette->SetStaticMesh(objMesh->GetStaticMesh());
	silhouette->SetupAttachment(objMesh);
	silhouette->SetRelativeLocation({50,0,0});
	silhouette->SetHiddenInGame(true);

	indicator = CreateDefaultSubobject<UArrowComponent>("Place Indicator");
	indicator->SetupAttachment(objMesh);
	
	collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
	collider->AttachToComponent(objMesh, FAttachmentTransformRules::KeepRelativeTransform);
	collider->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	collider->SetCollisionResponseToChannel(ECC_Camera, ECR_Block);
	collider->AddRelativeLocation({0,0,50});
	
	defaultRot = objMesh->GetRelativeRotation();
}

// Called when the game starts or when spawned
void APickupableMaster::BeginPlay()
{
	Super::BeginPlay();

	defaultMat = Cast<UMaterial>(objMesh->GetMaterial(0));
	silhouetteMat = Cast<UMaterial>(silhouette->GetMaterial(0));
	SetupIndicator();
}

// Called every frame
void APickupableMaster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Ability();
	Placement();
}

void APickupableMaster::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	if(!IsValid(parentCore)) return;
	// if(!IsValid(OtherActor)) return

	// Successful cast???
	if(Cast<AThing>(OtherActor)) parentCore->AddThing(OtherActor);
}



void APickupableMaster::SetupIndicator()
{
	// indicator->SetMaterial(0, Cast<UMaterialInterface>(indicatorMat));
	indicator->ArrowColor.A = .5f;

	const FVector actorScale = GetActorRelativeScale3D();
	const FVector indiScale = indicator->GetRelativeScale3D();
	
	FVector scale;
	scale.X = indiScale.X / actorScale.X;
	scale.Y = indiScale.Y / actorScale.Y;
	scale.Z = indiScale.Z / actorScale.Z;
	
	indicator->SetRelativeScale3D(scale);
	
	indicator->ArrowLength = placeRange;
	const FRotator rot = UKismetMathLibrary::MakeRotFromX(placeDir);
	indicator->SetRelativeRotation(rot);

	SetHideIndicator(true);
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
	const FVector start = GetActorLocation();
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
	
	if(!IsValid(parentCore))
	{
		ResetGhost();
		return;
	}
	
	FName closestSocket = NearestSocket(parentCore, hit);

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
	
	GetAttachOffset(*parentCore);
	silhouette->SetRelativeLocation({attachOffset,0,0});
	
	const UStaticMeshComponent* coreMesh = parentCore->GetMesh();
	
	if(snapRot)
	{
		const FVector forwardVec = UKismetMathLibrary::GetForwardVector(coreMesh->GetSocketRotation(attachedSocket));

		FRotator rot;
		if(placeDir.X != 0) rot = UKismetMathLibrary::MakeRotFromX(forwardVec);
		else if(placeDir.Y != 0) rot = UKismetMathLibrary::MakeRotFromY(forwardVec);
		else if(placeDir.Z != 0) rot = UKismetMathLibrary::MakeRotFromZ(forwardVec);

		// Rotate to match the socket rotation
		silhouette->SetWorldRotation(rot);
		return;
	}

	const UStaticMeshComponent* parentMesh = parentCore->GetMesh();
	
	// Have to realign the socket rotation with another axis
	FRotator socketRot = parentMesh->GetSocketRotation(attachedSocket);
	const FVector socketForward = UKismetMathLibrary::GetForwardVector(socketRot);
	socketRot = socketRot.RotateVector(socketForward).Rotation();
	
	silhouette->SetWorldRotation(RoundRotation(GetActorRotation(), socketRot));
}

void APickupableMaster::SetSelected(const bool value)
{
	selected = value;
	GravitySelection();
	SetHideIndicator(!selected);

	if(selected)
	{
		canPlace = true;
		Detach();
		return;
	}

	if(!IsValid(parentCore)) return;
	if(attachedSocket == NAME_None) return;

	AttachToActor(parentCore, attachRules, attachedSocket);

	// Using the silhouette's location/rotation to set the actual transform.
	SetActorRotation(silhouette->GetComponentRotation());
	SetActorLocation(silhouette->GetComponentLocation());
	
	ResetGhost();

	parentCore->AddAttachment(this, attachedSocket);
	isAttached = true;
}

bool APickupableMaster::SetGroupSelected(const bool value)
{
	selected = value;
	GravitySelection();
	
	canPlace = !selected;
	
	return true;
}

void APickupableMaster::AddAttachment(APickupableMaster* attachment, const FName& socket)
{
	attachedSocket = socket;
	isAttached = true;
}

void APickupableMaster::Detach()
{
	ResetGhost();
	
	if(!IsValid(parentCore))
	{
		Print("Couldnt detach because the core was invalid", 3)
		return;
	}

	SetAbilityActive(false);

	ResetMaterial();
	
	parentCore->RemoveAttachment(attachedSocket);
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	silhouette->SetupAttachment(objMesh);

	parentCore = 0;
	objMesh->SetEnableGravity(true);
	isAttached = false;
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
	// Quantize each component of the Rotator using Frac and Floor
	FRotator rounded;
		
	rounded.Pitch = FMath::RoundHalfFromZero(rotation.Pitch / rounder) * rounder;
	rounded.Yaw = FMath::RoundHalfFromZero(rotation.Yaw / rounder) * rounder;
	rounded.Roll = FMath::RoundHalfFromZero(rotation.Roll / rounder) * rounder;

	return rounded;
}

FRotator APickupableMaster::RoundRotation(const FRotator& rotation, const FRotator& referencedRot, const float rounder)
{
	// Calculate the difference between the rotations
	const FRotator difference = rotation - referencedRot;

	// Round the differences to the nearest 90 degrees
	const float pitchDiff = FMath::RoundHalfFromZero(difference.Pitch / rounder) * rounder;
	const float yawDiff = FMath::RoundHalfFromZero(difference.Yaw / rounder) * rounder;
	const float rollDiff = FMath::RoundHalfFromZero(difference.Roll / rounder) * rounder;

	// Add the rounded differences to the reference rotation to get the rounded rotation
	return referencedRot + FRotator(pitchDiff, yawDiff, rollDiff);
}

void APickupableMaster::AlignSocketRot(const bool useDirection)
{
	if(!IsValid(parentCore)) return;
	
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
	if(vertAxis.X != 0) AddActorLocalRotation({0,0, axis * rotSpeed});
	else if(vertAxis.Y != 0) AddActorLocalRotation({axis * rotSpeed, 0, 0});
	else if(vertAxis.Z != 0) AddActorLocalRotation({0, axis * rotSpeed, 0});
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

void APickupableMaster::SnapRotateMesh(const bool hori, const FString keypress, const bool quarter)
{
	const float angle = quarter? 45 : 90;
	const float turn = keypress == "Q" || keypress == "R"? -angle : angle;
		
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

	if(vertAxis.X != 0) AddActorLocalRotation({0,0, turn});
	else if(vertAxis.Y != 0) AddActorLocalRotation({turn, 0, 0});
	else if(vertAxis.Z != 0) AddActorLocalRotation({0, turn, 0});
}



FName APickupableMaster::NearestSocket(const ACubeCore* core, const FHitResult& hit) const
{
	float shortestDistance = 999;
	FName closestSocket;
	const UStaticMeshComponent* coreMesh = core->GetMesh();
	
	for(const auto& socket: coreMesh->GetAllSocketNames())
	{
		if(core) if(core->ObjectInSocket(socket)) continue;
		
		const float distance = FVector::Distance(coreMesh->GetSocketLocation(socket), hit.ImpactPoint);

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
	objMesh->SetPhysicsLinearVelocity(FVector::ZeroVector);
	objMesh->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
}


void APickupableMaster::ResetGhost() const
{
	silhouette->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	silhouette->AttachToComponent(objMesh, FAttachmentTransformRules::KeepWorldTransform);
	silhouette->SetHiddenInGame(true);
}


void APickupableMaster::ActivateOutline(UMaterialInstance* mat) const
{
	silhouette->SetHiddenInGame(false);
	silhouette->SetMaterial(0, mat);

	silhouette->AttachToComponent(objMesh, ghostRules);
	
	silhouette->AddRelativeRotation({0,0,0});
	silhouette->SetRelativeLocation({0,0,0});
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

	Print(FString::FromInt(all.Num()), 4);
	return all;
}

APickupableMaster* APickupableMaster::GetParent()
{
	AActor* current = this;
	while (current->GetAttachParentActor() != nullptr)
	{
		current = current->GetAttachParentActor();
	}

	if(APickupableMaster* parent = Cast<APickupableMaster>(current)) return parent;
	// If the cast fails
	Print("Didn't find a pickupable object at the top.", 5)
	return 0;
}

bool APickupableMaster::IsChildOf(const APickupableMaster* parent) const
{
	const AActor* current = this;
	while (current->GetAttachParentActor() != nullptr)
	{
		current = current->GetAttachParentActor();
		if(current == parent) return true;
	}

	return false;
}

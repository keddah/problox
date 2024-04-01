/**************************************************************************************************************
* Pickupable Master - Code
* 
* The code file for the parent class of all the moveable things in the game. Gives functionality to the declared functions. Most of these base functions can
* be modified by inherited classes but functions like rotate and remove velocity are universal.
* Also creates the actor components that all variations of this class will have... Mesh and collider.
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
	// objMesh->SetNotifyRigidBodyCollision(true);
	
	silhouette = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ghost Mesh"));
	silhouette->SetCollisionResponseToAllChannels(ECR_Ignore);
	silhouette->SetStaticMesh(objMesh->GetStaticMesh());
	silhouette->SetupAttachment(objMesh);
	silhouette->SetRelativeLocation({50,0,0});
	silhouette->SetHiddenInGame(true);
	
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

void APickupableMaster::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	if(!IsValid(parentCore)) return;
	// if(!IsValid(OtherActor)) return

	// Successful cast???
	if(Cast<AThing>(OtherActor)) parentCore->AddThing(OtherActor);
}

void APickupableMaster::Placement()
{
	if(!selected) return;
	
	const UWorld* wrld = GetWorld();
	
	FHitResult hit;
	const FVector direction = GetActorRotation().RotateVector(placeDir);

	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);
	collisionParams.MobilityType = EQueryMobilityType::Any;
	
	// Debug Draw
	const FVector start = GetActorLocation();
	DrawDebugLine(wrld, start, start + direction * placeRange, FColor::Red, false, 5);	
	wrld->LineTraceSingleByChannel(hit, start, start + direction * placeRange, ECC_Camera, collisionParams);

	if(!hit.bBlockingHit)
	{
		parentCore = 0;
		ResetGhost();
		return;
	}

	DrawDebugPoint(wrld, hit.ImpactPoint, 10, FColor::Green, false, 5);
	
	if(ACubeCore* core = Cast<ACubeCore>(hit.GetActor())) parentCore = core;
	else parentCore = nullptr;
	
	if(!IsValid(parentCore))
	{
		ResetGhost();
		return;
	}
	
	// objCore has been set to the hit actor.
	const UStaticMeshComponent* coreMesh = parentCore->GetMesh();
	
	float shortestDistance = 9999;
	FName closestSocket = "None";

	for(int i = 0; i < 2; i++)
	{
		for(const auto& socket: coreMesh->GetAllSocketNames())
		{
			if(parentCore) if(parentCore->ObjectInSocket(socket)) continue;
			
			const float distance = FVector::Distance(coreMesh->GetSocketLocation(socket), hit.ImpactPoint);

			// Don't allow the attachment if the socket is out of range.
			if(distance > placeRange) continue;
			
			if(distance < shortestDistance)
			{
				shortestDistance = distance;
				closestSocket = socket;
			}
		}
	}

	if(closestSocket != NAME_None) attachedSocket = closestSocket;
	GhostPlacement();

	// FRotator rot = NormalizeRotation(GetActorRotation());
	// Print(FString::FromInt(rot.Roll) + ", " + FString::FromInt(rot.Pitch) + ", " + FString::FromInt(rot.Yaw))
}

// Should only be called in the Placement Function at the very end....
void APickupableMaster::GhostPlacement()
{
	if(ghostVisible || isAttached) return;
	
	silhouette->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	
	silhouette->SetHiddenInGame(false);
	silhouette->AttachToComponent(parentCore->GetMesh(), ghostRules, attachedSocket);
	
	silhouette->SetRelativeLocation({attachOffset,0,0});

	const UStaticMeshComponent* coreMesh = parentCore->GetMesh();
	const FVector forwardVec = UKismetMathLibrary::GetForwardVector(coreMesh->GetSocketRotation(attachedSocket));

	FRotator rot;
	if(placeDir.X != 0) rot = UKismetMathLibrary::MakeRotFromX(forwardVec);
	else if(placeDir.Y != 0) rot = UKismetMathLibrary::MakeRotFromY(forwardVec);
	else if(placeDir.Z != 0) rot = UKismetMathLibrary::MakeRotFromZ(forwardVec);

	// Rotate to match the socket rotation
	silhouette->SetWorldRotation(rot);

	ghostVisible = true;
}

void APickupableMaster::ResetGhost()
{
	silhouette->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	silhouette->SetHiddenInGame(true);
	ghostVisible = false;
}

void APickupableMaster::AddAttachment(APickupableMaster* attachment, const FName& socket)
{
	attachedSocket = socket;
	isAttached = true;
}

void APickupableMaster::ResetRotation(const bool resetVelocity)
{
	SetActorRotation(defaultRot);
	if(resetVelocity) RemoveVelocity();
}

void APickupableMaster::RemoveVelocity() const
{
	objMesh->SetAllPhysicsLinearVelocity({});
	objMesh->SetAllPhysicsAngularVelocityInRadians({});
}

void APickupableMaster::ApplyOffset(ACubeCore* core)
{
	if(core) SetActorRelativeLocation({attachOffset,0,0});
}

void APickupableMaster::Detach()
{
	if(!IsValid(parentCore))
	{
		Print("Couldnt detach because the core was invalid", 3)
		return;
	}

	parentCore->RemoveAttachment(attachedSocket);
	objMesh->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	active = false;
	isAttached = false;
}

// Called every frame
void APickupableMaster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Ability();
	Placement();
}

void APickupableMaster::RotateVert(const float axis)
{
	if(vertAxis.X != 0) AddActorLocalRotation({0,0, axis * rotSpeed});
	else if(vertAxis.Y != 0) AddActorLocalRotation({axis * rotSpeed, 0, 0});
	else if(vertAxis.Z != 0) AddActorLocalRotation({0, axis * rotSpeed, 0});
}

void APickupableMaster::RotateHori(const float axis)
{
	if(horiAxis.X != 0) AddActorWorldRotation({0,0, axis * rotSpeed});
	else if(horiAxis.Y != 0) AddActorWorldRotation({axis * rotSpeed, 0, 0});
	else if(horiAxis.Z != 0) AddActorWorldRotation({0, axis * rotSpeed, 0});
	appliedYaw += axis * rotSpeed;
	
	// Wrap appliedYaw to -360 / 360
	if (appliedYaw > 360) appliedYaw -= 720;
	else if (appliedYaw < -360) appliedYaw += 720.0f;
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
		
		// Wrap appliedYaw to -360 / 360
		if (appliedYaw > 360) appliedYaw -= 720;
		else if (appliedYaw < -360) appliedYaw += 720.0f;
		return;
	}

	if(vertAxis.X != 0) AddActorLocalRotation({0,0, turn});
	else if(vertAxis.Y != 0) AddActorLocalRotation({turn, 0, 0});
	else if(vertAxis.Z != 0) AddActorLocalRotation({0, turn, 0});
}

void APickupableMaster::SetSelected(const bool value)
{
	selected = value;

	if(selected)
	{
		canPlace = true;
		Detach();
		return;
	}
	
	if(!IsValid(parentCore)) return;
	if(attachedSocket == NAME_None) return;

	AttachToActor(parentCore, attachRules, attachedSocket);
	ApplyOffset(parentCore);

	AlignSocketRot();
	ResetGhost();

	parentCore->AddAttachment(this, attachedSocket);
	isAttached = true;
}

bool APickupableMaster::SetGroupSelected(const bool value)
{
	selected = value;
	canPlace = !selected;
	
	return true;
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

bool APickupableMaster::IsChildOf(const APickupableMaster* parent)
{
	AActor* current = this;
	while (current->GetAttachParentActor() != nullptr)
	{
		current = current->GetAttachParentActor();
		if(current == parent) return true;
	}

	return false;
}

TArray<APickupableMaster*> APickupableMaster::AllObjsInHierarchy()
{
	TArray<APickupableMaster*> all;

	GetDescendents(this, all);
	GetAscendants(this, all);

	Print(FString::FromInt(all.Num()), 4);
	return all;
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


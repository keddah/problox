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
#include "Kismet/GameplayStatics.h"
#include "./projProblox/Cells/Cell.h"
#include "Cores/Connectors/CubeConnector.h"


// Sets default values
APickupableMaster::APickupableMaster()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	mesh->SetSimulatePhysics(true);
	mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	mesh->SetGenerateOverlapEvents(true);

	outlineMesh = CreateDefaultSubobject<UStaticMeshComponent>("Outliner");
	outlineMesh->SetupAttachment(mesh);
	outlineMesh->SetRelativeLocation({});
	outlineMesh->SetRelativeRotation({0,0,0});
	outlineMesh->SetRelativeScale3D({1,1,1});
	if(GEngine) outlineMesh->SetMassOverrideInKg("", 0);
	outlineMesh->SetCollisionResponseToAllChannels(ECR_Ignore);
	outlineMesh->SetHiddenInGame(true);
	outlineMesh->SetSimulatePhysics(false);
	outlineMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	outlineMesh->SetStaticMesh(mesh->GetStaticMesh());
	outlineMesh->CastShadow = false;
	
	silhouette = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ghost Mesh"));
	silhouette->SetCollisionResponseToAllChannels(ECR_Overlap);
	silhouette->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	silhouette->SetStaticMesh(mesh->GetStaticMesh());
	silhouette->SetupAttachment(mesh);
	silhouette->SetHiddenInGame(true);
	silhouette->CastShadow = false;
	
	if(GEngine) silhouette->SetMassOverrideInKg("", 0);
	silhouette->SetSimulatePhysics(false);
	silhouette->UnWeldFromParent();
	silhouette->SetEnableGravity(false);
	
	centerMass = CreateDefaultSubobject<USceneComponent>("Center of Gravity");
	centerMass->SetupAttachment(mesh);
	
	mouseDetector = CreateDefaultSubobject<UBoxComponent>(TEXT("Mouse Detector"));
	mouseDetector->AttachToComponent(mesh, FAttachmentTransformRules::KeepRelativeTransform);
	mouseDetector->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	mouseDetector->SetCollisionResponseToChannel(ECC_Camera, ECR_Block);
	mouseDetector->AddRelativeLocation({0,0,50});
	
	defaultRot = mesh->GetRelativeRotation();
	
	soundPlayer = CreateDefaultSubobject<UAudioManager>("Sound Player");
	soundPlayer->Attach(mesh);
}

// Called when the game starts or when spawned
void APickupableMaster::BeginPlay()
{
	Super::BeginPlay();
	
	if(soundPlayer && mesh) soundPlayer->Attach(mesh);

	wrld = GetWorld();
	
	TArray<AActor*> coreActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACubeCore::StaticClass(), coreActors);
	for (const auto& actor : coreActors)
	{
		if(ACubeCore* core = Cast<ACubeCore>(actor))
		{
			if(core->IsA<ACubeConnector>()) continue;

			core->onTurnStarted.AddDynamic(this, &APickupableMaster::ResetOutline);
			core->onReset.AddDynamic(this, &APickupableMaster::ShowOutline);
			break;
		}
	}
	
	// Only set a custom center of mass if it has been moved... 
	const FVector massOffset = centerMass->GetRelativeLocation();
	if(!(massOffset.X == 0 && massOffset.Y == 0 && massOffset.Z == 0)) return;
	mesh->SetCenterOfMass(centerMass->GetRelativeLocation());
}

// Called every frame
void APickupableMaster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Ability(DeltaTime);
}

void APickupableMaster::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	if(!parentCore) return;

	// Don't allow cells to be collected from this collider.
	if(!Tags.IsEmpty()) return;

	// Successful cast???
	if(Cast<ACell>(OtherActor)) parentCore->AddCell(OtherActor);
}

// Should only be called in the Placement Function at the very end....
void APickupableMaster::GhostPlacement()
{
	if(!parentCore)
	{
		Print("Couldn't do ghost placement because there's no core", 4)
		return;
	}
	
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

		// Whether or not the attached socket is the diagonal side of a wedge...
		const unsigned short rounder = attachedSocket == "DIAG"? 45 : 90;
		const FRotator roundRot = RoundRotation(silhouette->GetRelativeRotation(), -float(rounder));

		// Round it to the socket rotation
		silhouette->SetRelativeRotation({roundRot.Pitch, roundRot.Yaw, roundRot.Roll});
		silhouette->AddRelativeRotation(rotOffset);
		return;
	}

	// Have to realign the socket rotation with another axis
	FRotator socketRot = parentMesh->GetSocketRotation(attachedSocket);
	const FVector socketForward = UKismetMathLibrary::GetForwardVector(socketRot);
	socketRot = socketRot.RotateVector(socketForward).Rotation();
	silhouette->SetWorldRotation(RoundRotation(GetActorRotation(), socketRot));
	
	// Rounded is true if the xyz relative rotations are factors of 45 (rounded to 45 degrees).
	const bool roundX = lockAxis.X == 0;
	const bool roundY = lockAxis.Y == 0;
	const bool roundZ = lockAxis.Z == 0;  

	// Whether or not the attached socket is the diagonal side of a wedge...
	const unsigned short rounder = attachedSocket == "DIAG"? 45 : 90;
	
	const FRotator roundRot = RoundRotation(silhouette->GetRelativeRotation(), -float(rounder));

	// Depending on the locked axis, set the relative rotation to the new rounded rotation
	silhouette->SetRelativeRotation(FRotator(roundY? roundRot.Pitch : 0, roundZ? roundRot.Yaw : 0, roundX? roundRot.Roll : 0));
	silhouette->AddRelativeRotation(rotOffset);
}

void APickupableMaster::SetSelected(const bool value)
{
	selected = value;

	// Only use continuous collisions while selected (to prevent objects from going through objects).
	mesh->SetUseCCD(selected);
	
	ToggleGravity();
	
	if(selected)
	{
		Detach(false);
		return;
	}

	if(!parentCore) return;
	if(attachedSocket == NAME_None) return;

	SetShowMesh(true);
	
	AttachToActor(parentCore, attachRules, attachedSocket);
	parentCore->AddAttachment(this, attachedSocket);
	isAttached = true;

	// Using the silhouette's location/rotation to set the actual transform.
	UseSilhouetteTransform();
	ResetGhost();

	if(soundPlayer) soundPlayer->PlayAttach();
	else Print("Sfx manager is invalid....", 5)
}

void APickupableMaster::Placement(ACubeCore* core, const FName& socket)
{
	if(!core)
	{
		Print("The given core was invalid... ~ OtherPlacement.", 7)
		return;
	}

	parentCore = core;
	if(socket != NAME_None) attachedSocket = socket;
	SetShowMesh(false);
	GhostPlacement();
}

void APickupableMaster::AddAttachment(APickupableMaster* attachment, const FName& socket)
{
	attachedSocket = socket;
	isAttached = true;
}

void APickupableMaster::Detach(const bool push)
{
	ResetGhost();
	
	if(!parentCore)
	{
		Print("Couldn't detach... parent was invalid..", 4)
		return;
	}

	SetAbilityActive(false);

	// mesh->SetCollisionResponseToAllChannels(ECR_Ignore);
	
	SetHideOutlineMesh(true);
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	if(push && parentCore)
	{
		// Enable physics
		mesh->SetSimulatePhysics(true);
		const FVector launchDir = UKismetMathLibrary::GetForwardVector(parentCore->GetMesh()->GetSocketRotation(attachedSocket));
		const float launchForce = GetMass();
		constexpr float maxVelocity = 1000;

		// Ensure that the mesh is showing
		SetShowMesh(true);

		AddVelocity(launchDir * std::min(launchForce, maxVelocity));
		mesh->AddTorqueInRadians(FMath::VRand() * launchForce, "", true);
	}
	
	if(parentCore) parentCore->RemoveAttachment(attachedSocket);
	silhouette->SetupAttachment(mesh);
	
	if(parentCore)
	{
		// Only play the detach sound if there was a parent core
		if(soundPlayer) soundPlayer->PlayDetach();
		else Print("Sfx manager is invalid.....", 5)
	}

	ToggleGravity(true);
	parentCore = nullptr;
	isAttached = false;
}

void APickupableMaster::UseSilhouetteTransform(const UStaticMeshComponent* ghost)
{
	// If a silhouette wasn't given, use this one.
	if(!ghost) ghost = silhouette;
		
	SetActorLocation(ghost->GetComponentLocation());
	SetActorRotation(ghost->GetComponentRotation());
}

void APickupableMaster::Reattach(const FName& socket)
{
	if(!parentCore)
	{
		Print("couldnt cast to core - Reattaching...", 5)
		return;
	}
	if(socket == NAME_None)
	{
		Print("Given socket was bad... Can't reattach.", 5)
		return;
	}
	attachedSocket = socket;
	isAttached = true;

	// Calling ghost placement whilst the core is valid and there's a valid attachSocket, the silhouette will attach to the attach socket 
	GhostPlacement();

	// Calling set selected with false attaches the actual mesh to the core and uses the transform of the silhouette (also hides the silhouette)
	SetSelected(false);
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

	// Make a rotation depending on the place direction
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
	if(resetVelocity) RemoveVelocity();
	GhostPlacement();
}

void APickupableMaster::GhostSnapRotate(const FString& keypress)
{
	if(snapRot) return;
	
	const float turn = keypress == "Q" ? -90 : 90;
	silhouette->AddRelativeRotation({0,0,turn});
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
	// Reattach the silhouette to this actor then hide it.
	silhouette->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	silhouette->AttachToComponent(mesh, FAttachmentTransformRules::KeepWorldTransform);
	silhouette->SetHiddenInGame(true);

	// Reset transform
	silhouette->SetRelativeRotation({0,0,0});
	silhouette->SetRelativeLocation({0,0,0});
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
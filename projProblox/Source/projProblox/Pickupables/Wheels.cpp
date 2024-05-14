// Created by Dean Atkinson-Walker 2024


#include "Wheels.h"
#include "Cores/Connectors/CubeConnector.h"

AWheels::AWheels()
{
	leftWheel = CreateDefaultSubobject<UStaticMeshComponent>("Left Wheel");
	rightWheel = CreateDefaultSubobject<UStaticMeshComponent>("Right Wheel");
	
	leftAxel = CreateDefaultSubobject<UPhysicsConstraintComponent>("Left Axel");
	rightAxel = CreateDefaultSubobject<UPhysicsConstraintComponent>("Right Axel");

	leftPivot = CreateDefaultSubobject<USceneComponent>("Left Pivot");
	rightPivot = CreateDefaultSubobject<USceneComponent>("Right Pivot");
	leftPivot->AttachToComponent(mesh, FAttachmentTransformRules::KeepRelativeTransform);
	rightPivot->AttachToComponent(mesh, FAttachmentTransformRules::KeepRelativeTransform);
	
	SetupAttachments();
	placeRange = 300;
	snapRot = false;
}

void AWheels::BeginPlay()
{
	Super::BeginPlay();

	attachOffset = 15;
}

void AWheels::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if(!(selected || groupSelected)) return;
	
	RemoveVelocity();
	
	leftWheel->SetWorldLocation(leftPivot->GetComponentLocation());
	leftWheel->SetWorldRotation(leftPivot->GetComponentRotation());

	rightWheel->SetWorldLocation(rightPivot->GetComponentLocation());
	rightWheel->SetWorldRotation(rightPivot->GetComponentRotation());
}

void AWheels::SetupAttachments() const
{
	if(!leftWheel || !leftAxel || !rightWheel || !rightAxel)
	{
		Print("Couldn't setup wheel attachments... one of the things were invalid.", 5)		
		return;
	}

	leftWheel->AttachToComponent(mesh, FAttachmentTransformRules::KeepWorldTransform);
	leftWheel->SetSimulatePhysics(true);	// Needs to simulate physics (otherwise it'll crash)
	
	rightWheel->AttachToComponent(mesh, FAttachmentTransformRules::KeepWorldTransform);
	rightWheel->SetSimulatePhysics(true);	// Needs to simulate physics (otherwise it'll crash)
	
	leftAxel->AttachToComponent(leftWheel, FAttachmentTransformRules::KeepWorldTransform);
	leftAxel->SetDisableCollision(true);
	
	leftAxel->SetLinearXLimit(LCM_Locked, 0);
	leftAxel->SetLinearYLimit(LCM_Locked, 0);
	leftAxel->SetLinearZLimit(LCM_Limited, suspensionDistance);
	
	leftAxel->SetAngularSwing1Limit(ACM_Free, 45);
	leftAxel->SetAngularSwing2Limit(ACM_Locked,45);
	leftAxel->SetAngularTwistLimit(ACM_Locked,45);
	
	leftAxel->SetAngularDriveMode(EAngularDriveMode::TwistAndSwing);
	leftAxel->SetAngularVelocityDriveTwistAndSwing(false, true);

	rightAxel->AttachToComponent(rightWheel, FAttachmentTransformRules::KeepWorldTransform);
	rightAxel->SetDisableCollision(true);
	
	rightAxel->SetLinearXLimit(LCM_Locked, 0);
	rightAxel->SetLinearYLimit(LCM_Locked, 0);
	rightAxel->SetLinearZLimit(LCM_Limited, suspensionDistance);

	rightAxel->SetAngularSwing1Limit(ACM_Free, 45);
	rightAxel->SetAngularSwing2Limit(ACM_Locked,45);
	rightAxel->SetAngularTwistLimit(ACM_Locked,45);
	
	rightAxel->SetAngularDriveMode(EAngularDriveMode::TwistAndSwing);
	rightAxel->SetAngularVelocityDriveTwistAndSwing(false, true);

	leftAxel->SetConstrainedComponents(leftWheel, "", mesh, "");
	rightAxel->SetConstrainedComponents(rightWheel, "", mesh, "");
}

void AWheels::GhostPlacement()
{
	RemoveVelocity();
	
	if(!parentCore) return;
	silhouette->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	silhouette->SetHiddenInGame(false);
	silhouette->AttachToComponent(parentCore->GetMesh(), ghostRules, attachedSocket);
	
	GetAttachOffset(*parentCore);
	silhouette->SetRelativeLocation({attachOffset,0,0});

	// const FRotator relativeRot = RoundRotation(GetActorRotation(), parentCore->GetMesh()->GetSocketRotation(attachedSocket));
	// silhouette->SetWorldRotation(relativeRot);

	const bool attachDiag = attachedSocket == "DIAG";

	// Have to realign the socket rotation with another axis
	const FRotator socketRot = DiagRoundRot(GetActorRotation(), parentCore->GetMesh()->GetSocketRotation(attachedSocket), attachDiag);

	silhouette->SetWorldRotation(socketRot);

	// All this to fix the rotation....
	const FRotator relativeRot = mesh->GetComponentTransform().GetRelativeTransform(parentCore->GetActorTransform()).Rotator();
	
	// Whether the attached socket is the diagonal side of a wedge...
	const unsigned short rounder = attachDiag? 45 : 90; 
	
	// Rounded is true if the xyz relative rotations are factors of 45 (rounded to 45 degrees).
	const bool rounded = FMath::RoundToInt(relativeRot.Roll) % rounder == 0 && FMath::RoundToInt(relativeRot.Pitch) % rounder == 0 && FMath::RoundToInt(relativeRot.Yaw) % rounder == 0;  

	// If the current rotation isn't aligned with the socket rotation (the relative rotation since it's already attached)...
	// just round the relative rotation to either 45 or 90 depending on whether the attaching socket isDiag.
	// Ensures that the final rotation is always aligned.
	if(!rounded) silhouette->SetRelativeRotation(RoundRotation(silhouette->GetRelativeRotation(), -float(rounder)));
	SetGhostBlocked();
}

EOperations AWheels::SetSelected(const bool value)
{
	selected = value;
	
	SetConstraintsActive(!selected);
	
	// Only use continuous collisions while selected (to prevent objects from going through objects).
	mesh->SetUseCCD(selected);
	
	ToggleGravity();
	SetHideIndicator(!selected);

	if(selected)
	{
		wasDetached = isAttached;
		Detach();
		canPlace = true;
		return {EOperations::Detach};
	}
	
	if(!IsValid(parentCore)) return { wasDetached? EOperations::Detach : EOperations::Move};
	if(attachedSocket == NAME_None) return { wasDetached? EOperations::Detach : EOperations::Move};

	if(!previousObj) previousObj = parentCore;

	// Using the silhouette's location/rotation to set the actual transform.
	UseSilhouetteTransform();

	leftWheel->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	rightWheel->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);

	SetParentDominates(true);
	leftAxel->SetActive(false);
	rightAxel->SetActive(false);
	leftWheel->SetSimulatePhysics(false);
	rightWheel->SetSimulatePhysics(false);

	leftWheel->SetWorldLocation(leftPivot->GetComponentLocation());
	leftWheel->SetWorldRotation(leftPivot->GetComponentRotation());
	rightWheel->SetWorldLocation(rightPivot->GetComponentLocation());
	rightWheel->SetWorldRotation(rightPivot->GetComponentRotation());

	Attach();
	ResetGhost();

	parentCore->AddAttachment(this, attachedSocket);
	isAttached = true;

	return { EOperations::Attach };
}

void AWheels::Attach() const
{
	leftWheel->SetSimulatePhysics(true);
	rightWheel->SetSimulatePhysics(true);
	leftAxel->SetActive(true);
	rightAxel->SetActive(true);
	
	leftAxel->SetConstrainedComponents(leftWheel, "", parentCore->GetMesh(), "");
	rightAxel->SetConstrainedComponents(rightWheel, "", parentCore->GetMesh(), "");
	leftAxel->UpdateConstraintFrames();
	rightAxel->UpdateConstraintFrames();
	
	SetParentDominates(false);
	
	mesh->AttachToComponent(parentCore->GetMesh(), attachRules, attachedSocket);
	RemoveVelocity();
}

void AWheels::Detach()
{
	ResetGhost();

	if(!IsValid(parentCore) && !IsValid(previousObj))
	{
		Print("Couldn't detach... parent was invalid..", 4)
		return;
	}

	SetAbilityActive(false);
	ResetMaterial();
	
	if(parentCore) parentCore->RemoveAttachment(attachedSocket);
	else previousObj->RemoveAttachment(attachedSocket);

	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

	leftAxel->SetConstrainedComponents(leftWheel, "", mesh, "");
	rightAxel->SetConstrainedComponents(rightWheel, "", mesh, "");
	leftAxel->UpdateConstraintFrames();
	rightAxel->UpdateConstraintFrames();
	
	leftAxel->ConstraintInstance.Pos1 = {};
	leftAxel->ConstraintInstance.Pos2 = {};
	rightAxel->ConstraintInstance.Pos1 = {};
	rightAxel->ConstraintInstance.Pos2 = {};

	leftAxel->SetRelativeRotation({0,0,0});
	rightAxel->SetRelativeRotation({0,0,0});
	
	silhouette->SetupAttachment(mesh);

	if(parentCore)
	{
		previousObj = parentCore;
		parentCore = nullptr;
	}

	ToggleGravity();
	isAttached = false;
}

void AWheels::Reattach()
{
	parentCore = Cast<ACubeCore>(previousObj);
	if(!IsValid(parentCore))
	{
		Print("couldnt cast to core - Reattaching...", 5)
		return;
	}

	Attach();
	SetActorRelativeLocation(savedTransform.GetLocation());
	SetActorRelativeRotation(savedTransform.Rotator());

	parentCore->AddAttachment(this, attachedSocket);
	isAttached = true;
}

float AWheels::GetAttachOffset(const APickupableMaster& attachee)
{
	// If the attachee is a cube core, reduce the offset
	attachOffset = !attachee.IsA<ACubeConnector>() && attachee.IsA<ACubeCore>()? 7.5 : 15;
	return Super::GetAttachOffset(attachee);
}

void AWheels::ToggleGravity() const
{
	// Does the same for objMesh... Also calls RemoveVelocity
	Super::ToggleGravity();
	
	leftWheel->SetEnableGravity(!selected);
	rightWheel->SetEnableGravity(!selected);
	SetParentDominates(selected);
}

void AWheels::ToggleGravity(bool gravityOn)
{
	Super::ToggleGravity(gravityOn);

	leftWheel->SetEnableGravity(gravityOn);
	rightWheel->SetEnableGravity(gravityOn);
	leftWheel->SetSimulatePhysics(gravityOn);
	rightWheel->SetSimulatePhysics(gravityOn);
	SetParentDominates(!gravityOn);
}

void AWheels::RemoveVelocity() const
{
	// Does the same for objMesh...
	Super::RemoveVelocity();

	leftWheel->SetPhysicsLinearVelocity({});
	rightWheel->SetPhysicsLinearVelocity({});
	
	leftWheel->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
	rightWheel->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
}

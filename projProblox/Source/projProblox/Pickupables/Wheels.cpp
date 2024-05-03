// Created by Dean Atkinson-Walker 2024


#include "Wheels.h"
#include "Cores/Connectors/CubeConnector.h"

AWheels::AWheels()
{
	leftWheel = CreateDefaultSubobject<UStaticMeshComponent>("Left Wheel");
	rightWheel = CreateDefaultSubobject<UStaticMeshComponent>("Right Wheel");
	
	leftAxel = CreateDefaultSubobject<UPhysicsConstraintComponent>("Left Axel");
	rightAxel = CreateDefaultSubobject<UPhysicsConstraintComponent>("Right Axel");

	SetupAttachments();
	placeRange = 300;
	snapRot = false;
}

void AWheels::BeginPlay()
{
	Super::BeginPlay();

	attachOffset = 15;
}

void AWheels::SetupAttachments() const
{
	if(!leftWheel || !leftAxel || !rightWheel || !rightAxel)
	{
		Print("Couldn't setup wheel attachments... one of the things were invalid.", 5)		
		return;
	}

	leftWheel->AttachToComponent(objMesh, FAttachmentTransformRules::KeepWorldTransform);
	leftWheel->SetSimulatePhysics(true);	// Needs to simulate physics (otherwise it'll crash)
	
	rightWheel->AttachToComponent(objMesh, FAttachmentTransformRules::KeepWorldTransform);
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

	leftAxel->SetConstrainedComponents(leftWheel, "", objMesh, "");
	rightAxel->SetConstrainedComponents(rightWheel, "", objMesh, "");
}

EOperations AWheels::SetSelected(const bool value)
{
	selected = value;
	SetConstraintsActive(!selected);
	
	// Only use continuous collisions while selected (to prevent objects from going through objects).
	objMesh->SetUseCCD(selected);
	
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
	SetActorRotation(silhouette->GetComponentRotation());
	SetActorLocation(silhouette->GetComponentLocation());

	const FTransform relativeLeft = leftWheel->GetComponentTransform().GetRelativeTransform(objMesh->GetComponentTransform());
	const FTransform relativeRight = rightWheel->GetComponentTransform().GetRelativeTransform(objMesh->GetComponentTransform());
	
	const FVector pos = GetActorLocation();
	const FVector leftOffset = objMesh->GetRightVector() * -relativeLeft.GetLocation() * relativeLeft.GetScale3D() + objMesh->GetUpVector() * -25;
	const FVector rightOffset = objMesh->GetRightVector() * relativeRight.GetLocation() * relativeRight.GetScale3D() + objMesh->GetUpVector() * -25;
	leftWheel->SetWorldLocation(pos + leftOffset);
	rightWheel->SetWorldLocation(pos + rightOffset);

	Attach();
	ResetGhost();

	parentCore->AddAttachment(this, attachedSocket);
	isAttached = true;

	return {EOperations::Attach};
}

void AWheels::Attach() const
{
	leftAxel->SetConstrainedComponents(leftWheel, "", parentCore->GetMesh(), "");
	rightAxel->SetConstrainedComponents(rightWheel, "", parentCore->GetMesh(), "");
	leftAxel->UpdateConstraintFrames();
	rightAxel->UpdateConstraintFrames();

	objMesh->AttachToComponent(parentCore->GetMesh(), attachRules, attachedSocket);

	const FRotator relativeLeft = leftWheel->GetComponentTransform().GetRelativeTransform(objMesh->GetRelativeTransform()).Rotator();
	leftWheel->SetWorldRotation(leftWheel->GetComponentRotation() + relativeLeft);

	const FRotator relativeRight = rightWheel->GetComponentTransform().GetRelativeTransform(objMesh->GetRelativeTransform()).Rotator();
	rightWheel->SetWorldRotation(rightWheel->GetComponentRotation() + relativeRight);
	
	leftAxel->ConstraintInstance.Pos1 = {};
	leftAxel->ConstraintInstance.Pos2 = {};
	
	rightAxel->ConstraintInstance.Pos1 = {};
	rightAxel->ConstraintInstance.Pos2 = {};
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

	leftAxel->SetConstrainedComponents(leftWheel, "", objMesh, "");
	rightAxel->SetConstrainedComponents(rightWheel, "", objMesh, "");
	leftAxel->UpdateConstraintFrames();
	rightAxel->UpdateConstraintFrames();
	
	leftAxel->ConstraintInstance.Pos1 = {};
	leftAxel->ConstraintInstance.Pos2 = {};
	rightAxel->ConstraintInstance.Pos1 = {};
	rightAxel->ConstraintInstance.Pos2 = {};

	leftAxel->SetRelativeRotation({0,0,0});
	rightAxel->SetRelativeRotation({0,0,0});
	
	silhouette->SetupAttachment(objMesh);

	if(parentCore)
	{
		previousObj = parentCore;
		parentCore = nullptr;
	}

	ToggleGravity();
	isAttached = false;
}

void AWheels::Reattach(const FTransform& transform)
{
	parentCore = Cast<ACubeCore>(previousObj);
	if(!IsValid(parentCore))
	{
		Print("couldnt cast to core - Reattaching...", 5)
		return;
	}

	SetActorTransform(transform);
	Attach();
	parentCore->AddAttachment(this, attachedSocket);
	isAttached = true;
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
	
	// Have to realign the socket rotation with another axis
	FRotator socketRot = parentCore->GetMesh()->GetSocketRotation(attachedSocket);
	const FVector socketForward = UKismetMathLibrary::GetForwardVector(socketRot);
	socketRot = socketRot.RotateVector(socketForward).Rotation();

	const FRotator rot = UKismetMathLibrary::MakeRotFromX(socketForward);

	// Rotate to match the socket rotation
	silhouette->SetWorldRotation(rot);
	
	// silhouette->SetWorldRotation(RoundRotation(GetActorRotation(), socketRot));

	const FRotator relativeRot = RoundRotation(silhouette->GetComponentTransform().GetRelativeTransform(parentCore->GetActorTransform()).Rotator());
	silhouette->SetRelativeRotation({0, 0, relativeRot.Roll});
}

float AWheels::GetAttachOffset(const APickupableMaster& attachee)
{
	// If the attachee is a cube core, reduce the offset
	attachOffset = !attachee.IsA<ACubeConnector>() && attachee.IsA<ACubeCore>()? 10 : 15;
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

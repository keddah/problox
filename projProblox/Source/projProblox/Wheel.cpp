// Fill out your copyright notice in the Description page of Project Settings.


#include "Wheel.h"
#include "CubeCore.h"


AWheel::AWheel()
{
	pivot = CreateDefaultSubobject<USceneComponent>("Center");
	pivot->AttachToComponent(objMesh, FAttachmentTransformRules::KeepWorldTransform);
	pivot->AddRelativeLocation({0,0,50});
	
	wheelAxel = CreateDefaultSubobject<UPhysicsConstraintComponent>("Wheel Axel");
	wheelAxel->SetupAttachment(objMesh);
	wheelAxel->SetDisableCollision(true);
	
	wheelAxel->SetLinearXLimit(LCM_Locked, 0);
	wheelAxel->SetLinearYLimit(LCM_Locked, 0);
	wheelAxel->SetLinearZLimit(LCM_Locked, 0);
	
	wheelAxel->SetAngularSwing1Limit(ACM_Free, 45);
	wheelAxel->SetAngularSwing2Limit(ACM_Locked,45);
	wheelAxel->SetAngularTwistLimit(ACM_Locked,45);
	
	wheelAxel->SetAngularDriveMode(EAngularDriveMode::TwistAndSwing);
	wheelAxel->SetAngularVelocityDriveTwistAndSwing(false, true);

	
	placeRange = 300;
	SetParentDominates(false);
}

void AWheel::Ability()
{
	if(!IsValid(parentCore)) return;

	// const FVector coreVelocity = objCore->GetMesh()->GetPhysicsAngularVelocityInRadians();
	// wheelAxel->SetAngularVelocityTarget(-coreVelocity);
}


// The same as the normal function except attachments are managed using the physics constraint.
void AWheel::SetSelected(const bool value)
{
	selected = value; 
	SetHideIndicator(!selected);
	
	if(selected)
	{
		Detach();
		return;
	}
	
	// If the wheel is unselected whilst the objCore isn't valid
	if(!IsValid(parentCore))
	{
		Detach();
		return;
	}
	if(attachedSocket == NAME_None) return;

	ResetGhost();
	Attach(parentCore);
}

void AWheel::Detach()
{
	ResetGhost();
	
	if(!IsValid(parentCore)) return;
	
	parentCore->RemoveAttachment(attachedSocket);
	wheelAxel->BreakConstraint();
	wheelAxel->UpdateConstraintFrames();
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	SetParentDominates(false);

	parentCore = 0;
	isAttached = false;
}

void AWheel::Attach(ACubeCore* core)
{
	parentCore = core;
	ResetRotation();

	const UStaticMeshComponent* coreMesh = parentCore->GetMesh();
	const FVector forwardVec = UKismetMathLibrary::GetForwardVector(coreMesh->GetSocketRotation(attachedSocket));

	FRotator rot;
	if(placeDir.X != 0) rot = UKismetMathLibrary::MakeRotFromX(forwardVec);
	else if(placeDir.Y != 0) rot = UKismetMathLibrary::MakeRotFromY(forwardVec);
	else if(placeDir.Z != 0) rot = UKismetMathLibrary::MakeRotFromZ(forwardVec);

	// Rotate to match the socket rotation
	SetActorRotation(rot);
	SetActorLocation(coreMesh->GetSocketLocation(attachedSocket));
	
	wheelAxel->SetConstrainedComponents(objMesh, attachedSocket, parentCore->GetMesh(), attachedSocket);
	wheelAxel->UpdateConstraintFrames();
	
	parentCore->AddAttachment(this, attachedSocket);
	SetParentDominates(false);
	isAttached = true;
}

/**************************************************************************************************************
* Wheel - Code
* 
* The code file for one of the pickupable objects. Overrides the SetSelected and Detach functions and creates it's own attach function since the attaching uses physics
* constraints in order to allow the wheel to roll.
*
* PROBLEMS:
*	Since it doesn't actually attach to the core/connector in the hierarchy, when using GetDescendents() it isn't found... (causes it to be excluded from the exclusions array)
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


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

// The same as the normal function except attachments are managed using the physics constraint.
void AWheel::SetSelected(const bool value)
{
	selected = value; 
	GravitySelection();
	wheelAxel->SetActive(!selected);
	
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

void AWheel::Detach()
{
	ResetGhost();
	
	if(!IsValid(parentCore)) return;
	
	parentCore->RemoveAttachment(attachedSocket);
	wheelAxel->BreakConstraint();
	wheelAxel->UpdateConstraintFrames();
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	SetParentDominates(false);

	parentCore = nullptr;
	isAttached = false;
}

APickupableMaster* AWheel::GetParent()
{
	FName blank;
	UPrimitiveComponent* compParent;
	UPrimitiveComponent* self;
	wheelAxel->GetConstrainedComponents(self, blank, compParent, blank);

	if(!IsValid(compParent))
	{
		Print("No valid parent...", 5)
		return nullptr;
	}
	
	// Starts with the thing the wheel is attached to rather than itself...
	if(AActor* current = compParent->GetOwner())
	{
		Print(current->GetName(),3)
		
		while (current->GetAttachParentActor() != nullptr)
		{
			current = current->GetAttachParentActor();
		}

		if(APickupableMaster* parent = Cast<APickupableMaster>(current)) return parent;
	}

	// If the cast fails
	Print("Didn't find a pickupable object at the top.", 5)
	return nullptr;
}
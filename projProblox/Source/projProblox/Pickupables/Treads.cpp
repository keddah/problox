/**************************************************************************************************************
* Treads - Code
* 
* The code file for one of the pickupable objects. Creates the driveTrigger to check for grounded collisions.
*
* PROBLEMS:
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "Treads.h"

#include "Cores/CubeCore.h"
#include "Cores/Connectors/WedgeConnector.h"


ATreads::ATreads()
{
	driveTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
	driveTrigger->AttachToComponent(mesh, FAttachmentTransformRules::KeepRelativeTransform);

	mesh->SetAngularDamping(1);
	
	// The rotation of the treads when attached to a connector should consider the rotation of the connector.
	snapRot = true;
	rotOffset = {90,0,180};
	soundPlayer->AddAbilitySFX(TEXT("/Script/MetasoundEngine.MetaSoundSource'/Game/Audio/MetaSounds/MS_treads.MS_treads'"));

	uiName = "Tank Tracks";
}

float ATreads::GetAttachOffset(const APickupableMaster& attachee)
{
	if(selected)
	{
		attachOffset = attachee.IsA<ACubeConnector>() && !attachee.IsA<AWedgeConnector>()? 50 : 0;
		return Super::GetAttachOffset(attachee);
	}
	
	attachOffset = attachee.IsA<ACubeConnector>()? 25 : 50;
	return attachOffset;
}

void ATreads::GhostPlacement()
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
	silhouette->SetRelativeRotation({roundRot.Pitch, -roundRot.Yaw, roundRot.Roll});
		
	SetGhostBlocked();
}

// void ATreads::GhostPlacement()
// {
	// RemoveVelocity();
	//
	// if(!parentCore)
	// {
	// 	Print("Couldn't do ghost placement because there's no core", 4)
	// 	return;
	// }
	// silhouette->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	// silhouette->SetHiddenInGame(false);
	// silhouette->AttachToComponent(parentCore->GetMesh(), ghostRules, attachedSocket);
	//
	// silhouette->SetRelativeLocation({attachOffset,0,0});
	//
	// const UStaticMeshComponent* parentMesh = parentCore->GetMesh();
	//
	// const FVector forwardVec = UKismetMathLibrary::GetForwardVector(parentMesh->GetSocketRotation(attachedSocket));
	//
	// FRotator rot;
	// if(placeDir.X != 0) rot = UKismetMathLibrary::MakeRotFromX(forwardVec);
	// else if(placeDir.Y != 0) rot = UKismetMathLibrary::MakeRotFromY(forwardVec);
	// else if(placeDir.Z != 0) rot = UKismetMathLibrary::MakeRotFromZ(forwardVec);
	//
	// // Rotate to match the socket rotation
	// silhouette->SetWorldRotation(rot);
	//
	// // Whether or not the attached socket is the diagonal side of a wedge...
	// const unsigned short rounder = attachedSocket == "DIAG"? 45 : 90;
	// const FRotator roundRot = RoundRotation(silhouette->GetRelativeRotation(), -float(rounder));
	//
	// // Round it to the socket rotation
	// silhouette->SetRelativeRotation({roundRot.Pitch, roundRot.Yaw, roundRot.Roll});
	// Print("placmenting", 3)
	// SetGhostBlocked();
// }

void ATreads::Ability(const float deltaTime)
{
	Super::Ability(deltaTime);

	if(!(active && grounded)) return;
	if(!IsValid(parentCore)) return;

	parentCore->GetMesh()->AddForceAtLocation(GetActorForwardVector() * moveSpeed * parentCore->GetMass(), parentCore->GetMesh()->GetSocketLocation(attachedSocket));
}

void ATreads::SetAbilityActive(const bool value)
{
	Super::SetAbilityActive(value);

	if(value) soundPlayer->PlayAbility();
	else soundPlayer->StopAbility();
}

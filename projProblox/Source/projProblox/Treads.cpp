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

#include "CubeConnector.h"
#include "CubeCore.h"


ATreads::ATreads()
{
	driveTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
	driveTrigger->AttachToComponent(objMesh, FAttachmentTransformRules::KeepRelativeTransform);

	// The rotation of the treads when attached to a connector should consider the rotation of the connector.
	snapRot = false;
	rotOffset = {90,0,180};
}

float ATreads::GetAttachOffset(const APickupableMaster& attachee)
{
	if(selected)
	{
		// no offset.
		attachOffset = 0;
		return Super::GetAttachOffset(attachee);
	}
	
	attachOffset = attachee.IsA<ACubeConnector>()? 25 : 50;
	return attachOffset;
}

void ATreads::BeginPlay()
{
	Super::BeginPlay();

	objMesh->SetAngularDamping(1);
}

void ATreads::Ability()
{
	Drag();
	
	if(!(active && grounded)) return;
	if(!IsValid(parentCore)) return;

	// 1000 is the mass of the core (Will take into account of the other attached things .. just not the core.)
	objMesh->AddForce(GetActorForwardVector() * moveSpeed * 1000);
}

void ATreads::Drag() const
{
	const FVector velocity = objMesh->GetPhysicsLinearVelocity();
	const FVector2d vel = {velocity.X, velocity.Y};
	const float magnitude = vel.Length();
	
	objMesh->AddForce(FVector(vel.X, vel.Y, 0) * (magnitude < 60? magnitude * -magnitude : -magnitude * dragMultiplier));
}

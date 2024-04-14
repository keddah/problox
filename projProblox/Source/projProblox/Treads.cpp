/**************************************************************************************************************
* Treads - Code
* 
* The code file for one of the pickupable objects. Creates the driveTrigger to check for grounded collisions.
*
* PROBLEMS:
*	(NOT CODE RELATED) The friction of the treads causes it to veer to one side and/or spin out...
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

	objMesh->SetLinearDamping(drag);
}

void ATreads::Ability()
{
	if(!(active && grounded)) return;
	if(!IsValid(parentCore)) return;

	// 1000 is the mass of the core (Will take into account of the other attached things .. just not the core.)
	objMesh->AddForce(GetActorForwardVector() * moveSpeed * 1000);
}

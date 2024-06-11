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
	snapRot = false;
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

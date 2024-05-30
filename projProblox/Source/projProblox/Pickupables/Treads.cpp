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

void ATreads::CalculateVelocity(const float deltaTime)
{
	const FVector deltaPos = GetActorLocation() - prevPos;
	velocity = deltaPos / deltaTime;
	prevPos = GetActorLocation();
}

void ATreads::Ability(const float deltaTime)
{
	Super::Ability(deltaTime);

	if(wrld)
	{
		FHitResult hit;
		FCollisionQueryParams params;
		params.AddIgnoredActor(this);

		const FVector start = GetActorLocation();
		
		DrawDebugLine(wrld, start, start + FVector(0,0,1) * -40, FColor::Red);
		nearFloor = wrld->LineTraceSingleByChannel(hit, start, start + GetActorUpVector() * -40, ECC_Visibility, params);
	}
	
	if(!grounded && isAttached && nearFloor) AddVelocity(velocity * deltaTime);
	velocity = {};

	if(!(active && grounded)) return;
	if(!IsValid(parentCore)) return;
	CalculateVelocity(deltaTime);

	
	// Disregards the mass...
	GetParent()->AddActorWorldOffset(GetActorForwardVector() * moveSpeed * deltaTime);
}

void ATreads::SetAbilityActive(const bool value)
{
	Super::SetAbilityActive(value);

	if(value) soundPlayer->PlayAbility();
	else soundPlayer->StopAbility();
}

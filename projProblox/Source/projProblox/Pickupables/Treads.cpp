/**************************************************************************************************************
* Treads - Code
* 
* The code file for one of the pickupable objects. Creates the driveTrigger to check for grounded collisions.
* PROBLEMS:
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "Treads.h"

#include "Components/StaticMeshComponent.h"
#include "Cores/CubeCore.h"


ATreads::ATreads()
{
	driveTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
	driveTrigger->AttachToComponent(mesh, FAttachmentTransformRules::KeepRelativeTransform);

	mesh->SetAngularDamping(1);
	
	rotOffset = {90,0,0};
	soundPlayer->AddAbilitySFX(TEXT("/Script/MetasoundEngine.MetaSoundSource'/Game/Audio/MetaSounds/MS_treads.MS_treads'"));

	soundPlayer->SetAbilityLooping(true);
}

void ATreads::Ability(const float deltaTime)
{
	if(!IsValid(mesh))
	{
		Print("mesh was invalid......?: " + GetName().ToUpper(), 4)
		return;
	}
	const FVector forward = GetActorForwardVector();
	
	// When the treads are active, make the tread material pan.
	mesh->SetScalarParameterValueOnMaterials("SpeedX", active? forward.X * 2 : 0);
	mesh->SetScalarParameterValueOnMaterials("SpeedY", active? forward.Y * 2 : 0);
	
	if(!(active && grounded)) return;
	if(!IsValid(parentCore)) return;

	mesh->AddForce(forward * moveSpeed * parentCore->GetMass());
}

void ATreads::SetAbilityActive(const bool value)
{
	Super::SetAbilityActive(value);

	if(!IsValid(soundPlayer)) return;
	if(value) soundPlayer->PlayAbility();
	else soundPlayer->StopAbility();
}

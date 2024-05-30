/**************************************************************************************************************
* Glider - Code
* 
* The code file for one of the pickupable objects.
* PROBLEMS:
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/

#include "Thruster.h"

AThruster::AThruster()
{
	thrusterComp = CreateDefaultSubobject<UPhysicsThrusterComponent>("Thruster");
	thrusterComp->SetupAttachment(mesh);

	snapRot = false;
	soundPlayer->AddAbilitySFX(TEXT("/Script/MetasoundEngine.MetaSoundSource'/Game/Audio/MetaSounds/MS_thruster.MS_thruster'"));
}

void AThruster::BeginPlay()
{
	Super::BeginPlay();
	thrusterComp->ThrustStrength = power * 1000;
}

void AThruster::SetAbilityActive(const bool value)
{
	Super::SetAbilityActive(value);

	if(value) soundPlayer->PlayAbility();
	else soundPlayer->StopAbility();
}

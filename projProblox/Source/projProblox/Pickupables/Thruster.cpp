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
	lockAxis = {0,1,1};

	soundPlayer->AddAbilitySFX(TEXT("/Script/MetasoundEngine.MetaSoundSource'/Game/Audio/MetaSounds/MS_thruster.MS_thruster'"));
	soundPlayer->SetAbilityLooping(true);

	favouredSlot = ECoreSockets::Right;
}

void AThruster::BeginPlay()
{
	Super::BeginPlay();

	// Otherwise the number is too big..
	thrusterComp->ThrustStrength = power * 1000;
}

void AThruster::SetAbilityActive(const bool value)
{
	Super::SetAbilityActive(value);

	if(value) soundPlayer->PlayAbility();
	else soundPlayer->StopAbility();
}

void AThruster::GhostSnapRotate(const FString& keypress)
{
	// The override is going in the opposite direction
	const float turn = keypress != "Q" ? -90 : 90;
	silhouette->AddRelativeRotation({0,0,turn});
}

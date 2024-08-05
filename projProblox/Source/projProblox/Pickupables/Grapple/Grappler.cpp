/**************************************************************************************************************
* Grappler - Code
* 
* The code file for one of the pickupable objects.
*
* PROBLEMS:
*	Can sometimes cause an exception error when destroying its hook (rare)
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "Grappler.h"

AGrappler::AGrappler()
{
	grappleSpawn = CreateDefaultSubobject<USceneComponent>(TEXT("Spawn Location"));
	grappleSpawn->SetupAttachment(mesh);

	grappleLine = CreateDefaultSubobject<UCableComponent>(TEXT("Line"));
	grappleLine->SetupAttachment(mesh);
	grappleLine->CableWidth = 20;
	grappleLine->CableLength = 100;
	grappleLine->SolverIterations = 100;

	grappleLine->EndLocation = {};

	grappleLine->NumSides = 4;
	grappleLine->NumSegments = 128;

	params.Owner = this;
	params.bNoFail = true;

	grappleLine->SetHiddenInGame(true);
}

void AGrappler::SetAbilityActive(const bool value)
{
	Super::SetAbilityActive(value);

	// Destroy the hook if there's a valid one
	if(IsValid(hook))
	{
		if(!active)
		{
			// To prevent weird pointers...?
			hook->ClearGarbage();
			
			hook->Destroy();
		}
	}
	
	if(active && IsValid(soundPlayer)) soundPlayer->PlayAbility();
	if(IsValid(grappleLine)) grappleLine->SetHiddenInGame(!active);

	if(!active) return;
	if(!IsValid(wrld)) return;
	
	// Spawn and set the hook
	if(IsValid(grappleSpawn) && grappleHeadClass) hook = wrld->SpawnActor<AActor>(grappleHeadClass, grappleSpawn->GetComponentLocation(), grappleSpawn->GetComponentRotation(), params);
	SetupLine();
}
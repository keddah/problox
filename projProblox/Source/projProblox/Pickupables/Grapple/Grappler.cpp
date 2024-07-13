/**************************************************************************************************************
* Grappler - Code
* 
* The code file for one of the pickupable objects.
*
* PROBLEMS:
*	//A rare crash whenever the grapple is fired - occurs because the world is invalid when using GetWorld()
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
	grappleLine->CableLength = 20000;
	grappleLine->SolverIterations = 100;

	grappleLine->EndLocation = {};

	grappleLine->NumSides = 4;
	grappleLine->NumSegments = 128;

	params.Owner = this;
	params.bNoFail = true;
}

void AGrappler::SetAbilityActive(const bool value)
{
	Super::SetAbilityActive(value);
	if(IsValid(hook) && !active) hook->Destroy();
	if(active) soundPlayer->PlayAbility();
	
	grappleLine->SetHiddenInGame(!IsValid(grappleLine->GetAttachedActor()));
	if(!active) return;
	if(!wrld) return;
	
	// Spawn and set the hook
	if(grappleSpawn && grappleHeadClass) hook = wrld->SpawnActor<AActor>(grappleHeadClass, grappleSpawn->GetComponentLocation(), grappleSpawn->GetComponentRotation(), params);
	SetupLine();
}
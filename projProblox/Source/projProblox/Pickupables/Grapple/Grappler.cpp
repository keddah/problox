/**************************************************************************************************************
* Grappler - Code
* 
* The code file for one of the pickupable objects.
*
* PROBLEMS:
*	A rare crash whenever the grapple is fired - occurs because the world is invalid when using GetWorld()
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "Grappler.h"

AGrappler::AGrappler()
{
	grappleSpawn = CreateDefaultSubobject<USceneComponent>(TEXT("Spawn Location"));
	grappleSpawn->AttachToComponent(objMesh, FAttachmentTransformRules::KeepWorldTransform);

	grappleLine = CreateDefaultSubobject<UCableComponent>(TEXT("Line"));
	grappleLine->AttachToComponent(grappleSpawn, FAttachmentTransformRules::KeepRelativeTransform);
	grappleLine->CableWidth = 20;
	grappleLine->CableLength = 0;
	grappleLine->SolverIterations = 100;

	grappleLine->EndLocation = {};

	grappleLine->NumSides = 4;
	grappleLine->NumSegments = 128;
}

void AGrappler::Ability(const float deltaTime)
{
	Super::Ability(deltaTime);
	
	grappleLine->SetHiddenInGame(!IsValid(grappleLine->GetAttachedActor()));

	if(!active) return;
	FActorSpawnParameters params;
	params.Owner = this;
	params.bNoFail = true;
	
	grappleLine->CableLength = 20000;

	// Destroy the hook if one is already valid.
	if(IsValid(hook)) hook->Destroy();

	// Spawn and set the hook
	if(wrld) return;

	hook = wrld->SpawnActor<AActor>(grappleHeadClass, grappleSpawn->GetComponentLocation(), grappleSpawn->GetComponentRotation(), params);
	SetupLine();

	// Deactivate so that this doesn't happen repeatedly
	active = false;
}
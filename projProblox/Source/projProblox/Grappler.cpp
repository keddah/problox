// Fill out your copyright notice in the Description page of Project Settings.


#include "Grappler.h"

AGrappler::AGrappler()
{
	grappleSpawn = CreateDefaultSubobject<USceneComponent>(TEXT("Spawn Location"));
	grappleSpawn->AttachToComponent(objMesh, FAttachmentTransformRules::KeepRelativeTransform);

	grappleLine = CreateDefaultSubobject<UCableComponent>(TEXT("Line"));
	grappleLine->AttachToComponent(grappleSpawn, FAttachmentTransformRules::KeepRelativeTransform);
	grappleLine->CableWidth = 20;
	grappleLine->CableLength = 0;
	grappleLine->SolverIterations = 100;

	grappleLine->EndLocation = {};

	grappleLine->NumSides = 4;
	grappleLine->NumSegments = 128;
}

void AGrappler::SetSelected(const bool value)
{
	Super::SetSelected(value);

	if(!value) return;

	if(!IsValid(hook)) return;
	hook->Destroy();
	grappleLine->CableLength = 0;
}

void AGrappler::Ability()
{
	Super::Ability();

	grappleLine->SetHiddenInGame(!IsValid(grappleLine->GetAttachedActor()));
	
	if(!active) return;

	if(IsValid(hook)) hook->Destroy();

	FActorSpawnParameters params;
	params.Owner = this;
	params.bNoFail = true;
	
	hook = GetWorld()->SpawnActor<AGrappleHead>(grappleHeadClass, grappleSpawn->GetComponentLocation(), grappleSpawn->GetComponentRotation(), params);
	SetupLine();
	active = false;

	hook->Launch(grappleSpawn->GetForwardVector());
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "Grappler.h"

AGrappler::AGrappler()
{
	grappleSpawn = CreateDefaultSubobject<USceneComponent>(TEXT("Spawn Location"));
	grappleSpawn->AttachToComponent(objMesh, FAttachmentTransformRules::KeepRelativeTransform);

	grappleLine = CreateDefaultSubobject<UCableComponent>(TEXT("Line"));
	grappleLine->AttachToComponent(grappleSpawn, FAttachmentTransformRules::KeepRelativeTransform);
	grappleLine->CableWidth = 20;
	grappleLine->CableLength = 2500;
	grappleLine->SolverIterations = 16;

	grappleLine->EndLocation = {};

	grappleLine->NumSides = 4;
	grappleLine->NumSegments = 20;
}

void AGrappler::Ability()
{
	Super::Ability();

	if(!active) return;

	if(IsValid(hook)) hook->Destroy();

	// Spawn a new hook...
	// Being done in BP since its easier...
}
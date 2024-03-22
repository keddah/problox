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
	grappleLine->SetHiddenInGame(!IsValid(grappleLine->GetAttachedActor()));

	const FVector pos1 = GetActorLocation();
	if(objCore)
	{
		const FVector pos2 = objCore->GetMesh()->GetSocketLocation(attachedSocket);
		Print("self: " + FString::FromInt(pos1.X) + ", " + FString::FromInt(pos1.Y) + ", " + FString::FromInt(pos1.Z))
		Print("other mesh: " + FString::FromInt(pos2.X) + ", " + FString::FromInt(pos2.Y) + ", " + FString::FromInt(pos2.Z))
	}
	
	if(!active) return;
	FActorSpawnParameters params;
	params.Owner = this;
	params.bNoFail = true;
	
	grappleLine->CableLength = 20000;

	// Destroy the hook if one is already valid.
	if(IsValid(hook)) hook->Destroy();

	// Set the owner and ensure the grapple hook always spawns...

	// Spawn and set the hook
	hook = GetWorld()->SpawnActor<AGrappleHead>(grappleHeadClass, grappleSpawn->GetComponentLocation(), grappleSpawn->GetComponentRotation(), params);
	SetupLine();

	// Deactivate so that this doesn't happen repeatedly
	active = false;

	// Give the hook the launch direction so it can go...
	hook->Launch(grappleSpawn->GetForwardVector());
}

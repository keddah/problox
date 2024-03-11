// Fill out your copyright notice in the Description page of Project Settings.


#include "Grappler.h"

AGrappler::AGrappler()
{
	grappleSpawn = CreateDefaultSubobject<USceneComponent>(TEXT("Spawn Location"));
	grappleSpawn->AttachToComponent(objMesh, FAttachmentTransformRules::KeepRelativeTransform);

	grappleLine = CreateDefaultSubobject<UCableComponent>(TEXT("Line"));
	grappleLine->AttachToComponent(grappleSpawn, FAttachmentTransformRules::KeepRelativeTransform);
}

void AGrappler::Ability()
{
	Super::Ability();

	if(!active) return;

	if(IsValid(hook)) hook->Destroy();

	FActorSpawnParameters params;
	params.Owner = this;
	
	hook = GetWorld()->SpawnActor<AGrappleHead>(grappleHeadClass, grappleSpawn->GetComponentTransform(), params);
}

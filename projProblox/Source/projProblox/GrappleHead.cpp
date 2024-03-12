// Fill out your copyright notice in the Description page of Project Settings.


#include "GrappleHead.h"

// Sets default values
AGrappleHead::AGrappleHead()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	scene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Hook"));
	mesh->AttachToComponent(scene, FAttachmentTransformRules::KeepRelativeTransform);
	
	collider = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collision"));
	collider->AttachToComponent(mesh, FAttachmentTransformRules::KeepRelativeTransform);
}
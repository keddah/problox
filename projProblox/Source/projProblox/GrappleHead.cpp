// Fill out your copyright notice in the Description page of Project Settings.


#include "GrappleHead.h"

#include "Grappler.h"

// Sets default values
AGrappleHead::AGrappleHead()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	projectile = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile"));
	
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Hook"));
	
	collider = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collision"));
	collider->SetupAttachment(mesh);
}

void AGrappleHead::BeginPlay()
{
	Super::BeginPlay();

	parent = Cast<AGrappler>(GetOwner());
}
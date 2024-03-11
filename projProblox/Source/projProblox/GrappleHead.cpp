// Fill out your copyright notice in the Description page of Project Settings.


#include "GrappleHead.h"

#include "Grappler.h"

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

// Called when the game starts or when spawned
void AGrappleHead::BeginPlay()
{
	Super::BeginPlay();

	parent = Cast<AGrappler>(GetOwner());
	projMovement->SetVelocityInLocalSpace(GetActorForwardVector() * launchForce * 1000);
}

// Called every frame
void AGrappleHead::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Pull();
}

void AGrappleHead::Pull()
{
	if(!canPull) return;

	const FVector parentPos = parent->GetMesh()->GetComponentLocation();
	const FVector meshPos = mesh->GetComponentLocation();
	
	const float distance = FVector::Distance(parentPos, mesh->GetComponentLocation());

	shouldPull = distance > cancelDistance;
	if(!shouldPull)
	{
		canPull = false;
		Destroy();
		return;
	}

	// Normalize so that the speed doesnt increase depending on how far the hook is.
	// const FVector pullDir = ((parentPos - meshPos) * -1).Normalize(.0001);
	const FVector pullDir = FVector(parentPos - meshPos).Normalize(.001f);
	parent->Pull(VectorNormalize(pullDir), pullSpeed * -1000);
}


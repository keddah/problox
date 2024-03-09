// Fill out your copyright notice in the Description page of Project Settings.


#include "Propeller.h"

#include "CubeCore.h"

APropeller::APropeller()
{
	windBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Wind Collider"));
	windBox->AttachToComponent(objMesh, FAttachmentTransformRules::KeepRelativeTransform);
}

void APropeller::Ability()
{
	Super::Ability();

	if(!active) return;

	objMesh->AddLocalRotation({0, 0, spinSpeed});

	if(!objCore) return;

	const float power = sqrt(objCore->GetMass()) * propelForce * 1000; 
	const FVector force = power * objMesh->GetForwardVector();
	
	objCore->GetMesh()->AddForceAtLocation(force, objMesh->GetComponentLocation());

	// Push the things that are inside the wind box
	if(pushedObjs.IsEmpty()) return;
	for (const auto& obj : pushedObjs) if(obj) obj->AddForce(objMesh->GetForwardVector() * pushForce * 1000);
}

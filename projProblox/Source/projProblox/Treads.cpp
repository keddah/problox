// Fill out your copyright notice in the Description page of Project Settings.


#include "Treads.h"

#include "CubeCore.h"


ATreads::ATreads()
{
	driveTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
	driveTrigger->AttachToComponent(objMesh, FAttachmentTransformRules::KeepRelativeTransform);
	
}

void ATreads::Ability()
{
	Drag();

	if(!(active && grounded)) return;
	if(!IsValid(objCore)) return;

	// 1000 is the mass of the core (Will take into account of the other attached things .. just not the core.)
	objMesh->AddForce(GetActorForwardVector() * moveSpeed * 1000);
}

void ATreads::Drag() const
{
	const FVector velocity = objMesh->GetComponentVelocity();
	const FVector drag = sqrt(velocity.Length()) * velocity * -dragScale;  
	objMesh->AddForce(drag);
}

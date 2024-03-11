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
	// Drag();

	if(!(active && grounded)) return;
	if(!IsValid(objCore)) return;

	objCore->Movement(objCore->GetMesh()->GetRightVector(), moveSpeed);
}

void ATreads::Drag() const
{
	const FVector velocity = objMesh->GetComponentVelocity();
	const FVector drag = sqrt(velocity.Length()) * velocity * -.5;  
	objMesh->AddForce(drag);
}

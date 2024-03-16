// Fill out your copyright notice in the Description page of Project Settings.


#include "Piston.h"

#include "CubeCore.h"

APiston::APiston()
{
	flatHead = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Push Pad"));
	flatHead->AttachToComponent(objMesh, FAttachmentTransformRules::KeepWorldTransform);
	collider->AttachToComponent(flatHead, FAttachmentTransformRules::KeepRelativeTransform);
}

void APiston::BeginPlay()
{
	Super::BeginPlay();
}

void APiston::Ability()
{
	if(!active)
	{
		pushSpeed = 1;
		flatHead->SetRelativeLocation({0,0,0});
		return;
	}

	const float distance = FVector::Distance(flatHead->GetRelativeLocation(), objMesh->GetRelativeLocation());
	if(distance > pushExtent) return;

	const FVector pushDir = UKismetMathLibrary::GetForwardVector(objCore->GetMesh()->GetSocketRotation(attachedSocket));
	flatHead->AddWorldOffset(pushDir * pushSpeed);

	// Accelerate the push speed
	pushSpeed += pushSpeed;
}
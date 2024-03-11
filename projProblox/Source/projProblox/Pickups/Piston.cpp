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
	objMesh->SetCollisionResponseToAllChannels(active? ECR_Block : ECR_Ignore);
	objMesh->SetHiddenInGame(!active);

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

	//
	// objMesh->SetCollisionResponseToAllChannels(active? ECR_Block : ECR_Ignore);
	// objMesh->SetHiddenInGame(!active);
	//
	// FVector pushDir;
	// if(IsValid(objCore)) pushDir = UKismetMathLibrary::GetForwardVector(objCore->GetMesh()->GetSocketRotation(attachedSocket));
	// if(!active)
	// {
	// 	const float distance = objMesh->GetRelativeLocation().Length() - flatHead->GetRelativeLocation().Length();
	// 	if(distance <= 0)
	// 	{
	// 		flatHead->SetRelativeLocation({0,0,0});
	// 		return;
	// 	}
	// 	
	// 	// Retract the piston
	// 	flatHead->AddRelativeLocation(pushDir * pushSpeed);
	// 	return;
	// }
	//
	// const float distance = FVector::Distance(flatHead->GetRelativeLocation(), objMesh->GetRelativeLocation());
	// if(distance > pushExtent) return;
	//
	// flatHead->AddWorldOffset(pushDir * pushSpeed);
}
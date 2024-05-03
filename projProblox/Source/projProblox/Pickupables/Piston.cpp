/**************************************************************************************************************
* Glider - Code
* 
* The code file for one of the pickupable objects.
* PROBLEMS:
* Doesn't work consistently
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/

#include "Piston.h"
#include "Cores/CubeCore.h"

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

void APiston::Ability(const float deltaTime)
{
	Super::Ability(deltaTime);
	
    objMesh->SetHiddenInGame(!active);
	objMesh->SetCollisionResponseToAllChannels(active? ECR_Block:ECR_Ignore);
	moving = false;
	
	if(!active)
	{
		pushSpeed = 1;
		flatHead->SetRelativeLocation({0,0,0});
		return;
	}

	const float distance = FVector::Distance(flatHead->GetRelativeLocation(), objMesh->GetRelativeLocation());
	if(distance > pushExtent) return;

	moving = true;
	
	const FVector pushDir = UKismetMathLibrary::GetForwardVector(parentCore->GetMesh()->GetSocketRotation(attachedSocket));
	flatHead->AddWorldOffset(pushDir * pushSpeed);

	// Accelerate the push speed
	pushSpeed += pushSpeed;
}
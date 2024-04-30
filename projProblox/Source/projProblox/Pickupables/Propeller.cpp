/**************************************************************************************************************
* Glider - Code
* 
* The code file for one of the pickupable objects.
* PROBLEMS:
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/

#include "Propeller.h"

#include "Cores/CubeCore.h"

void APropeller::BeginPlay()
{
	Super::BeginPlay();
	
	attachOffset = 5;
}

APropeller::APropeller()
{
	windBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Wind Collider"));
	windBox->AttachToComponent(objMesh, FAttachmentTransformRules::KeepRelativeTransform);

	// Don't allow cells to be collected from this collider.
	Tags.Add("NO");
}


void APropeller::Ability()
{
	if(!active) return;

	objMesh->AddLocalRotation({0, 0, spinSpeed});

	if(!parentCore) return;

	const bool vertical = GetActorForwardVector().Z >= .85f;

	// Push the things that are inside the wind box
    if(!pushedObjs.IsEmpty())
    {
		for	(const auto& obj : pushedObjs)
		{
    		if(obj)
    		{
    			const float power = (pushForce * 1000) / sqrt(FVector::DistSquared(GetActorLocation(), obj->GetComponentLocation())) ;
				obj->AddForce(objMesh->GetForwardVector() * power);
    		}
		}
    }

	if(!vertical) return;

	const float power = sqrt(parentCore->GetMass()) * propelForce * 1000; 
	const FVector force = power * objMesh->GetForwardVector();
	
	parentCore->GetMesh()->AddForceAtLocation(force, objMesh->GetComponentLocation());

	
}

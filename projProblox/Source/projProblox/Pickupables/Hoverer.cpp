/**************************************************************************************************************
* Hoverer - Code
* 
* The code file for one of the pickupable objects.
* 
* Problems:
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "Hoverer.h"
#include "Cores/CubeCore.h"

AHoverer::AHoverer()
{
	topLeft = CreateDefaultSubobject<USceneComponent>("Top Left");
	topLeft->SetupAttachment(mesh);

	topRight = CreateDefaultSubobject<USceneComponent>("Top Right");
	topRight->SetupAttachment(mesh);

	bottomLeft = CreateDefaultSubobject<USceneComponent>("Bottom Left");
	bottomLeft->SetupAttachment(mesh);

	bottomRight = CreateDefaultSubobject<USceneComponent>("Bottom Right");
	bottomRight->SetupAttachment(mesh);

	sideUp = CreateDefaultSubobject<USceneComponent>("Side Up");
	sideUp->SetupAttachment(mesh);

	sideDown = CreateDefaultSubobject<USceneComponent>("Side Down");
	sideDown->SetupAttachment(mesh);

	sideLeft = CreateDefaultSubobject<USceneComponent>("Sided Left");
	sideLeft->SetupAttachment(mesh);

	sideRight = CreateDefaultSubobject<USceneComponent>("Side Right");
	sideRight->SetupAttachment(mesh);

	uiName = "Hoverer";
	favouredSlot = ECoreSockets::Down;
}

void AHoverer::Ability(float deltaTime)
{
	Super::Ability(deltaTime);

	if(!active) return;

	const FRotator rot = GetActorRotation();

	// Using pythagoras to find the distance between the hover point position and the floor (since the angle is 45 degrees, only need one distance (the minFloorDistance))
	const float hypDistance = sqrt((hoverDistance * hoverDistance) + (hoverDistance * hoverDistance));

	TArray points { topLeft, topRight, bottomLeft, bottomRight, sideUp, sideDown, sideLeft, sideRight };

	for(const auto& point : points)
	{
		for(int i = 0; i < 5; i++)
		{
			FHitResult hit;
			FCollisionQueryParams collisionParams;
			collisionParams.AddIgnoredActor(this);
			collisionParams.AddIgnoredActor(parentCore);

			// Vertical
			if(i==0) point->SetRelativeRotation({90,0,0});

			// Forward
			else if(i==1) point->SetRelativeRotation({45,0,0});

			// Backward
			else if(i==2) point->SetRelativeRotation({45,180,0});

			// Left
			else if(i==3) point->SetRelativeRotation({45,-90,0});

			// Right
			else if(i==4) point->SetRelativeRotation({45,90,0});

			const FRotator pointRot = point->GetRelativeRotation();
			const float distance = pointRot.Pitch < 90 ? hypDistance : hoverDistance;
			FVector forwardVec = UKismetMathLibrary::GetForwardVector(pointRot);
			forwardVec = rot.RotateVector(forwardVec);
		
			const FVector start = point->GetComponentLocation();
			const FVector end = start + forwardVec * distance;
			// DrawDebugLine(wrld, start, end, FColor::Red);
		
			if(wrld->LineTraceSingleByChannel(hit, start, end, ECC_Visibility, collisionParams))
			{
				const float distanceSquared = FMath::Max(FVector::Dist(hit.Location, start) / distanceMultiplier, .5f);
			
				const float power = (hoverStrength * -1000) / distanceSquared;
				mesh->AddForceAtLocation(forwardVec * power, end);
				// DrawDebugPoint(wrld, hit.ImpactPoint, 10, FColor::Green, false, .2f);
			}
		}
	}
}

void AHoverer::SetAbilityActive(const bool value)
{
	Super::SetAbilityActive(value);

	// Make it harder to turn whilst the hover is active
	if(parentCore) parentCore->GetMesh()->SetAngularDamping(active? 5 : 0);
}

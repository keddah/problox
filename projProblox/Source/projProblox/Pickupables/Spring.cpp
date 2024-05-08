// Created by Dean Atkinson-Walker 2024


#include "Spring.h"

#include "Cores/CubeCore.h"

ASpring::ASpring()
{
	springStart = CreateDefaultSubobject<USceneComponent>("Start");
	springStart->SetupAttachment(objMesh);
}

void ASpring::Ability(float deltaTime)
{
	Super::Ability(deltaTime);

	if(!wrld) return;
	// if(!isAttached) return;

	const FVector start = springStart->GetComponentLocation();
	const FVector direction = springStart->GetForwardVector(); 
	const float length = 100 * objMesh->GetRelativeScale3D().Z;
	
	FHitResult hit;
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);
	collisionParams.AddIgnoredActor(parentCore);
	
	DrawDebugLine(wrld, start, start + direction * length, FColor::Red);
	if(!wrld->LineTraceSingleByChannel(hit, start, start + direction * length, ECC_Visibility, collisionParams)) return;

	DrawDebugPoint(wrld, hit.ImpactPoint, 10, FColor::Green, false, .2f);
	objMesh->AddForce(hit.Normal * GetSpringEnergy(start, hit.Location) * GetMass());

	splineStart = start;
	splineEnd = hit.Location;
}

float ASpring::GetSpringEnergy(const FVector& start, const FVector& end) const
{
	const float change = (end - start).Length();
	return .5f * springConstant * (change * change);
}

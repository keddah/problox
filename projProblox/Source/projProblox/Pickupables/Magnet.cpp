/**************************************************************************************************************
* Magnet - Code
* 
* The code file for one of the pickupable objects.
* PROBLEMS:
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/

#include "Magnet.h"

#include "Kismet/GameplayStatics.h"

void AMagnet::BeginPlay()
{
	Super::BeginPlay();

	ConfigureCharge();

	TArray<AActor*> magActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), StaticClass(), magActors);
	for (const auto& magActor : magActors) otherMagnets.Add(Cast<AMagnet>(magActor));

	// Ignore self...
	otherMagnets.Remove(this);

	// Telling the other magnets in the level that this one was made...
	for (const auto& mag : otherMagnets) mag->AddMagnet(this);

	objMesh->SetMaterial(0, positive? positiveMat : negativeMat);
}

void AMagnet::Ability(const float deltaTime)
{
	// if(!active) return;
	const FVector thisPos = GetActorLocation();
	for (const auto& mag : otherMagnets)
	{
		if(!IsValid(mag)) continue;
		
		const FVector otherPos = mag->GetActorLocation();
		const float distanceSquared = FVector::DistSquared(otherPos, thisPos);
		const FVector direction = otherPos - thisPos;
		
		// If the charges aren't matching
		const bool attract = mag->positive != positive;
		
		// Scale the force by the distance of the involved blocks 
		objMesh->AddForce((attract? direction : -direction) * ((attractionForce * 1000) / distanceSquared));
	}
}

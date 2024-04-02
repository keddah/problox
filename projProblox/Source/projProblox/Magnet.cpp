// Created by Dean Atkinson-Walker 2024


#include "Magnet.h"

#include "Kismet/GameplayStatics.h"

void AMagnet::BeginPlay()
{
	TArray<AActor*> magActors;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), StaticClass(), magActors);
	for (const auto& magActor : magActors) otherMagnets.Add(Cast<AMagnet>(magActor));

	objMesh->SetMaterial(0, positive? positiveMat : negativeMat);
}

void AMagnet::Ability()
{
	// if(!active) return;
	
	const FVector thisPos = GetActorLocation();
	for (const auto& mag : otherMagnets)
	{
		// If the charges aren't matching
		if(mag->positive != positive)
		{
			const FVector otherPos = mag->GetActorLocation();
			const float distance = FVector::Distance(otherPos, thisPos);

			const FVector direction = thisPos - otherPos;

			// Scale the force by the distance of the involved blocks 
			objMesh->AddForce(direction * ((attractionForce * 1000) / sqrt(distance)));
		}

		// If the charges are the same...
		else
		{
		}
	}
}

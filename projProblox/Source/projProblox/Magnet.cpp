// Created by Dean Atkinson-Walker 2024


#include "Magnet.h"

#include "Kismet/GameplayStatics.h"

void AMagnet::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> magActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), StaticClass(), magActors);
	for (const auto& magActor : magActors) otherMagnets.Add(Cast<AMagnet>(magActor));

	// Ignore self...
	otherMagnets.Remove(this);

	objMesh->SetMaterial(0, positive? positiveMat : negativeMat);
}

void AMagnet::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AMagnet::Ability()
{
	Super::Ability();
	// if(!active) return;

	const FVector thisPos = GetActorLocation();
	for (const auto& mag : otherMagnets)
	{
		const FVector otherPos = mag->GetActorLocation();
		const float distanceSquared = FVector::DistSquared(otherPos, thisPos);
		const FVector direction = otherPos - thisPos;
		
		// If the charges aren't matching
		const bool attract = mag->positive != positive;
		
		// Scale the force by the distance of the involved blocks 
		objMesh->AddForce((attract? direction : -direction) * ((attractionForce * 1000) / distanceSquared));

	}
}

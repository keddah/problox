/**************************************************************************************************************
* Magnet - Code
* 
* The code file for one of the pickupable objects.
* PROBLEMS:
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/

#include "Magnet.h"

#include "MagPole.h"
#include "Kismet/GameplayStatics.h"

void AMagnet::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> magActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), StaticClass(), magActors);
	for (const auto& magActor : magActors) otherMagnets.Add(Cast<AMagnet>(magActor));

	magActors.Empty();
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMagPole::StaticClass(), magActors);
	for (const auto& magActor : magActors) poles.Add(Cast<AMagPole>(magActor));

	// Ignore self...
	otherMagnets.Remove(this);

	// Telling the other magnets in the level that this one was made...
	for (const auto& mag : otherMagnets) mag->AddMagnet(this);

	ConfigureMat();
}

void AMagnet::Ability(const float deltaTime)
{
	if(!mesh)
	{
		Print("mesh was invalid......?: " + GetName().ToUpper(), 4)
		return;
	}

	if(!active) return;

	const FVector thisPos = GetActorLocation();

	if(!poles.IsEmpty())
	{
		for (const auto& mag : poles)
		{
			if(!IsValid(mag)) continue;
			const FVector otherPos = mag->GetMagPosition(this);

			// Go to the next iteration if it's out of range
			if(FVector::Distance(otherPos, thisPos) > fieldRange) continue;
			
			const FVector direction = otherPos - thisPos;
			
			const float distanceSquared = FVector::DistSquared(otherPos, thisPos);
			
			// If the charges aren't matching
			const bool attract = mag->GetPositiveCharge() != positive;
			
			// Scale the force by the distance of the involved blocks
			mesh->AddForce((attract? direction : -direction) * ((attractionForce + mag->GetAttraction() * 1000) / distanceSquared));
		}
	}

	if(otherMagnets.IsEmpty()) return;
	for (const auto& mag : otherMagnets)
	{
		if(!mag) continue;
		const FVector otherPos = mag->GetActorLocation();

		// Go to the next iteration if it's out of range
		if(FVector::Distance(otherPos, thisPos) > fieldRange) continue;
		
		const float distanceSquared = FVector::DistSquared(otherPos, thisPos);
		const FVector direction = otherPos - thisPos;
		
		// If the charges aren't matching
		const bool attract = mag->positive != positive;
		
		// Scale the force by the distance of the involved blocks 
		mesh->AddForce((attract? direction : -direction) * ((attractionForce + mag->GetAttraction() * 1000) / distanceSquared));
	}
	
}

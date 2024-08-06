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
#include "projProblox/LevelManager.h"
#include "projProblox/Pickupables/Cores/CubeCore.h"

void AMagnet::BeginPlay()
{
	Super::BeginPlay();
	
	// Getting the Magpoles
	TArray<AActor*> magActors;
	magActors.Empty();
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMagPole::StaticClass(), magActors);

	for (const auto& magActor : magActors) poles.Add(Cast<AMagPole>(magActor));

	if(!wrld)
	{
		Print("no world... ~ magnet", 4)
		return;
	}

	ALevelManager* manager = Cast<ALevelManager>(UGameplayStatics::GetActorOfClass(wrld, ALevelManager::StaticClass()));
	if(!manager)
	{
		Print("no manager found... ~ magnet", 4)
		return;
	}

	// Not resetting the poles array when entering new levels, the core gets destroyed???????  
	manager->onLevelChanged.AddDynamic(this, &AMagnet::ResetPoles);
}

void AMagnet::Ability(const float deltaTime)
{
	if(!IsValid(mesh))
	{
		Print("mesh was invalid......?: " + GetName().ToUpper(), 4)
		return;
	}
	if(!IsValid(parentCore)) return;

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
}
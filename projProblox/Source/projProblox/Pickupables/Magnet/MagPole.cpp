/**************************************************************************************************************
* Mag Pole - Code
* 
* The code file for the stationary magnet class. Allows all the pickupable magnets to be configured (by giving all the magnets a reference to this).
*
* PROBLEMS:
*	Should probably inherit from the AMagnet class...
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "MagPole.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
AMagPole::AMagPole()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	mesh->SetSimulatePhysics(false);
}

void AMagPole::UpdateMagnets()
{
	UWorld* wrld = GetWorld();
	if(!wrld) return;

	// Needs to be ran after a delay since this function is called after entering new levels but the magnets reset their array when loading new levels.
	FTimerHandle delay;
	wrld->GetTimerManager().SetTimer(delay, [this]
	{
		FScopeLock Lock(&criticalSection); // Lock critical section

		TArray<AActor*> magActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMagnet::StaticClass(), magActors);
		for (const auto& magActor : magActors)
		{
			AMagnet* mag = Cast<AMagnet>(magActor);
			if(mag)
			{
				mag->AddMagPole(this);
			}
		}
	}, .8, false);
}

bool AMagPole::GetPositiveCharge() const
{
	FScopeLock Lock(&criticalSection); // Lock critical section
	return positive;
}

float AMagPole::GetAttraction() const
{
	FScopeLock Lock(&criticalSection); // Lock critical section
	return attractionForce * 1000.0f;
}

FVector AMagPole::GetMagPosition(const AMagnet* mag) const
{
	FScopeLock Lock(&criticalSection); // Lock critical section

	if(!IsValid(mag)) return FVector::ZeroVector;
	if(!IsValid(mesh)) return FVector::ZeroVector;

	FVector out;
	if (mesh->GetClosestPointOnCollision(mag->GetActorLocation(), out))
	{
		return out;
	}

	return FVector::ZeroVector;
}
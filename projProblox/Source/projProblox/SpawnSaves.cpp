// Created by Dean Atkinson-Walker 2024


#include "SpawnSaves.h"

#include "Kismet/GameplayStatics.h"

void USpawnSaves::SaveSpawnUnlock(const TArray<ASpawnPoint*>& spawns)
{
	if(spawns.IsEmpty())
	{
		Print("Couldn't save spawns because the passed spawns array reference was empty...", 9)
		return;
	}

	allSpawns = spawns;
	UGameplayStatics::SaveGameToSlot(this, "SpawnSaves", 0);
}

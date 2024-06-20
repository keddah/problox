// Created by Dean Atkinson-Walker 2024


#include "SaveFiles.h"

#include "Kismet/GameplayStatics.h"

void USpawnSaves::AddUnlock(short newUnlock)
{
	if(newUnlock == -1)
	{
		Print("Couldn't save spawns because the passed index was bad...", 9)
		return;
	}

	unlocks.AddUnique(newUnlock);
	PrintUnlockedIndices();
	UGameplayStatics::SaveGameToSlot(this, spawnSaveSlot, 0);
}

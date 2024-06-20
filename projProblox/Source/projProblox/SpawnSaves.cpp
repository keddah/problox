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

	// Adding rather than setting the array so that elements can't be removed (once something is unlocked... it stays unlocked).
	unlocks.AddUnique(newUnlock);
	PrintUnlockedIndices();
	
	if(UGameplayStatics::SaveGameToSlot(this, spawnSaveSlot, 0)) Print("Save successful", 5)
	else Print("Save failed", 5)
}

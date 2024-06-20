// A file containing all the save related classes

#pragma once

#include "CoreMinimal.h"
#include "SpawnPoint.h"
#include "GameFramework/SaveGame.h"
#include "SaveFiles.generated.h"

#define Print(x, duration) { GEngine->AddOnScreenDebugMessage(-1, duration, FColor::Cyan, x); }
static const FString spawnSaveSlot = "SpawnSaves";

UCLASS()
class PROJPROBLOX_API USpawnSaves : public USaveGame
{
	GENERATED_BODY()

	// contains the indices of all the unlocked spawn points
	TArray<short> unlocks;


public:
	// Pass the spawn pointer so that it can be found in the array.
	void AddUnlock(short newUnlock);

	const TArray<short>& GetUnlockedIndices() const { PrintUnlockedIndices(); return unlocks; }
	void PrintUnlockedIndices() const 
	{
		FString text = "Unlocked indices: ";
		for (const auto& index: unlocks)
		{
			text += FString::FromInt(index) + ", ";
		}

		Print(text, 10)
	}
}; 

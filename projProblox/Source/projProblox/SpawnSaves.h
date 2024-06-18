// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "SpawnPoint.h"
#include "GameFramework/SaveGame.h"
#include "SpawnSaves.generated.h"

#define Print(x, duration) { GEngine->AddOnScreenDebugMessage(-1, duration, FColor::Cyan, x); }


UCLASS()
class PROJPROBLOX_API USpawnSaves : public USaveGame
{
	GENERATED_BODY()

	// Unsorted spawns (all level spawns in one array).
	TArray<ASpawnPoint*> allSpawns;

	// Array needs to be synced to the allSpawns array
	TArray<bool> unlockedSpawns;

public:
	// Pass the spawn pointer so that it can be found in the array.
	void SaveSpawnUnlock(const TArray<ASpawnPoint*>& spawns);

	const TArray<ASpawnPoint*>& GetAllSpawns() const { return allSpawns; }
};

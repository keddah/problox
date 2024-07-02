// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "CustomGameInstance.h"
#include "PlayerCharacter.h"
#include "SpawnPoint.h"
#include "Cells/CellSpawner.h"
#include "Engine/LevelStreamingDynamic.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"

#include "LevelManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangedSpawn, int, spawn);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangedLevels, int, levelIndex, ELevel, newLevel);


UCLASS()
class PROJPROBLOX_API ALevelManager : public AActor
{
	GENERATED_BODY()
	
	void UnloadLevel(short lvlIndex);
	UCustomGameInstance* instance;
	APlayerCharacter* player;
	
	ACubeCore* core;
	
	ASpawnPoint* lvl0Spawn;
	TArray<ASpawnPoint*> allSpawns;
	TArray<ASpawnPoint*> lvl1Spawns;
	TArray<ASpawnPoint*> lvl2Spawns;
	TArray<ASpawnPoint*> lvl3Spawns;

	TArray<UTexture*> lvl1Screenshots;
	TArray<UTexture*> lvl2Screenshots;
	TArray<UTexture*> lvl3Screenshots;

	TArray<ACellSpawner*> cellSpawners;
	
	bool lvl1Loaded;
	bool lvl2Loaded;
	bool lvl3Loaded;

	void FindCore();
	void FindSpawns();

	// Doing in BP because its being weird.
	// void UnlockInitialSpawns();

	// Unlocks the spawns that have previously been unlocked (and saved)
	// Returns whether a load file was found
	bool LoadUnlockedSpawns();
	
	UFUNCTION()
	void OnHidden();
	
	UFUNCTION()
	void OnShown();
	
	UFUNCTION()
	void SaveSpawns();
	
	UFUNCTION()
	void SetLoading() { bLevelLoading = true; }
	
	void InitSpawners();

	void SelectSpawn(int spawnPoint);

	void WakeSleepCells();
	
public:	
	// Sets default values for this actor's properties
	ALevelManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// The index of the current level.
	short currentLevel = 1;

	UPROPERTY(BlueprintReadOnly)
	bool bLevelLoading = false;
	
	UWorld* wrld;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<ULevelStreamingDynamic*> levels;

public:
	virtual void Tick(float DeltaSeconds) override;
	
	// Returns whether the loaded level. Initial load is only for the build level (when it's first loaded up in the level manager blueprint) 
	UFUNCTION(BlueprintCallable)
	bool LoadLevel(int lvlIndex, int spawnPoint = 0, const bool initialLoad = false);
	
	int GetLevelIndex(const ULevel* lvl) const
	{
		if (!lvl) return -1;

		// Iterate through the levels array
		for (int32 i = 0; i < levels.Num(); ++i)
		{
			if (levels[i] && levels[i]->GetLoadedLevel() == lvl)
			{
				PrintInt(i, 5)
				return i;
			}
		}
		return -1;
	}

	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Hides all the levels apart from the current level."))
	void UnloadUnusedLevels();
	
	// Hides every single level.
	UFUNCTION(BlueprintCallable)
	void UnloadAllLevels() { for (int i = 0; i < levels.Num(); i++)	UnloadLevel(i); }
	
	void UnHideLevel(const short lvl = -1)
	{
		if (lvl == -1) levels[currentLevel]->SetShouldBeVisible(true);
		else if (levels.IsValidIndex(lvl)) levels[currentLevel]->SetShouldBeVisible(true);
		else Print("The given level index was out of range..." , 4)
	}

	
	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Returns the level index of the current level."))
	int GetCurrentLevel() const { return currentLevel; }
	
	UFUNCTION(BlueprintCallable)
	void PrintCurrentLevel() { Print("Current level = " +  FString::FromInt(currentLevel), 5) }

	UPROPERTY(BlueprintAssignable)
	FOnChangedLevels onLevelChanged;
	
	UPROPERTY(BlueprintAssignable)
	FOnChangedSpawn onSpawnChanged;

	UFUNCTION(BlueprintCallable)
	TArray<ASpawnPoint*> GetLevel1Spawns() const { return lvl1Spawns; }

	UFUNCTION(BlueprintCallable)
	TArray<ASpawnPoint*> GetLevel2Spawns() const { return lvl2Spawns; }

	UFUNCTION(BlueprintCallable)
	TArray<ASpawnPoint*> GetLevel3Spawns() const { return lvl3Spawns; }

	UFUNCTION(BlueprintCallable)
	const TArray<UTexture*>& GetLevel1Screenshots() const { return lvl1Screenshots; }

	UFUNCTION(BlueprintCallable)
	const TArray<UTexture*>& GetLevel2Screenshots() const { return lvl2Screenshots; }

	UFUNCTION(BlueprintCallable)
	const TArray<UTexture*>& GetLevel3Screenshots() const { return lvl3Screenshots; }

};

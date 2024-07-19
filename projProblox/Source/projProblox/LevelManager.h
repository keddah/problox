/**************************************************************************************************************
* Level Manager - Header
* 
* The header file for the level manager. Creates delegates for loading, changing spawns and changing levels. Defines the functions and functions that the level manger
* needs.
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/

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

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLoadingLevel);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnScreenshotsTaken);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangedSpawn, int, spawn);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangedLevels, int, levelIndex, ELevel, newLevel);


UCLASS()
class PROJPROBLOX_API ALevelManager : public AActor
{
	GENERATED_BODY()

	/////////////////////////// VARIABLES ///////////////////////////
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


	/////////////////////////// FUNCTIONS ///////////////////////////
	/////////// DELEGATE FUNCTIONS ///////////
	// Function called when the unload delegate is broadcast..
	UFUNCTION()
	void OnHidden();
	
	// Function called when the load delegate is broadcast..
	UFUNCTION()
	void OnShown();
	
	// Function called when the loading delegate is broadcast..
	UFUNCTION()
	void SetIsLoading() { bLevelLoading = true; }

	// Function called when the new spawn unlocked delegate is broadcast..
	UFUNCTION()
	void SaveSpawns();

	
	////////////// INITS ///////////
	// Run on beginPlay
	void InitSpawners();

	// Run on beginPlay
	void FindCore();
	
	// Run on beginPlay
	UFUNCTION()
	void FindSpawns();


	////////////// LOADING/UNLOADING ///////////
	void UnloadLevel(short lvlIndex);

	
	////////////// PLAYER SPAWNS ///////////
	// Teleports the core and the player to the given spawn location
	void SelectSpawn(int spawnPoint);

	// Unlocks the spawns that have previously been unlocked (and saved)
	// Returns whether a load file was found
	bool LoadUnlockedSpawns();
	
	
public:	
	// Sets default values for this actor's properties
	ALevelManager() { PrimaryActorTick.bCanEverTick = false; }

protected:
	virtual void BeginPlay() override;

	
	/////////////////////////// VARIABLES ///////////////////////////
	// The index of the current level.
	short currentLevel = 1;
	ELevel levelEnum = ELevel::BuildArea;

	UPROPERTY(BlueprintReadOnly)
	bool bLevelLoading = false;
	
	UWorld* wrld;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<ULevelStreamingDynamic*> levels;

	UPROPERTY(BlueprintAssignable)
	FOnLoadingLevel onLoadingLevel;

	UPROPERTY(BlueprintAssignable)
	FOnScreenshotsTaken onScreenshotsTaken;
	
public:
	/////////////////////////// VARIABLES ///////////////////////////
	////////////// DELEGATES ///////////
	UPROPERTY(BlueprintAssignable)
	FOnChangedLevels onLevelChanged;
	
	UPROPERTY(BlueprintAssignable)
	FOnChangedSpawn onSpawnChanged;
	

	/////////////////////////// FUNCTIONS ///////////////////////////
	// Returns whether the loaded level. Initial load is only for the build level (when it's first loaded up in the level manager blueprint) 
	UFUNCTION(BlueprintCallable)
	bool LoadLevel(int lvlIndex, int spawnPoint = 0);
	
	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Hides all the levels apart from the current level."))
	void UnloadUnusedLevels();


	////////////// GETTERS ///////////
	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Returns the level index of the current level."))
	int GetCurrentLevel() const { return currentLevel; }

	// These return the spawn points from each level
	UFUNCTION(BlueprintCallable)
	const TArray<ASpawnPoint*>& GetLevel1Spawns() const { return lvl1Spawns; }
	UFUNCTION(BlueprintCallable)
	const TArray<ASpawnPoint*>& GetLevel2Spawns() const { return lvl2Spawns; }
	UFUNCTION(BlueprintCallable)
	const TArray<ASpawnPoint*>& GetLevel3Spawns() const { return lvl3Spawns; }

	// These return the screenshots from each spawn from each level
	UFUNCTION(BlueprintCallable)
	const TArray<UTexture*>& GetLevel1Screenshots() const { return lvl1Screenshots; }
	UFUNCTION(BlueprintCallable)
	const TArray<UTexture*>& GetLevel2Screenshots() const { return lvl2Screenshots; }
	UFUNCTION(BlueprintCallable)
	const TArray<UTexture*>& GetLevel3Screenshots() const { return lvl3Screenshots; }
};

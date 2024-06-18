// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "CustomGameInstance.h"
#include "PlayerCharacter.h"
#include "SpawnPoint.h"
#include "Engine/LevelStreamingDynamic.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"

#include "LevelManager.generated.h"

#define Print(x, duration) { GEngine->AddOnScreenDebugMessage(-1, duration, FColor::Cyan, x); }

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangedLevels, int, levelIndex);


UCLASS()
class PROJPROBLOX_API ALevelManager : public AActor
{
	GENERATED_BODY()

	void UnloadLevel(short lvlIndex);
	UCustomGameInstance* instance;
	APlayerCharacter* player;
	
	ACubeCore* core;
	
	ASpawnPoint* lvl0Spawn;
	TArray<ASpawnPoint*> lvl1Spawns;
	TArray<ASpawnPoint*> lvl2Spawns;
	TArray<ASpawnPoint*> lvl3Spawns;

	void FindCore();
	void InitCellSpawners();

	UFUNCTION()
	void OnLevelLoaded();
	
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

	bool lvl1Spawned;
	bool lvl2Spawned;
	bool lvl3Spawned;

public:
	virtual void Tick(float DeltaSeconds) override;
	
	// Returns whether the loaded level. 
	UFUNCTION(BlueprintCallable)
	void LoadLevel(int lvlIndex, int spawnPoint = 0);

	int GetLevelIndex(ULevel* lvl) const
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

	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Unloads all the levels apart from the current level."))
	void UnloadAllLevels();
	
	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Returns the level index of the current level."))
	int GetCurrentLevel() const { return currentLevel; }
	
	UFUNCTION(BlueprintCallable)
	void PrintCurrentLevel() { Print("Current level = " +  FString::FromInt(currentLevel), 5) }

	UPROPERTY(BlueprintAssignable)
	FOnChangedLevels onLevelChanged;

	UFUNCTION(BlueprintCallable)
	TArray<ASpawnPoint*> GetLevel1Spawns() const { return lvl1Spawns; }

	UFUNCTION(BlueprintCallable)
	TArray<ASpawnPoint*> GetLevel2Spawns() const { return lvl2Spawns; }

	UFUNCTION(BlueprintCallable)
	TArray<ASpawnPoint*> GetLevel3Spawns() const { return lvl3Spawns; }

};

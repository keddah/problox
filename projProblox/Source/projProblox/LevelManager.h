// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "CustomGameInstance.h"
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

	TArray<ASpawnPoint*> lvl1Spawns;
	TArray<ASpawnPoint*> lvl2Spawns;
	TArray<ASpawnPoint*> lvl3Spawns;
	
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
	
	// Returns whether the loaded level. 
	UFUNCTION(BlueprintCallable)
	void InitLoadLevel(int lvlIndex);


	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Unloads all the levels apart from the current level."))
	void UnloadAllLevels();
	
	UFUNCTION(BlueprintCallable)
	void PrintCurrentLevel() const { Print("Current level = " +  FString::FromInt(currentLevel), 5) }

	FOnChangedLevels onLevelChanged;
};

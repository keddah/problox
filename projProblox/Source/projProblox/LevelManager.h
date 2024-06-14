// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"

#include "LevelManager.generated.h"

#define Print(x, duration) { GEngine->AddOnScreenDebugMessage(-1, duration, FColor::Cyan, x); }

UCLASS()
class PROJPROBLOX_API ALevelManager : public AActor
{
	GENERATED_BODY()

	void UnloadCurrentLevel();
	
public:	
	// Sets default values for this actor's properties
	ALevelManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// The index of the current level.
	short currentLevel = 0;

	// The level that is about to be loaded.
	short pendingLevel = -1;

	UPROPERTY(BlueprintReadOnly)
	bool bLevelLoading = false;
	
	UWorld* wrld;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<TSoftObjectPtr<UWorld>> levels;

public:
	// Returns whether the loaded level. 
	UFUNCTION(BlueprintCallable)
	void LoadLevel(int lvlIndex);

	UFUNCTION()
	void OnLevelLoaded();

	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Unloads all the levels apart from the current level."))
	void UnloadAllLevels();
	
	UFUNCTION()
	void OnAllLevelsUnloaded() { Print("All levels unloaded.", 5)}
	
	UFUNCTION()
	void OnLevelUnloaded();

	UFUNCTION(BlueprintCallable)
	void PrintCurrentLevel() const { Print("Pending level = " +  FString::FromInt(pendingLevel), 5) Print("Current level = " +  FString::FromInt(currentLevel), 5) }
};

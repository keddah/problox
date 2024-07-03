/**************************************************************************************************************
* Level Objective - Header
* 
* The header file for the level objective data asset. These data assets will be assigned to spawners that are triggerable so that the notebook UI is able to keep track
* and know what to display as hints. These assets should be created in editor beforehand so that they can be assigned to specified spawners in the level. 
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LevelObjective.generated.h"

// When naming the file use the level name then a clue to what the objective is... like 'Bedroom_Bed'. Doing this ensures the level name is correct (The level name needs to match in order
// for the UI to understand...)
UCLASS(Blueprintable)
class PROJPROBLOX_API ULevelObjective : public UDataAsset
{
	GENERATED_BODY()

	ULevelObjective()
	{
		// Whatever the file is called, use the start of it to name the level (the level name is supposed to be the prefix to the objective)
		const FString name = GetName();
		for(int i = 0; i < name.Len(); i++)
		{
			if(name[i] == '_') break;

			levelName.AppendChar(name[i]);
		}
	}
	
	UPROPERTY(EditAnywhere)
	FString levelName;

	UPROPERTY(EditAnywhere)
	FText description = FText::FromString("a long and random piece of advice that needs to get ticked off when something happens so that the player knows what to do and so that they know they did something.");

	UPROPERTY(EditAnywhere)
	bool completed = false;

public:
	UFUNCTION(BlueprintCallable)
	const FString& GetLevelName() const { return levelName; }

	UFUNCTION(BlueprintCallable)
	const bool& IsCompleted() const { return completed; }

	// To be called by the spawner when it's triggered (it would have a reference to this)
	void SetCompleted() { completed = true; }
	
	UFUNCTION(BlueprintCallable)
	const FText& GetDescription() const { return description; }
};

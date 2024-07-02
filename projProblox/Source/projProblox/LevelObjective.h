// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LevelObjective.generated.h"

UCLASS(Blueprintable)
class PROJPROBLOX_API ULevelObjective : public UDataAsset
{
	GENERATED_BODY()

	ULevelObjective()
	{
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

	void SetCompleted() { completed = true; }
	
	UFUNCTION(BlueprintCallable)
	const FText& GetDescription() const { return description; }
};

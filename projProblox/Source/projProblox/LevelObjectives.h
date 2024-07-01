// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LevelObjectives.generated.h"

USTRUCT(BlueprintType)
struct FObjective
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText description = FText::FromString("a long and random piece of advice that needs to get ticked off when something happens so that the player knows what to do and so that they know they did something.");
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool completed = false;
};

UCLASS(Blueprintable)
class PROJPROBLOX_API ULevelObjectives : public UDataAsset
{
	GENERATED_BODY()

	ULevelObjectives() { levelName = FText::FromString(GetName()); }
	
	UPROPERTY(EditAnywhere)
	FText levelName;

	UPROPERTY(EditAnywhere)
	TArray<FObjective> objectives;

public:
	UFUNCTION(BlueprintCallable)
	const FText& GetLevelName() const { return levelName; }
	
	UFUNCTION(BlueprintCallable)
	const TArray<FObjective>& GetObjectives() const { return objectives; }

};

// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "PlayerCharacter.h"
#include "Engine/UserDefinedStruct.h"
#include "PlayerTask.generated.h"

USTRUCT(BlueprintType)
struct FMyStruct
{
	GENERATED_BODY()

	UPROPERTY()
	APickupableMaster* object;

	UPROPERTY(meta = (ToolTip = "The transform of the object BEFORE the operation."))
	FTransform startTransform;
	
	UPROPERTY(meta = (ToolTip = "The transform of the object AFTER the operation."))
	FTransform endTransform;

	UPROPERTY()
	TEnumAsByte<EOperations> operation; // Using TEnumAsByte to store enum value
};
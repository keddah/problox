// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CustomGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PROJPROBLOX_API UCustomGameInstance : public UGameInstance
{
	GENERATED_BODY()

	short currentLevel;

public:
	void SetCurrentLevel(const short index) { currentLevel = index; }
	short GetCurrentLevel() const { return currentLevel; }
};

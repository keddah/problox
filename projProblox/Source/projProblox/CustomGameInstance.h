/**************************************************************************************************************
* Game Instance - Header
* 
* The header file for the custom game instance. Defines its class...
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CustomGameInstance.generated.h"

UCLASS()
class PROJPROBLOX_API UCustomGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
	uint8 currentLevel;
	
public:
	void SetCurrentLevel(const short index) { currentLevel = index; }
	uint8 GetCurrentLevel() const { return currentLevel; }
};

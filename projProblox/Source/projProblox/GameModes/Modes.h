/**************************************************************************************************************
* Modes - Header
* 
* The header file for the different game modes. Defines all the gamemode classes that the game was supposed to have (only using story and build now).
* These modes are primarily used as an easy way to check what type of controls the player is supposed to have (build mode/normal). 
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Modes.generated.h"


UCLASS()
class PROJPROBLOX_API AMode_Story : public AGameModeBase
{
	GENERATED_BODY()

	
protected:
	virtual void BeginPlay() override;
};

UCLASS()
class PROJPROBLOX_API AMode_Build : public AGameModeBase
{
	GENERATED_BODY()

};
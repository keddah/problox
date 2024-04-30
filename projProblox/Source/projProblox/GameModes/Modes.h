// Created by Dean Atkinson-Walker 2024

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
class PROJPROBLOX_API AMode_Wave : public AGameModeBase
{
	GENERATED_BODY()

	virtual void BeginPlay() override;
};


UCLASS()
class PROJPROBLOX_API AMode_Assault : public AGameModeBase
{
	GENERATED_BODY()

	virtual void BeginPlay() override;
};

UCLASS()
class PROJPROBLOX_API AMode_Creative : public AGameModeBase
{
	GENERATED_BODY()

	virtual void BeginPlay() override;
};
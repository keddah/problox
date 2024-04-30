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

	UPROPERTY(EditDefaultsOnly, meta = (ClampMax = 10, ClampMin = 1, ToolTip = "How many MORE cells should be spawned in at the end of the wave"))
	unsigned int waveAdditions = 2;

	UPROPERTY(EditDefaultsOnly, meta = (ClampMax = 10, ClampMin = 1, ToolTip = "How many waves need to pass in order for the game to change (the additions increase or new cell types)"))
	unsigned int waveFrequency = 5;

	UPROPERTY(EditDefaultsOnly, meta = (ClampMax = 10, ClampMin = 1, ToolTip = "How much should the wave additions increase by every x waves (5 waves)"))
	unsigned int waveAdditionIncrease = 1;

	unsigned int wave = 1;
	
	class ACubeCore* core = 0;

	UFUNCTION(BlueprintCallable)
	void IncreaseSpawns();

public:
	UFUNCTION(BlueprintCallable)
	int GetWave() const { return wave; }
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
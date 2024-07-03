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
#include "projProblox/Cells/CellSpawner.h"
#include "Modes.generated.h"


UCLASS()
class PROJPROBLOX_API AMode_Story : public AGameModeBase
{
	GENERATED_BODY()

	
protected:
	virtual void BeginPlay() override;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCoreChanged, ACubeCore*, newCore);

UCLASS()
class PROJPROBLOX_API AMode_Wave : public AGameModeBase
{
	GENERATED_BODY()

	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, meta = (ClampMax = 10, ClampMin = 1, ToolTip = "The number of attachments the player is allowed to choose..."))
	unsigned int attachmentsAvailable = 2;
	
	UPROPERTY(EditDefaultsOnly, Category = "Waves", meta = (ClampMax = 10, ClampMin = 1, ToolTip = "How many MORE cells should be spawned in at the end of the wave"))
	unsigned int waveAdditions = 2;

	UPROPERTY(EditDefaultsOnly, Category = "Waves", meta = (ClampMax = 10, ClampMin = 1, ToolTip = "How many waves need to pass in order for the game to change (the additions increase or new cell types)"))
	unsigned int waveFrequency = 2;

	UPROPERTY(EditDefaultsOnly, Category = "Waves", meta = (ClampMax = 10, ClampMin = 1, ToolTip = "How much should the wave additions increase by every x waves (5 waves)"))
	unsigned int waveAdditionIncrease = 1;
	unsigned int wave = 1;
	
	ACubeCore* core = 0;
	TArray<ACellSpawner*> activeSpawners {0};

	// Activates the next spawner (only does one) - Returns whether or not all spawners are active
	bool ActivateSpawner();
	
	UFUNCTION(BlueprintCallable, Category = "Waves", meta = (ToolTip = "The parameter is just there so that the delegate works. It doesn't do anything."))
	void IncreaseSpawns(int _wave);

public:
	UFUNCTION(BlueprintCallable, Category = "Waves")
	int GetWave() const { return wave; }

	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Returns the amount of attachments the player is allowed to get."))
	int GetAvailability() const { return attachmentsAvailable; }
	
	UFUNCTION(BlueprintCallable)
	void DeductAvailability() { attachmentsAvailable--;}

	FOnCoreChanged onCoreChanged;
};

//
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

UCLASS()
class PROJPROBLOX_API AMode_Build : public AGameModeBase
{
	GENERATED_BODY()

	virtual void BeginPlay() override;
};
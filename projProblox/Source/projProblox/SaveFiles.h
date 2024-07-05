/**************************************************************************************************************
* Level Manager - Header
* 
* The header file for the anything related to saving (MoneySave, SpawnSaves, BoughtAttachments). This defines the save slot names and gives functionality to saving player data.
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "SpawnPoint.h"
#include "GameFramework/SaveGame.h"
#include "Kismet/GameplayStatics.h"
#include "SaveFiles.generated.h"

#define Print(x, duration) { GEngine->AddOnScreenDebugMessage(-1, duration, FColor::Cyan, x); }
static const FString spawnSaveSlot = "SpawnSaves";
static const FString boughtObjsSlot = "UnlockedObjs";
static const FString moneySlot = "MoneySave";

UCLASS()
class PROJPROBLOX_API USpawnSaves : public USaveGame
{
	GENERATED_BODY()

	// contains the indices of all the unlocked spawn points
	TArray<short> unlocks;


public:
	void AddUnlock(short newUnlock);

	const TArray<short>& GetUnlockedIndices() const { return unlocks; }
	void PrintUnlockedIndices() const 
	{
		FString text = "Unlocked indices: ";
		for (const auto& index: unlocks)
		{
			text += FString::FromInt(index) + ", ";
		}

		Print(text, 10)
	}
};




UCLASS()
class PROJPROBLOX_API UBoughtAttachments : public USaveGame
{
	GENERATED_BODY()

	// contains the indices of all the unlocked spawn points
	TArray<short> unlocks;


public:
	void AddUnlock(short newUnlock);

	const TArray<short>& GetUnlockedIndices() const { return unlocks; }
	void PrintUnlockedIndices() const 
	{
		FString text = "Unlocked indices: ";
		for (const auto& index: unlocks)
		{
			text += FString::FromInt(index) + ", ";
		}

		Print(text, 10)
	}
};

UCLASS()
class PROJPROBLOX_API UMoneySave : public USaveGame
{
	GENERATED_BODY()
	UMoneySave() { money = 10000;  }

	int money;


public:
	int32 GetBalance() const { return money; }

	bool SaveBalance(const int balance)
	{
		if (!UGameplayStatics::DoesSaveGameExist(moneySlot, 0))
		{
			Print("Couldn't save balance because the money slot doesn't exist...", 4)
			return false;
		}

		this->money = balance;

		bool success = false;

		success = UGameplayStatics::SaveGameToSlot(this, moneySlot, 0);
		if (!success) Print("money save failed...", 6);

		return success;
	}

	void PrintBalance(float time = 3) const
	{
		Print("Current Balance: " + FString::FromInt(money), time);
	}
}; 
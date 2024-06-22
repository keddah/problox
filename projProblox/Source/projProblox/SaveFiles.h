// A file containing all the save related classes

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

	// contains the indices of all the unlocked spawn points
	int money = 0;


public:
	void AddMoney(const int amount)
	{
		if(UMoneySave* previous = Cast<UMoneySave>(UGameplayStatics::LoadGameFromSlot(moneySlot, 0)))
		{
			money = previous->money + amount;
		}
		else money += amount;
		UGameplayStatics::SaveGameToSlot(this, moneySlot, 0);
		Print("Saving balance (adding): " + FString::FromInt(money), 5);
	}

	void LoseMoney(const int amount)
	{
		money -= amount;
		UGameplayStatics::SaveGameToSlot(this, moneySlot, 0);
		Print("Saving balance (losing): " + FString::FromInt(money), 5);
	}

	int32 GetBalance() const { return money; }

	bool SaveBalance(const int balance)
	{
		if(!UGameplayStatics::DoesSaveGameExist(moneySlot, 0))
		{
			Print("unable to save because the save slot wasnt created...", 4)
			return false;
		}
		
		money = balance;
		const bool success = UGameplayStatics::SaveGameToSlot(this, moneySlot, 0);
		
		if(success) Print("Save successful.", 4)
		else Print("Save failed.", 5)
		return success;
	}

	void PrintBalance(float time = 3) const
	{
		Print("Current Balance: " + FString::FromInt(money), time);
	}
}; 
//
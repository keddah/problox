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
	int32 GetBalance() const { return money; }

	bool SaveBalance(const int balance)
	{
		if(!UGameplayStatics::LoadGameFromSlot(moneySlot, 0))
		{
			// If it can't load, it can't save
			Print("unable to save because the save slot couldn't be loaded...", 4)
			return false;
		}
		
		money = balance;

		if (!this)
		{
			Print("Couldnt save money because the save instance was invalid...", 8);
			return false;
		}

		if (moneySlot.IsEmpty())
		{
			Print("couldn't save because Slot name is empty", 6);
			return false;
		}

		bool success = false;

		try
		{
			success = UGameplayStatics::SaveGameToSlot(this, moneySlot, 0);
			if (!success) Print("money save failed...", 6);
		}
		catch (const std::exception& e)
		{
			Print("Exception Caught: " + FString(e.what()), 6);
		}
		catch (...) Print("Unknown exception caught during save game.", 7);

		return success;
	}

	void PrintBalance(float time = 3) const
	{
		Print("Current Balance: " + FString::FromInt(money), time);
	}
}; 
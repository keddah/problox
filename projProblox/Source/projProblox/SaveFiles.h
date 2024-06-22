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
	int money;


public:
	// Ensure to save after calling this...
	void AddMoney(short amount)
	{
		if(UMoneySave* previousSave = Cast<UMoneySave>(UGameplayStatics::LoadGameFromSlot(moneySlot, 0)))
		{
			money = previousSave->money + amount;
			UGameplayStatics::SaveGameToSlot(this, moneySlot, 0);
		}
		else
		{
			money += amount;
			previousSave = Cast<UMoneySave>(UGameplayStatics::CreateSaveGameObject(StaticClass()));
			UGameplayStatics::SaveGameToSlot(previousSave, moneySlot, 0);
		}
		
		PrintBalance();
	}
	int GetBalance() const { Print("got from core", 5) return money; }
	void SaveBalance(const int balance) { money = balance; UGameplayStatics::SaveGameToSlot(this, moneySlot, 0); Print("Saving balance: " + FString::FromInt(money), 5); }
	void PrintBalance(const float time = 3) const { Print("Current Balance: " + FString::FromInt(money), time) }
}; 

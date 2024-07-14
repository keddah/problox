/**************************************************************************************************************
* Game Instance - Code
* 
* The code for the custom game instance. Used to  manage things that need to be saved no matter what state the game is in.
* Responsible for saving money and unlocked attachments (if that ever becomes a thing)
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "CustomGameInstance.h"


void UCustomGameInstance::Init()
{
	Super::Init();

	// Try to load the money save as soon as the game starts.
	LoadSave();
}

void UCustomGameInstance::LoadSave()
{
	if(UMoneySave* save = Cast<UMoneySave>(UGameplayStatics::LoadGameFromSlot(moneySlot, 0))) moneySave = save;
	else
	{
		moneySave = Cast<UMoneySave>(UGameplayStatics::CreateSaveGameObject(UMoneySave::StaticClass()));
		UGameplayStatics::SaveGameToSlot(moneySave, moneySlot, 0);
	}

	money = moneySave->GetBalance();
	// Print("loaded balance = " + FString::FromInt(money), 5)
}

void UCustomGameInstance::SaveMoney() const
{
	if(!moneySave)
	{
		Print("Money save was not created at init...", 5)
		return;
	}

	moneySave->SaveBalance(money);
}

void UCustomGameInstance::LoseMoney(const int value)
{
	if(!moneySave) moneySave = Cast<UMoneySave>(UGameplayStatics::LoadGameFromSlot(moneySlot, 0));
	if(!moneySave)
	{
		Print("no money save..", 5)
		return;
	}

	money -= value;
	//SaveMoney();
}

void UCustomGameInstance::AddMoney(const int value)
{
	if(!moneySave) moneySave = Cast<UMoneySave>(UGameplayStatics::LoadGameFromSlot(moneySlot, 0));
	if(!moneySave)
	{
		Print("no money save..", 5)
		return;
	}

	money += value;
	//SaveMoney();
}
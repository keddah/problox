// Created by Dean Atkinson-Walker 2024


#include "CustomGameInstance.h"


void UCustomGameInstance::Init()
{
	Super::Init();

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
	Print("loaded balance = " + FString::FromInt(money), 5)
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

int UCustomGameInstance::GetMoney() const
{
	return money;
}

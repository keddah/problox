// Created by Dean Atkinson-Walker 2024


#include "CustomGameInstance.h"

void UCustomGameInstance::LoadSave()
{
	if(UMoneySave* save = Cast<UMoneySave>(UGameplayStatics::LoadGameFromSlot(moneySlot, 0))) moneySave = save;
	else moneySave = Cast<UMoneySave>(UGameplayStatics::CreateSaveGameObject(UMoneySave::StaticClass()));

	Print("loaded balance = " + FString::FromInt(moneySave->GetBalance()), 5)
}

void UCustomGameInstance::Init()
{
	Super::Init();

	LoadSave();
}

void UCustomGameInstance::SaveMoney(const int value) const
{
	if(!moneySave)
	{
		Print("Money save was not created at init...", 5)
		return;
	}

	moneySave->SaveBalance(value);
}

void UCustomGameInstance::LoseMoney(const int value)
{
	if(!moneySave) moneySave = Cast<UMoneySave>(UGameplayStatics::LoadGameFromSlot(moneySlot, 0));
	if(!moneySave)
	{
		Print("no money save..", 5)
		return;
	}

	moneySave->SaveBalance(moneySave->GetBalance() - value);
}

int UCustomGameInstance::GetMoney()
{
	if(!moneySave)
	{
		moneySave = Cast<UMoneySave>(UGameplayStatics::LoadGameFromSlot(moneySlot, 0));
	}
	if(!moneySave)
	{
		Print("no money save..", 5)
		return 0;
	}
	
	return moneySave->GetBalance();
}

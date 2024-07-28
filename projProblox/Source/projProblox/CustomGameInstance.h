/**************************************************************************************************************
* Game Instance - Header
* 
* The header file for the custom game instance. Defines its class...
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "SaveFiles.h"
#include "Engine/GameInstance.h"
#include "CustomGameInstance.generated.h"

UCLASS()
class PROJPROBLOX_API UCustomGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
	unsigned short currentLevel;
	
	UMoneySave* moneySave;
	unsigned int money;

	UFUNCTION()
	void LoadSave();
	
protected:
	virtual void Init() override;
	
public:
	void SetCurrentLevel(const short index) { currentLevel = index; }
	unsigned short GetCurrentLevel() const { return currentLevel; }

	void SaveMoney() const;
	void LoseMoney(const int value);
	void AddMoney(const int value);
	unsigned short GetMoney() const { return money; }
};

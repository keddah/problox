/**************************************************************************************************************
* Glider - Header
* 
* The header file for one of the pickupable objects.
* OVERRIDES:
*	SetAbilityActive
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "Glider.generated.h"

UCLASS()
class PROJPROBLOX_API AGlider : public APickupableMaster
{
	GENERATED_BODY()

	AGlider();
	virtual void SetAbilityActive(const bool value) override
	{
		Super::SetAbilityActive(value);
		if(value) soundPlayer->PlayAbility();
		else soundPlayer->StopAbility();
	}
	
	virtual void Ability(float deltaTime) override;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	unsigned int glideSpeed = 2000;

	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	unsigned int floatAmount = 1750;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (ToolTip = "How fast the object has to be falling in order to activate the glide (Z axis velocity)."))
	float activationSpeed = 500;
};

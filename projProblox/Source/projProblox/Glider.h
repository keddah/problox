// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "Glider.generated.h"

/**
 * 
 */
UCLASS()
class PROJPROBLOX_API AGlider : public APickupableMaster
{
	GENERATED_BODY()

	AGlider();
	
	virtual void Ability() override;

virtual void GhostPlacement() override;
	
protected:
	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	float glideSpeed = 2000;

	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	float floatAmount = 1750;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (ToolTip = "How fast the object has to be falling in order to activate the glide (Z axis velocity)."))
	float activationSpeed = 500;
};

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

	virtual void Ability() override;

protected:
	UPROPERTY(EditDefaultsOnly)
	float glideSpeed = 2000;

	UPROPERTY(EditDefaultsOnly)
	float floatAmount = 1750;
	
	UPROPERTY(EditDefaultsOnly, meta = (ToolTip = "How fast the object has to be falling in order to activate the glide (Z axis velocity)."))
	float activationSpeed = 500;
};

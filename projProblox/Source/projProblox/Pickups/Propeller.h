// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "Propeller.generated.h"

/**
 * 
 */
UCLASS()
class PROJPROBLOX_API APropeller : public APickupableMaster
{
	GENERATED_BODY()

public:
	APropeller();

protected:
	UPROPERTY(VisibleDefaultsOnly)
	UBoxComponent* windBox;
	
	UPROPERTY(BlueprintReadWrite)
	TArray<UPrimitiveComponent*> pushedObjs;

	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "The amount of force to apply to the thing that it's attached to"))
	float propelForce = 50;
	
	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "The amount of force to apply to things that are inside the windCollider while active"))
	float pushForce = 5;
	
private:
	virtual void Ability() override;

	
	const float spinSpeed = 18;
};

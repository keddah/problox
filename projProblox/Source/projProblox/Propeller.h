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

	// Needed because the place rotation can be set incorrectly sometimes.
	virtual void SetSelected(const bool value) override;
	
protected:
	UPROPERTY(VisibleDefaultsOnly)
	UBoxComponent* windBox;
	
	UPROPERTY(BlueprintReadWrite)
	TArray<UPrimitiveComponent*> pushedObjs;

	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (ToolTip = "The amount of force to apply to the thing that it's attached to"))
	float propelForce = 50;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (ToolTip = "The amount of force to apply to things that are inside the windCollider while active"))
	float pushForce = 5;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (ToolTip = "The speed the propellers rotate (purely visual)."))
	float spinSpeed = 22;
	
private:
	virtual void Ability() override;

	
};

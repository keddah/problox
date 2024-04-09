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

	virtual void BeginPlay() override;
	
public:
	APropeller();

	// Needed because the place rotation can be set incorrectly sometimes.
	virtual void SetSelected(const bool value) override;
	virtual void ActivateOutline(UMaterialInstance* mat) const override;
	
protected:
	UPROPERTY(VisibleDefaultsOnly)
	UBoxComponent* windBox;
	
	UPROPERTY(BlueprintReadWrite)
	TArray<UPrimitiveComponent*> pushedObjs;

	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (ToolTip = "The amount of force to apply to the thing that it's attached to"))
	float propelForce = 50;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (ToolTip = "The amount of force to apply to things that are inside the windCollider while active"))
	float pushForce = 10;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (ToolTip = "The speed the propellers rotate (purely visual)."))
	float spinSpeed = 22;

	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (ToolTip = "How much the mass of the core affects the force of the propeller (higher number = higher force)."))
	float massScale = 1000;
	
private:
	virtual void Ability() override;

	
};

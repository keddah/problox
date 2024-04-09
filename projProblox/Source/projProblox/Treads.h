// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "Treads.generated.h"

/**
 * 
 */
UCLASS()
class PROJPROBLOX_API ATreads : public APickupableMaster
{
	GENERATED_BODY()

	ATreads();
	virtual float GetAttachOffset(const APickupableMaster& attachee) override;
	
virtual void BeginPlay() override;
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UBoxComponent* driveTrigger;

	UPROPERTY(BlueprintReadWrite)
	bool grounded;

	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	float moveSpeed = 7500;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	float dragScale = 15;

private:
	virtual void Ability() override;
	void Drag() const;
};

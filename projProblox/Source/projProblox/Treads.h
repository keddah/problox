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

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UBoxComponent* driveTrigger;

	UPROPERTY(BlueprintReadWrite)
	bool grounded;

	UPROPERTY(BlueprintReadWrite)
	float moveSpeed = 7500;
	
	UPROPERTY(BlueprintReadWrite)
	float dragScale = 15;

private:
	virtual void Ability() override;

	void Drag() const;
};

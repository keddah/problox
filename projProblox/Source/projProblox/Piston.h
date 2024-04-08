// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "Piston.generated.h"

/**
 * 
 */
UCLASS()
class PROJPROBLOX_API APiston : public APickupableMaster
{
	GENERATED_BODY()

	APiston();
	virtual void Ability() override;
	
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* flatHead;

	UPROPERTY(BlueprintReadWrite, Category = "Ability", meta = (ToolTip = "How fast the piston head should push out."))
	float pushSpeed = 1;
	
	UPROPERTY(BlueprintReadWrite, Category = "Ability", meta = (ToolTip = "How fast the piston head should push out."))
	float pushForce = 8;
	
	UPROPERTY(BlueprintReadWrite, Category = "Ability", meta = (ToolTip = "How far the flatHead should extend from the piston shaft."))
	float pushExtent = 100;

	UPROPERTY(BlueprintReadOnly, Category = "Ability", meta = (ToolTip = "Whether or not the piston head is currently pushing"))
	bool moving;
	
};

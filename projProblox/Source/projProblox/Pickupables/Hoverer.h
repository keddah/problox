// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "Hoverer.generated.h"

UCLASS()
class PROJPROBLOX_API AHoverer : public APickupableMaster
{
	GENERATED_BODY()

	AHoverer();
	virtual void BeginPlay() override;
	
	virtual void Ability(float deltaTime) override;
	virtual void SetAbilityActive(const bool value) override;
	
	UPROPERTY(EditDefaultsOnly)
	USceneComponent* topLeft;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* topRight;

	UPROPERTY(EditDefaultsOnly)
   	USceneComponent* bottomLeft;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* bottomRight;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* sideUp;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* sideDown;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* sideLeft;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* sideRight;

	UPROPERTY(EditDefaultsOnly)
	float hoverDistance = 250;

	UPROPERTY(EditDefaultsOnly, meta = (ClampMin = 0, ToolTip = "How strong the falloff for the hover strength is (relative to the distance to the floor)."))
	float distanceMultiplier = .1f;

	UPROPERTY(EditDefaultsOnly)
	float hoverStrength = 30;
};
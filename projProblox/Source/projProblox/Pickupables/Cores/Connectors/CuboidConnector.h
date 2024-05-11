// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "CubeConnector.h"
#include "CuboidConnector.generated.h"

/**
 * 
 */
UCLASS()
class PROJPROBLOX_API ACuboidConnector : public ACubeConnector
{
	GENERATED_BODY()

	UArrowComponent* leftArrow2;
	UArrowComponent* rightArrow2;
	UArrowComponent* upwardsArrow2;
	UArrowComponent* downwardsArrow2;
	
	virtual void SetupIndicator() override;
	virtual void SetHideIndicator(const bool hide) override;
	
	ACuboidConnector();
	virtual void BeginPlay() override;
};

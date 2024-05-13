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

	ACuboidConnector();
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	UArrowComponent* leftArrow2;
	
	UPROPERTY(EditDefaultsOnly)
	UArrowComponent* rightArrow2;
	
	UPROPERTY(EditDefaultsOnly)
	UArrowComponent* upArrow2;
	
	UPROPERTY(EditDefaultsOnly)
	UArrowComponent* downArrow2;
	
	virtual void GhostPlacement() override;
	virtual void SetupPlaceIndicator() override;
	virtual void SetHideIndicator(const bool hide) override;
	virtual float GetAttachOffset(const APickupableMaster& attachee) override;
	
	TArray<FVector> socketDifferences;
	
	void SetDifferenceFromSockets();
	const FVector& GetSocketDifference(const FName& socket);
};

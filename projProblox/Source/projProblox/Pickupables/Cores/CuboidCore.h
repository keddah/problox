// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "CubeCore.h"
#include "SocketInfo/CuboidSocketInfo.h"
#include "CuboidCore.generated.h"

/**
 * 
 */
UCLASS()
class PROJPROBLOX_API ACuboidCore : public ACubeCore
{
	GENERATED_BODY()

	ACuboidCore();
	
	UPROPERTY(EditDefaultsOnly)
	UArrowComponent* otherIndicator;

	virtual void ScaleIndicator() override;
	virtual void SetHideIndicator(const bool hide) override { Super::SetHideIndicator(hide); otherIndicator->SetHiddenInGame(hide); }
	
protected:
	virtual void BeginPlay() override;

	virtual void Placement() override;
};
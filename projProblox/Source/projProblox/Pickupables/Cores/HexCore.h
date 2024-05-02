// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "CubeCore.h"
#include "HexCore.generated.h"

/**
 * 
 */
UCLASS()
class PROJPROBLOX_API AHexCore : public ACubeCore
{
	GENERATED_BODY()

	AHexCore();
	
    UPROPERTY(EditDefaultsOnly)
    UStaticMeshComponent* topper;

protected:
	virtual void BeginPlay() override;
};
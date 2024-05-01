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

protected:
	virtual void BeginPlay() override;

	virtual void Placement() override;
};
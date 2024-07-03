// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "CubeSocketInfo.h"
#include "CuboidSocketInfo.generated.h"

UCLASS(Transient)
class PROJPROBLOX_API UCuboidSocketInfo : public UCubeSocketInfo
{
	GENERATED_BODY()

	UCuboidSocketInfo()
	{
		sockets = { "FRONT", "BACK", "RIGHT1", "RIGHT2", "LEFT1", "LEFT2", "UP1", "UP2", "DOWN1", "DOWN2" };
		socketObjects = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	}
};

// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "CubeSocketInfo.h"
#include "HexagonSocketInfo.generated.h"

UCLASS(Transient)
class PROJPROBLOX_API UHexagonSocketInfo : public UCubeSocketInfo
{
	GENERATED_BODY()

	UHexagonSocketInfo()
	{
		sockets = { "HEX1", "HEX2", "HEX3", "HEX4", "HEX5", "HEX6", "DOWN" };
		socketObjects = { 0, 0, 0, 0, 0, 0, 0 };
	}
};

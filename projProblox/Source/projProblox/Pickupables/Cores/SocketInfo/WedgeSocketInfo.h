/**************************************************************************************************************
* Wedge Socket Information - Header
* 
* The header file for wedge connector's socket information. This inherits from the cubeSocketInfo data asset. This was required since
* the wedge's slots aren't the same as the cubes (it only has 3). This just resizes the 2 arrays it inherits and changes the names of the sockets... 
*
* OVERRIDES:
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/
#pragma once

#include "CoreMinimal.h"
#include "CubeSocketInfo.h"
#include "WedgeSocketInfo.generated.h"

UCLASS()
class PROJPROBLOX_API UWedgeSocketInfo : public UCubeSocketInfo
{
	GENERATED_BODY()

	UWedgeSocketInfo()
	{
		sockets = {"DIAG", "BACK", "DOWN" };
		socketObjects = { 0, 0, 0 };
	}
};

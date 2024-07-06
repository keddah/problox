/**************************************************************************************************************
* Wedge Connector - Header
* 
* The header file for weedge connector (one of the connector classes). overrides some of the essential functions that were created in the Connector Core header file.
*
* OVERRIDES:
*	ApplyOffset
*	GhostPlacement
*	SetHideIndicator
*	SetupIndicator
*	GetAttachOffset
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "CubeConnector.h"
#include "WedgeConnector.generated.h"

UCLASS()
class PROJPROBLOX_API AWedgeConnector : public ACubeConnector
{
	GENERATED_BODY()
	
	AWedgeConnector();
	virtual void ApplyOffset(const ACubeCore* core) override;
	virtual void GhostPlacement() override;
	virtual void GhostSnapRotate(const FString& keypress) override;
	virtual void FindOppositeSocket() override { /* There are no opposites... */ }
	virtual float GetAttachOffset(const APickupableMaster& attachee) override
	{
		if(!IsValid(&attachee)) return 0;
		
		const float distance = attachee.IsA<ACubeConnector>()? 50 : 35;
		attachOffset = raySocket == "DIAG" ? 0 : distance;
		return attachOffset;
	}
	
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
	
};

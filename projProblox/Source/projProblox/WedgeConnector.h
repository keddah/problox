// Created by Dean Atkinson-Walker 2024

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
	virtual void SetAbilityActive(bool value) override;
	virtual void GhostPlacement() override;
	virtual void SetHideIndicator(const bool hide) override;
	virtual void SetupIndicator() override;
	virtual float GetAttachOffset(const APickupableMaster& attachee) override
	{
		if(!IsValid(&attachee)) return 0;
		
		const float distance = parentCore->IsA<ACubeConnector>()? 50 : 25;
		attachOffset = raySocket == "DIAG" ? 0 : distance;
		return attachOffset;
	}
	
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
	
};

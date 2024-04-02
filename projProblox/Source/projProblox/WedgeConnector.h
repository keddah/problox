// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "CubeConnector.h"
#include "WedgeConnector.generated.h"

/**
 * 
 */
UCLASS()
class PROJPROBLOX_API AWedgeConnector : public ACubeConnector
{
	GENERATED_BODY()
	AWedgeConnector();
	virtual void ApplyOffset(ACubeCore* core) override;
	
public:
	virtual void SetSelected(const bool value) override;
	virtual void SetAbilityActive(bool value) override;
	virtual void GhostPlacement() override;
	virtual void Tick(float DeltaSeconds) override;
	virtual void SetHideIndicator(const bool hide) override;
	virtual void SetupIndicator() override;
	
protected:
	virtual void BeginPlay() override;
	
};

/**************************************************************************************************************
* Cube Connector - Header
* 
* The header file for cube connector (one of the connector classes). overrides some of the essential functions that were created in the Cube Core header file.
* Also creates a protected variable "raySocket" to store the socket which the placement line trace is currently on.
*
* OVERRIDES:
*	SetAttachedSocket
*	ApplyOffset
*	Placement
*	GhostPlacement
*	SetHideIndicator
*	SetupIndicator
*	GetAttachOffset
*	Reattach
*	SetSelect
*	SetAbilityActive
*	SetGroupSelected
*
* PROBLEMS:
*	The ghost placement isn't always perfect... If the thing it's trying to attach to is slightly at an angle the place rotation is off
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "./projProblox/Pickupables/Cores/CubeCore.h"
#include "CubeConnector.generated.h"

/**
 * //
 */
UCLASS()
class PROJPROBLOX_API ACubeConnector : public ACubeCore
{
	GENERATED_BODY()

public:
	ACubeConnector();
	
private:
	virtual void SetAttachedSocket(FName socket, const bool useDirection) override;
	virtual EOperations SetGroupSelected(const bool value) override;

public:
	virtual EOperations SetSelected(const bool value) override;
	virtual void SetAbilityActive(bool value) override;

	// The parameter is the parentCore
	virtual void ApplyOffset(const ACubeCore* core) override;
	
protected:
	UPROPERTY(EditDefaultsOnly)
	UArrowComponent* leftArrow;
	
	UPROPERTY(EditDefaultsOnly)
	UArrowComponent* rightArrow;
	
	UPROPERTY(EditDefaultsOnly)
	UArrowComponent* upArrow;
	
	UPROPERTY(EditDefaultsOnly)
	UArrowComponent* backArrow;
	
	UPROPERTY(EditDefaultsOnly)
	UArrowComponent* downArrow;

	
	virtual void BeginPlay() override;
	virtual void Placement() override;
	virtual void GhostPlacement() override;
	virtual void SetHideIndicator(const bool hide) override;
	virtual void SetupPlaceIndicator() override;
	virtual float GetAttachOffset(const APickupableMaster& attachee) override;
	virtual void Reattach() override;
	virtual void Detach() override;
};

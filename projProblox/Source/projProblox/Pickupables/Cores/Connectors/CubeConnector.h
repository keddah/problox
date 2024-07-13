/**************************************************************************************************************
* Cube Connector - Header
* 
* The header file for cube connector (one of the connector classes). overrides some of the essential functions that were created in the Cube Core header file.
* Also creates a protected variable "raySocket" to store the socket which the placement line trace is currently on.
*
* OVERRIDES:
*	SetAttachedSocket
*	ApplyOffset
*	GhostPlacement
*	GetAttachOffset
*	Reattach
*	SetSelect
*	SetAbilityActive
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
	
	virtual void SetSelected(const bool value) override;
	virtual void SetAbilityActive(bool value) override;

	UFUNCTION(BlueprintCallable)
	void CycleRaySocket(bool next);
	
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

	virtual void Placement(ACubeCore* core, const FName& socket) override;
	virtual void GhostPlacement() override;
	virtual float GetAttachOffset(const APickupableMaster& attachee) override;
	virtual void FindOppositeSocket();
	
	// Overriding so that it reverts back to the PickupableMaster version of "Detach"
	virtual void Detach(bool push = false) override;
};

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

	virtual void SetAttachedSocket(FName socket, const bool useDirection) override;


private:
	UPROPERTY(EditDefaultsOnly, meta = (AllowPrivateAccess = true))
	UArrowComponent* leftArrow;
	
	UPROPERTY(EditDefaultsOnly, meta = (AllowPrivateAccess = true))
	UArrowComponent* rightArrow;
	
	UPROPERTY(EditDefaultsOnly, meta = (AllowPrivateAccess = true))
	UArrowComponent* upArrow;
	
public:
	ACubeConnector();

	// The parameter is the parentCore
	virtual void ApplyOffset(const ACubeCore* core) override;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Placement() override;
	virtual void GhostPlacement() override;
	virtual void SetHideIndicator(const bool hide) override;
	virtual void SetupIndicator() override;
	virtual float GetAttachOffset(const APickupableMaster& attachee) override;
	virtual void Reattach(const FTransform& transform) override;
	
	UPROPERTY(EditDefaultsOnly)
	UArrowComponent* backArrow;
	
	UPROPERTY(EditDefaultsOnly)
	UArrowComponent* downArrow;

public:
	virtual void Tick(float DeltaSeconds) override;

	virtual EOperations SetSelected(const bool value) override;
	virtual void SetAbilityActive(bool value) override;

private:
	virtual bool SetGroupSelected(const bool value) override;
	
};

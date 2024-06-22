/**************************************************************************************************************
* Treads - Header
* 
* The header file for one of the pickupable objects.
* OVERRIDES:
*	GetAttachedOffset
*	Ability
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "Treads.generated.h"

UCLASS()
class PROJPROBLOX_API ATreads : public APickupableMaster
{
	GENERATED_BODY()

	ATreads();
	
	virtual void Ability(float deltaTime) override;
	virtual void SetAbilityActive(const bool value) override;
	virtual float GetAttachOffset(const APickupableMaster& attachee) override;

	// Unable to place the treads (only cores can attach to it)
	//virtual void Placement() override { }
	virtual void GhostPlacement() override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	UBoxComponent* driveTrigger;
	
	/////////////// Ability ///////////////

	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (Delta = .1f))
	float moveSpeed = 5000;

protected:
	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "When grounded, the ability is able to be activated... otherwise nothing will happen"))
	bool grounded;
};

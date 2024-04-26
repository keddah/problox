/**************************************************************************************************************
* Treads - Header
* 
* The header file for one of the pickupable objects.
* OVERRIDES:
*	GetAttachedOffset
*	SetAbilityActive
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

	virtual void Ability() override;
	void Drag() const;
	
	virtual float GetAttachOffset(const APickupableMaster& attachee) override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	UBoxComponent* driveTrigger;
	
	/////////////// Ability ///////////////
	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = true, ToolTip = "When grounded, the ability is able to be activated... otherwise nothing will happen"))
	bool grounded;

	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	float moveSpeed = 7500;

	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	float dragMultiplier = 3;
};

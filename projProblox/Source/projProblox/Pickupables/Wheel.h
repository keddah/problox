/**************************************************************************************************************
* Wheel - Header
* 
* The header file for one of the pickupable objects.
* OVERRIDES:
*	SetSelected
*	Detach
*	GetParent
*	Reattach
*	Ability
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Wheel.generated.h"

UCLASS()
class PROJPROBLOX_API AWheel : public APickupableMaster
{
	GENERATED_BODY()

	AWheel();

	// Just using this to get to the tick function....
	virtual void Ability(float deltaTime) override { Super::Ability(deltaTime); if(selected) RemoveVelocity(); }
	
	virtual EOperations SetSelected(const bool value) override;
	virtual void Detach(bool push = false) override;
	virtual APickupableMaster* GetParent() override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	USceneComponent* pivot;

	UPROPERTY(EditDefaultsOnly)
	UPhysicsConstraintComponent* wheelAxel;

public:
	void SetParentDominates(const bool dominate) const
	{
		if(dominate) wheelAxel->ConstraintInstance.EnableParentDominates();
		else wheelAxel->ConstraintInstance.DisableParentDominates();
	}

	void Attach(ACubeCore* core);
	virtual void Reattach(bool sound) override;
};

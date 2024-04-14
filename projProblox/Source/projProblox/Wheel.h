// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Wheel.generated.h"

/**
 * 
 */
UCLASS()
class PROJPROBLOX_API AWheel : public APickupableMaster
{
	GENERATED_BODY()

	AWheel();

	// Just using this to get to the tick function....
	virtual void Ability() override { if(selected) RemoveVelocity(); }
	
	virtual void SetSelected(const bool value) override;
	virtual void Detach() override;
	virtual APickupableMaster* GetParent() override;
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
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
};

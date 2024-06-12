// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Wheels.generated.h"

UCLASS()
class PROJPROBLOX_API AWheels : public APickupableMaster
{
	GENERATED_BODY()

	AWheels();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
	
	UPROPERTY(EditDefaultsOnly)
	UPhysicsConstraintComponent* leftAxel;

	UPROPERTY(EditDefaultsOnly)
	UPhysicsConstraintComponent* rightAxel;

	UPROPERTY(EditDefaultsOnly, meta = (ToolTip = "Used so that the transform for the wheel can be set correctly."))
	USceneComponent* leftPivot;
	
	UPROPERTY(EditDefaultsOnly, meta = (ToolTip = "Used so that the transform for the wheel can be set correctly."))
	USceneComponent* rightPivot;
	
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* leftWheel;
	
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* rightWheel;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (ToolTip = "The maximum both wheels are allowed to go up/down"))
	float suspensionDistance = 25;

	// Just using this to get to the tick function....
	virtual void Ability(float deltaTime) override { if(selected) RemoveVelocity(); }

	virtual EOperations SetSelected(const bool value) override;
	virtual void Detach(bool push = false) override;
	virtual void Reattach(bool sound) override;
	virtual void GhostPlacement() override;
	virtual float GetAttachOffset(const APickupableMaster& attachee) override;
	
	virtual void ToggleGravity() const override;
	virtual void ToggleGravity(bool gravityOn) override;
	virtual void RemoveVelocity() const override;

	void SetupAttachments() const;
	void SetConstraintsActive(const bool constrained) const
	{
		// Need to deactivate first before disabling physics
		leftAxel->SetActive(constrained);
		rightAxel->SetActive(constrained);
		leftWheel->SetSimulatePhysics(constrained);
		rightWheel->SetSimulatePhysics(constrained);
	}

public:
	void SetParentDominates(const bool dominate) const
	{
		if(dominate)
		{
			leftAxel->ConstraintInstance.EnableParentDominates();
			rightAxel->ConstraintInstance.EnableParentDominates();
		}
		else
		{
			leftAxel->ConstraintInstance.DisableParentDominates();
			rightAxel->ConstraintInstance.DisableParentDominates();
		}
	}

	void Attach() const;
};

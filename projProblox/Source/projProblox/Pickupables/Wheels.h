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
	
	UPROPERTY(EditDefaultsOnly, meta = (ToolTip = "Used to attach cores to this wheel platform."))
	UPhysicsConstraintComponent* coreConstraint;

	UPROPERTY(EditDefaultsOnly)
	UPhysicsConstraintComponent* leftAxel;

	UPROPERTY(EditDefaultsOnly)
	UPhysicsConstraintComponent* rightAxel;

	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* leftWheel;
	
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* rightWheel;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (ToolTip = "The maximum both wheels are allowed to go up/down"))
	float suspensionDistance = 25;

	// Just using this to get to the tick function....
	virtual void Ability(float deltaTime) override { if(selected) RemoveVelocity(); }

	virtual EOperations SetSelected(const bool value) override;
	virtual void Detach() override;
	virtual void Reattach(const FTransform& transform) override;
	
	virtual void ToggleGravity() const override;
	virtual void RemoveVelocity() const override;

	void SetupAttachments() const;
	void SetConstraintsActive(const bool constrained) const { leftAxel->SetActive(constrained); rightAxel->SetActive(constrained); coreConstraint->SetActive(constrained); }
	
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

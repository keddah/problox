// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Spring.generated.h"

UCLASS()
class PROJPROBLOX_API ASpring : public APickupableMaster
{
	GENERATED_BODY()
	ASpring();
	virtual void BeginPlay() override { Super::BeginPlay(); wrld = GetWorld(); }
	
	virtual void Ability(float deltaTime) override;
	virtual void ToggleGravity() const override;
	virtual void ToggleGravity(bool gravityOn) override;
	virtual void RemoveVelocity() const override;
	
	void Attach();
	void SetParentDominates(const bool dominate) const
	{
		if(dominate) springConstraint->ConstraintInstance.EnableParentDominates();
		else springConstraint->ConstraintInstance.DisableParentDominates();
	}

	
	UPROPERTY(EditDefaultsOnly)
	UPhysicsConstraintComponent* springConstraint;

	UWorld* wrld;
	bool contracting;

	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	float compressionAmount = 1500;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	float springConstant = 2;

	float GetSpringEnergy(const FVector& startPos, const FVector& endPos) const;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* springEnd;
};

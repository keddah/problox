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
	virtual EOperations SetSelected(const bool value) override;

	void Attach();

	UPROPERTY(EditDefaultsOnly)
	UPhysicsConstraintComponent* spring;

	UWorld* wrld;
	bool contracting;

	UPROPERTY(EditDefaultsOnly)
	float springConstant = 2;

	float GetSpringEnergy(const FVector& start, const FVector& end) const;

	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* springEnd;
};

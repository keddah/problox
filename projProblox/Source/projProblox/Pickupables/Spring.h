// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "Spring.generated.h"

UCLASS()
class PROJPROBLOX_API ASpring : public APickupableMaster
{
	GENERATED_BODY()
	ASpring();
	
	virtual void Ability(float deltaTime) override;

	virtual void BeginPlay() override { Super::BeginPlay(); wrld = GetWorld(); }


	UWorld* wrld;
	bool contracting;

	UPROPERTY(EditDefaultsOnly)
	float springConstant = 2;

	float GetSpringEnergy(const FVector& start, const FVector& end) const;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* springStart;
	
	UPROPERTY(BlueprintReadOnly)
	FVector splineStart;
	
	UPROPERTY(BlueprintReadOnly)
	FVector splineEnd;
};

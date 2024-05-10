// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "Balloon.generated.h"

/**
 * 
 */
UCLASS()
class PROJPROBLOX_API ABalloon : public APickupableMaster
{
	GENERATED_BODY()

	virtual void BeginPlay() override { Super::BeginPlay(); wrld = GetWorld(); }
	virtual void Tick(float DeltaSeconds) override;

	UWorld* wrld;

	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (Delta = .1f, ToolTip = "How far the flatHead should extend from the piston shaft."))
	float floatiness = 67;
};

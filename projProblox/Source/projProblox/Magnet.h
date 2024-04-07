// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "Magnet.generated.h"

/**
 * 
 */
UCLASS()
class PROJPROBLOX_API AMagnet : public APickupableMaster
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Magnet")
	bool positive;

	bool magAttached;
	
	UPROPERTY(EditDefaultsOnly)
	UMaterialInstance* positiveMat;
	
	UPROPERTY(EditDefaultsOnly)
	UMaterialInstance* negativeMat;

	UPROPERTY(EditDefaultsOnly)
	float attractionForce = 30;

	TArray<AMagnet*> otherMagnets;

public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
	virtual void Ability() override;
};

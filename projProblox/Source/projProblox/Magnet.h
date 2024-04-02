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

	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere)
	bool positive;

	UPROPERTY(EditDefaultsOnly)
	UMaterialInstance* positiveMat;
	
	UPROPERTY(EditDefaultsOnly)
	UMaterialInstance* negativeMat;

	UPROPERTY(EditDefaultsOnly)
	float attractionForce = 30;
	
	virtual void Ability() override;

private:
	TArray<AMagnet*> otherMagnets;
};

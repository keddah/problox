/**************************************************************************************************************
* Magnet - Header
* 
* The header file for one of the pickupable objects.
* OVERRIDES:
*	Ability
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "Magnet.generated.h"

UCLASS()
class PROJPROBLOX_API AMagnet : public APickupableMaster
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	UMaterialInstance* positiveMat;
	
	UPROPERTY(EditDefaultsOnly)
	UMaterialInstance* negativeMat;

	UPROPERTY(EditAnywhere, Category = "Ability")
	bool positive;

	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (Delta = 1))
	float attractionForce = 30;

	bool magAttached;

	TArray<AMagnet*> otherMagnets;

public:
	virtual void Tick(float DeltaSeconds) override;
	
protected:
	virtual void BeginPlay() override;
	virtual void Ability(float deltaTime) override;
};

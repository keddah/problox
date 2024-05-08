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
#include "MagPole.h"
#include "./projProblox/Pickupables/PickupableMaster.h"
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
	float attractionForce = 15;

	bool magAttached;

	TArray<AMagnet*> otherMagnets;
	TArray<AMagPole*> poles;

	void ConfigureCharge() const { objMesh->SetMaterial(0, positive? positiveMat : negativeMat); }
	void AddMagnet(AMagnet* mag) { otherMagnets.AddUnique(mag); }
	
public:
	UFUNCTION(BlueprintCallable)
	void SetCharge(const bool pos) { positive = pos; ConfigureCharge(); }
	float GetAttraction() const { return attractionForce; } 
	
protected:
	virtual void BeginPlay() override;
	virtual void Ability(float deltaTime) override;
};

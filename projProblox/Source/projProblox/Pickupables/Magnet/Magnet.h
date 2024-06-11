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
#include "./projProblox/Pickupables/PickupableMaster.h"
#include "Magnet.generated.h"

class AMagPole;

UCLASS()
class PROJPROBLOX_API AMagnet : public APickupableMaster	
{
	GENERATED_BODY()

	AMagnet() { uiName = "Magnet"; }
	
	UPROPERTY(EditDefaultsOnly)
	UMaterialInstance* positiveMat;
	
	UPROPERTY(EditDefaultsOnly)
	UMaterialInstance* negativeMat;

	UPROPERTY(EditAnywhere, Category = "Ability")
	bool positive;

	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (Delta = 1))
	float attractionForce = 15;

	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (Delta = 1))
	float fieldRange = 1500000;

	bool magAttached;

	TArray<AMagnet*> otherMagnets;
	TArray<AMagPole*> poles;

	void ConfigureCharge() const { mesh->SetMaterial(0, positive? positiveMat : negativeMat); }
	void AddMagnet(AMagnet* mag) { otherMagnets.AddUnique(mag); }
	
public:
	UFUNCTION(BlueprintCallable)
	void SetCharge(const bool pos) { positive = pos; ConfigureCharge(); }

	UFUNCTION(BlueprintCallable)
	bool GetIsPositive() const { return positive; }

	float GetAttraction() const { return attractionForce; }

	// For when a new magpole is created in creative mode...
	void AddMagPole(AMagPole* newPole) { poles.AddUnique(newPole); }
	
protected:
	virtual void BeginPlay() override;
	virtual void Ability(float deltaTime) override;
};

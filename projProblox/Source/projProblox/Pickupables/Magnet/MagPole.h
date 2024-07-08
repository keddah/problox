/**************************************************************************************************************
* Mag Pole - Header
* 
* The header file for one of the mag pole class. Imitates the pickupable's Magnet except will be used for stationary objects (can't be attached).
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "Magnet.h"
#include "GameFramework/Actor.h"
#include "MagPole.generated.h"

UCLASS()
class PROJPROBLOX_API AMagPole : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	UMaterialInstance* positiveMat;
	
	UPROPERTY(EditDefaultsOnly)
	UMaterialInstance* negativeMat;
	
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* mesh;
	
	void ConfigureCharge() { mesh->SetMaterial(0, positive? positiveMat : negativeMat); UpdateMagnets(); }

	UPROPERTY(EditInstanceOnly)
	bool positive = true;
	
	UPROPERTY(EditInstanceOnly, Category = "Ability", meta = (Delta = 1, ToolTip = "Putting this value too high will cause the magnets that are attracted to it to get destroyed..."))
	float attractionForce = 2500;

	void UpdateMagnets();
	
public:	
	// Sets default values for this actor's properties
	AMagPole();

	// true = positive
	bool GetPositiveCharge() const { return positive; }
	float GetAttraction() const { return attractionForce * 1000; } 
	FVector GetMagPosition(const AMagnet* mag) const
	{
		FVector out;
		mesh->GetClosestPointOnCollision(mag->GetActorLocation(), out);
		return out;
	}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override { ConfigureCharge(); Super::BeginPlay(); }
};

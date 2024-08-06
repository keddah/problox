/**************************************************************************************************************
* Mag Pole - Header
* 
* The header file for the stationary magnet class. These magnets will be placed in levels so that the pickupable magnets can be attracted to them.
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
	UStaticMeshComponent* mesh;
	
	UPROPERTY(EditInstanceOnly)
	bool positive = true;
	
	UPROPERTY(EditInstanceOnly, Category = "Ability", meta = (Delta = 1, ToolTip = "Putting this value too high will cause the magnets that are attracted to it to get destroyed..."))
	unsigned int attractionForce = 2500;

	void UpdateMagnets();
	
public:	
	// Sets default values for this actor's properties
	AMagPole();

	// true = positive
	bool GetPositiveCharge() const { return positive; }
	float GetAttraction() const { return attractionForce * 1000; } 
	FVector GetMagPosition(const AMagnet* mag) const
	{
		if(!IsValid(mag)) return {};
		if(!IsValid(mesh)) return {};
		
		FVector out;
		mesh->GetClosestPointOnCollision(mag->GetActorLocation(), out);
		return out;
	}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override { Super::BeginPlay(); UpdateMagnets(); }
};

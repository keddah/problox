// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "CableComponent.h"
#include "CubeCore.h"
#include "GrappleHead.h"
#include "Grappler.generated.h"

/**
 * 
 */
UCLASS()
class PROJPROBLOX_API AGrappler : public APickupableMaster
{
	GENERATED_BODY()
	AGrappler();

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* grappleSpawn;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UCableComponent* grappleLine;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<AActor> grappleHeadClass;
	
private:
	virtual void Ability() override;

	AGrappleHead* hook;

public:
	void Pull(const FVector& direction, const float speed) const { if(IsValid(objCore)) objCore->Movement(direction, speed); }
};

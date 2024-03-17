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

	virtual void SetSelected(const bool value) override;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* grappleSpawn;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UCableComponent* grappleLine;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<AActor> grappleHeadClass;

	UPROPERTY(BlueprintReadWrite)
	AGrappleHead* hook;

	UFUNCTION(BlueprintCallable)
	void SetupLine() { grappleLine->CableLength = 2500; if(hook) grappleLine->SetAttachEndToComponent(hook->GetMesh()); }
	
private:
	virtual void Ability() override;


public:
	UFUNCTION(BlueprintCallable)
	void Pull(const FVector& direction, const float speed) { if(IsValid(objCore)) objCore->Movement(direction, speed); }

	UFUNCTION(BlueprintPure)
	FVector GetSpawnLocation() const { return grappleSpawn->GetComponentLocation(); }

	UFUNCTION(BlueprintCallable)
	FVector GetLaunchDir() const { return grappleSpawn->GetForwardVector(); }
};

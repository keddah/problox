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

	// If this is called whilst the hook is valid, destroy the hook (this means pressing the ability button after the grapple has been launched destroy the grapple).  
	virtual void SetAbilityActive(const bool value) override { Super::SetAbilityActive(value); if(IsValid(hook) && !active) hook->Destroy(); };
	virtual void Ability() override;
	virtual void SetSelected(const bool value) override;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* grappleSpawn;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UCableComponent* grappleLine;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<AActor> grappleHeadClass;

	AGrappleHead* hook;

	void SetupLine() const { grappleLine->CableLength = 2500; if(hook) grappleLine->SetAttachEndToComponent(hook->GetMesh()); }

public:
	UFUNCTION(BlueprintCallable, Category = "Ability")
	void Pull(const FVector& direction, const float speed) { if(IsValid(objCore)) objCore->Movement(direction, speed); }

	UFUNCTION(BlueprintPure, Category = "Getters")
	FVector GetSpawnLocation() const { return grappleSpawn->GetComponentLocation(); }
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GrappleHead.generated.h"

class AGrappler;

UCLASS()
class PROJPROBLOX_API AGrappleHead : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrappleHead();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* mesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USphereComponent* collider;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float launchForce = 3;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ability", BlueprintReadOnly)
	float pullSpeed = 9;

	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	float cancelDistance;
	
public:	
	UStaticMeshComponent* GetMesh() const { return mesh; }
};

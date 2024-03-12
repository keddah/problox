// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
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
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* scene;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* mesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USphereComponent* collider;

	UPROPERTY(BlueprintReadWrite)
	AGrappler* parent;
	
	UPROPERTY(BlueprintReadWrite)
	float launchForce = 3;
	
	UPROPERTY(BlueprintReadWrite)
	float pullSpeed = 12;

	UPROPERTY(BlueprintReadWrite)
	bool canPull;

	UPROPERTY(BlueprintReadWrite)
	bool shouldPull;

	UPROPERTY(EditDefaultsOnly)
	float cancelDistance;
	
public:	
	void SetParent(AGrappler* grappler) { parent = grappler; }

	UStaticMeshComponent* GetMesh() const { return mesh; }

};

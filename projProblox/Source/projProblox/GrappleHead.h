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
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* scene;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* mesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USphereComponent* collider;

	UPROPERTY(BlueprintReadWrite)
	UProjectileMovementComponent* projMovement;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	AGrappler* parent;
	
	UPROPERTY(BlueprintReadWrite)
	float launchForce = 3;
	
	UPROPERTY(BlueprintReadWrite)
	float pullSpeed = 12;

	UPROPERTY(BlueprintReadWrite)
	bool canPull;

	bool shouldPull;

	UPROPERTY(EditDefaultsOnly)
	float cancelDistance;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetParent(AGrappler* grappler) { parent = grappler; }

private:
	void Pull();

};

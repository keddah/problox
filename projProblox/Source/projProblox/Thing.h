// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CubeCore.h"
#include "GameFramework/Actor.h"
#include "Thing.generated.h"

UCLASS()
class PROJPROBLOX_API AThing : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AThing();

	UFUNCTION(BlueprintCallable)
	void Teleport(const FVector& pos)
	{
		SetActorLocation(pos);
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Cyan, FString::FromInt(pos.X) + ", " + FString::FromInt(pos.Y) + ", " + FString::FromInt(pos.Z));
	}
	
	UFUNCTION(BlueprintCallable)
	void SetHoming(const bool home) { isHoming = home;}
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
    UStaticMeshComponent* head;
	
	UPROPERTY(EditDefaultsOnly)
    UStaticMeshComponent* body;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	ACubeCore* core;
	
	float moveSpeed = 8;
	FVector goal;
	bool isHoming;
	
	void Drag() const;
	void GoHome() const;
};


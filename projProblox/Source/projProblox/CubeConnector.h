// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CubeCore.h"
#include "CubeConnector.generated.h"

/**
 * 
 */
UCLASS()
class PROJPROBLOX_API ACubeConnector : public ACubeCore
{
	GENERATED_BODY()

	virtual void SetAttachedSocket(FName socket, const bool useDirection) override;
	
public:
	ACubeConnector();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaSeconds) override;

	virtual void SetSelected(const bool value) override;
	virtual void SetAbilityActive(bool value) override;

private:
	virtual void Placement() override;
	virtual void Detach() override;

	FName raySocket;
};

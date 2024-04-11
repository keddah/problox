// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CubeCore.h"
#include "CubeConnector.generated.h"

/**
 * //
 */
UCLASS()
class PROJPROBLOX_API ACubeConnector : public ACubeCore
{
	GENERATED_BODY()

	virtual void SetAttachedSocket(FName socket, const bool useDirection) override;
	
public:
	ACubeConnector();

	// The parameter is the parentCore
	virtual void ApplyOffset(const ACubeCore* core) override;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Placement() override;
	virtual void GhostPlacement() override;
	virtual void SetHideIndicator(const bool hide) override;
	virtual void SetupIndicator() override;
	virtual float GetAttachOffset(const APickupableMaster& attachee) override;
	
	UPROPERTY(EditDefaultsOnly)
	UArrowComponent* backArrow;
	
	UPROPERTY(EditDefaultsOnly)
	UArrowComponent* leftArrow;
	
	UPROPERTY(EditDefaultsOnly)
	UArrowComponent* rightArrow;
	
	UPROPERTY(EditDefaultsOnly)
	UArrowComponent* upArrow;
	
	UPROPERTY(EditDefaultsOnly)
	UArrowComponent* downArrow;
	
	// The socket that the placement ray from this object is firing from
	FName raySocket;
	
	FName tempSocket;

public:
	virtual void Tick(float DeltaSeconds) override;

	virtual void SetSelected(const bool value) override;
	virtual void SetAbilityActive(bool value) override;

private:
	virtual bool SetGroupSelected(const bool value) override;
	
};

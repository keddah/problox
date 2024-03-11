// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "Engine/DataAsset.h"
#include "CubeSocketInfo.generated.h"

/**
 * 
 */
UCLASS()
class PROJPROBLOX_API UCubeSocketInfo : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleDefaultsOnly)
	TArray<FName> sockets { "FRONT", "BACK", "LEFT", "RIGHT", "UP", "DOWN"};

	UPROPERTY(VisibleDefaultsOnly, meta = (ArrayClamp = "sockets"))
	TArray<APickupableMaster*> socketObjects { 0, 0, 0, 0, 0, 0 };

	UFUNCTION(BlueprintCallable)
	bool ObjectInSocket(const FName& socket) const;
	bool ObjectInSocket(int index) const;

	UFUNCTION(BlueprintCallable)
	void AddAttachment(APickupableMaster* attachment, FName socket);

	UFUNCTION(BlueprintCallable)
	void RemoveAttachment(FName socket);

	UFUNCTION(BlueprintCallable)
	TArray<AActor*> GetAttachmentActors() const;

	UFUNCTION(BlueprintCallable)
	TArray<APickupableMaster*> GetAttachments() const;

protected:
};

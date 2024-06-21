// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "Engine/DataAsset.h"
#include "BuyableInfo.generated.h"

USTRUCT(BlueprintType)
struct FBuyableInfoStruct
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(VisibleAnywhere)
	FString name;

	UPROPERTY(VisibleAnywhere)
	FString description;

	UPROPERTY(VisibleAnywhere)
	int price;

	UPROPERTY(VisibleAnywhere)
	UStaticMesh* attachmentMesh;
	UPROPERTY(VisibleAnywhere)
	TArray<UMaterial*> attachmentMats;

	UPROPERTY(VisibleAnywhere)
	FVector defaultScale;

	UPROPERTY(VisibleAnywhere)
	TSubclassOf<APickupableMaster> classToSpawn;
};

UCLASS(BlueprintType)
class PROJPROBLOX_API UBuyableInfo : public UDataAsset
{
	GENERATED_BODY()

	UBuyableInfo();
	
	UPROPERTY(EditAnywhere)
	FString name = "No description given...";
	
	UPROPERTY(EditAnywhere)
	UStaticMesh* attachmentMesh;
	UPROPERTY(EditAnywhere)
	TArray<UMaterial*> attachmentMats;

	UPROPERTY(EditAnywhere)
	FString description = "No description given...";

	UPROPERTY(EditAnywhere)
	int price = 100;

	UPROPERTY(EditAnywhere)
	FVector defaultScale {1,1,1};

	UPROPERTY(EditAnywhere)
	TSubclassOf<APickupableMaster> classToSpawn;

public:
	FBuyableInfoStruct GetInfo() const { return {name, description, price, attachmentMesh, attachmentMats, defaultScale, classToSpawn }; }
};

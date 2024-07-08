/**************************************************************************************************************
* Buyable's Information - Header
* 
* The header file for the buyable information data asset. Defines a struct to make these easier to manage.
* 
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "Engine/DataAsset.h"
#include "BuyableInfo.generated.h"

USTRUCT(BlueprintType)
struct FBuyableInfoStruct
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FString name;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FString description;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int price = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMesh* attachmentMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<UMaterial*> attachmentMats;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool editScale = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector defaultScale = { 1,1,1 };

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TSubclassOf<APickupableMaster> classToSpawn;
};

UCLASS(BlueprintType)
class PROJPROBLOX_API UBuyableInfo : public UDataAsset
{
	GENERATED_BODY()

	UBuyableInfo() { name = GetName(); }
	
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
	bool editScale;

	UPROPERTY(EditAnywhere)
	FVector defaultScale {1,1,1};

	UPROPERTY(EditAnywhere)
	TSubclassOf<APickupableMaster> classToSpawn;

public:
	FBuyableInfoStruct GetInfo() const { return {name, description, price, attachmentMesh, attachmentMats, editScale, defaultScale, classToSpawn }; }
};

// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuyableInfo.h"
#include "Components/BoxComponent.h"
#include "Components/WidgetComponent.h"
#include "BuyableAttachment.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBoughtAttachment);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShowDisplay, const ABuyableAttachment*, checker);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHideDisplay, const ABuyableAttachment*, checker);

#define Print(x, duration) { GEngine->AddOnScreenDebugMessage(-1, duration, FColor::Cyan, x); }

UCLASS()
class PROJPROBLOX_API ABuyableAttachment : public AActor
{
	GENERATED_BODY()
	
	ABuyableAttachment();

	// Obtains the mesh and material from this buyable info and applies it to the static mesh comp 
	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Call this in the construction script so that changes are updated whenever they need to be."))
	void UseInfoMesh();

	void SetHide(const bool hide) const;

	// bool unlocked;
	bool selected;
	
	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* mouseDetector;
	
	// UPROPERTY(EditDefaultsOnly)
	// UMaterial* lockedMaterial;

	UPROPERTY(EditAnywhere)
	UBuyableInfo* info;
	
	UPROPERTY(EditDefaultsOnly)
	UMaterialInterface* hoverMaterial;

	UPROPERTY(EditDefaultsOnly)
	UMaterialInterface* selectedMaterial;
	
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* outlineMesh;


protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* meshComp;


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UWidgetComponent* infoWidget;
	
public:
	void SetSelected(const bool value);
	
	// void UnlockAttachment();
	FOnBoughtAttachment onBoughtAttachment;

	UPROPERTY(BlueprintAssignable)
	FOnShowDisplay onShow;
	UPROPERTY(BlueprintAssignable)
	FOnHideDisplay onHide;

	UFUNCTION(BlueprintCallable)
	FBuyableInfoStruct GetInfo() const { return info->GetInfo(); }

	void ShowDescription() const { onShow.Broadcast(this); outlineMesh->SetHiddenInGame(false); }
	void HideDescription() const { onHide.Broadcast(this); if(!selected) outlineMesh->SetHiddenInGame(true);}

	// UFUNCTION(BlueprintCallable)
	// bool IsUnlocked() const { return unlocked; }
};

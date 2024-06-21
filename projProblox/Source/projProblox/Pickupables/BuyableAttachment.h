// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuyableInfo.h"
#include "Components/BoxComponent.h"
#include "BuyableAttachment.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBoughtAttachment);

#define Print(x, duration) { GEngine->AddOnScreenDebugMessage(-1, duration, FColor::Cyan, x); }

UCLASS()
class PROJPROBLOX_API ABuyableAttachment : public AActor
{
	GENERATED_BODY()
	
	ABuyableAttachment();

	// Obtains the mesh and material from this buyable info and applies it to the static mesh comp 
	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Call this in the construction script so that changes are updated whenever they need to be."))
	void UseInfoMesh();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* meshComp;

	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* mouseDetector;
	
	UPROPERTY(EditAnywhere)
	UBuyableInfo* info;

	UPROPERTY(EditDefaultsOnly)
	UMaterial* lockedMaterial;
	
	bool unlocked;
	
public:
	void UnlockAttachment();
	FOnBoughtAttachment onBoughtAttachment;
};

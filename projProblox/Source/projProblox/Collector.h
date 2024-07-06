/**************************************************************************************************************
* Collector - Header
* 
* The header file for the cell collector. Defines all the components that this blueprint will need.
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "PlayerCharacter.h"
#include "Components/PointLightComponent.h"
#include "GameFramework/Actor.h"
#include "Collector.generated.h"

UCLASS()
class PROJPROBLOX_API ACollector : public AActor
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
	void CalculateCellCount();

	
public:	
	// Sets default values for this actor's properties
	ACollector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/////////////// Components ///////////////
	UPROPERTY(EditDefaultsOnly)
	USceneComponent* scene;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* depoPoint;
	
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* tube;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* lid;

	UPROPERTY(EditDefaultsOnly)
	UPointLightComponent* light;


	/////////////// Cells ///////////////
	UPROPERTY(BlueprintReadWrite)
	int32 cellsInLevel;

	UPROPERTY(BlueprintReadOnly)
	int32 cellCount;

	/////////////// Other ///////////////
	UPROPERTY(BlueprintReadOnly)
	APlayerCharacter* player;

	
public:	
	UFUNCTION(BlueprintCallable)
	FVector GetCollectPoint() const { return depoPoint->GetComponentLocation(); }

	UFUNCTION(BlueprintCallable)
	void AddThing() { cellCount++; }

	UFUNCTION(BlueprintCallable)
	int GetLevelCellCount(ELevel lvl) const;

	UFUNCTION(BlueprintCallable)
	int GetCollectedCountInLvl(ELevel lvl) const;
};

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
#include "SpawnPoint.h"
#include "Components/PointLightComponent.h"
#include "GameFramework/Actor.h"
#include "Collector.generated.h"

UCLASS()
class PROJPROBLOX_API ACollector : public AActor
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
	void CalculateCellCount();

	int GetLvlCellCount(const ELevel& lvl) const;
	int GetCollectedCountFromLvl(const ELevel& lvl) const;
	
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
	int GetLevel1Count() const { return GetLvlCellCount(ELevel::Bedroom); }
	UFUNCTION(BlueprintCallable)
	int GetLevel2Count() const { return GetLvlCellCount(ELevel::Kitchen); }
	UFUNCTION(BlueprintCallable)
	int GetLevel3Count() const { return GetLvlCellCount(ELevel::Bathroom); }

	UFUNCTION(BlueprintCallable)
	int GetLevel1Collected() const { return GetCollectedCountFromLvl(ELevel::Bedroom); }
	UFUNCTION(BlueprintCallable)
	int GetLevel2Collected() const { return GetCollectedCountFromLvl(ELevel::Kitchen); }
	UFUNCTION(BlueprintCallable)
	int GetLevel3Collected() const { return GetCollectedCountFromLvl(ELevel::Bathroom); }
	
	UFUNCTION(BlueprintCallable)
	FVector GetCollectPoint() const { return depoPoint->GetComponentLocation(); }

	UFUNCTION(BlueprintCallable)
	void AddThing() { cellCount++; }
};

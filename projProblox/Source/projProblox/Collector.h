// Created by Dean Atkinson-Walker 2024

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
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ToolTip = "Minimum percentage the player has to get in order to win.", Delta = .01f, ClampMin = .25f, ClampMax = .95f))
	float minPercentage;

	UPROPERTY(BlueprintReadWrite)
	int32 cellsInLevel;

	UPROPERTY(BlueprintReadOnly)
	int32 cellCount;

	
	/////////////// Other ///////////////
	UPROPERTY(BlueprintReadOnly)
	APlayerCharacter* player;

	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	FVector GetCollectPoint() const { return depoPoint->GetComponentLocation(); }

	UFUNCTION(BlueprintCallable)
	void AddThing() { cellCount++; }
	
};

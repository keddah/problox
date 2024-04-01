// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "Thing.h"
#include "GameFramework/Actor.h"
#include "ThingSpawner.generated.h"

UCLASS()
class PROJPROBLOX_API AThingSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AThingSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AThing> thingClass;
	
	UPROPERTY(EditAnywhere, meta = (EditInlineNew, ToolTip = "Index corresponds with the index of the spawn locations..."))
	int32 spawnAmounts = 10;

public:	
	void Spawn() const;
	
};

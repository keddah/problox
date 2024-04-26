// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "Thing.h"
#include "GameFramework/Actor.h"
#include "ThingSpawner.generated.h"


UENUM(BlueprintType)
enum class EThingType : uint8
{
	Normal,
	Bouncy,
	Slippery,
	Hover,
	Sticky
};


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
	TSubclassOf<AThing> normalThing;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AThing> bouncyThing;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AThing> slipperyThing;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AThing> hoverThing;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AThing> stickyThing;
	
	UPROPERTY(EditInstanceOnly, meta = (EditInlineNew, ToolTip = "The type of thing to spawn."))
	EThingType thingType = EThingType::Normal;
	
	UPROPERTY(EditInstanceOnly, meta = (EditInlineNew, ToolTip = "Index corresponds with the index of the spawn locations..."))
	int32 spawnAmounts = 10;

public:	
	void BeginSpawn() const;
	void Spawn(UWorld* wrld, const FVector& spawn, const FRotator& rot, const FActorSpawnParameters& params) const;
};
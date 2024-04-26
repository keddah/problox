/**************************************************************************************************************
* Cell Spawner - Header
* 
* The header file for a spawner that creates cells. This file also declares an enum for the type of cells to spawn.
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "Cell.h"
#include "GameFramework/Actor.h"
#include "CellSpawner.generated.h"


UENUM(BlueprintType)
enum class ECellType : uint8
{
	Normal,
	Bouncy,
	Slippery,
	Hover,
	Sticky
};


UCLASS()
class PROJPROBLOX_API ACellSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACellSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ACell> normalThing;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ACell> bouncyThing;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ACell> slipperyThing;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ACell> hoverThing;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ACell> stickyThing;
	
	UPROPERTY(EditInstanceOnly, meta = (EditInlineNew, ToolTip = "The type of thing to spawn."))
	ECellType thingType = ECellType::Normal;
	
	UPROPERTY(EditInstanceOnly, meta = (EditInlineNew, ToolTip = "Index corresponds with the index of the spawn locations..."))
	int32 spawnAmount = 10;

public:	
	void BeginSpawn() const;
	void Spawn(UWorld* wrld, const FVector& spawn, const FRotator& rot, const FActorSpawnParameters& params) const;
};
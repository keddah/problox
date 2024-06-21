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
#include "Engine/LevelStreamingDynamic.h"
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

	bool active;

	UFUNCTION(BlueprintCallable)
	virtual void Overlap(AActor* otherActor);

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
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* scene;

	UPROPERTY(EditDefaultsOnly, meta = (ToolTip = "If the relative location is 0, this has no affect."))
	UBoxComponent* spawnTrigger;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UArrowComponent* forceDirection;
	
	UPROPERTY(EditInstanceOnly, meta = (EditInlineNew, ToolTip = "The initial number of cells that will spawn from this..."))
	int32 spawnAmount = 1;

	UPROPERTY(EditAnywhere, meta = (EditInlineNew, ToolTip = "The maximum amount of cells that can spawn from this spawner..."))
	int32 maxSpawnAmount = 50;

	UPROPERTY(EditAnywhere, meta = (EditInlineNew, ClampMax = 1000000, ToolTip = "The radius around the position of this actor that cells are allowed to spawn in (setting to means they spawn directly on the actor)."))
	unsigned int spawnRadius = 50;

	UPROPERTY(EditAnywhere, meta = (EditInlineNew, ClampMax = 1000000, ToolTip = "The radius around the position of this actor that cells are allowed to spawn in (setting to means they spawn directly on the actor)."))
	unsigned int coneRadius = 20;

	UPROPERTY(EditAnywhere, meta = (EditInlineNew, ToolTip = "This only applies when cells are spawned using the triggers."))
	float spawnForce = 2000;

	UWorld* wrld;

	UPROPERTY(EditInstanceOnly)
	bool triggerable;
	
	ACell* Spawn(const FVector& spawn, const FRotator& rot, const FActorSpawnParameters& params) const;

	
public:
	void Init(ACubeCore* core);
	
	UFUNCTION(BlueprintCallable)
	bool IsActive() const { return active; }

	UFUNCTION(BlueprintCallable)
	void Activate() { active = true; }
	
	UFUNCTION(BlueprintCallable)
	void BeginSpawn();

	void SpawnWithForce();

	int GetSpawnAmount() const { return spawnAmount; }
	
	void IncreaseSpawnCount(unsigned short additions)
	{
		spawnAmount += additions;
		spawnAmount = FMath::Clamp(spawnAmount, 1, maxSpawnAmount);
	}
	
};
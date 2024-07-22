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
#include "projProblox/LevelObjective.h"
#include "CellSpawner.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpawnTriggered, ACellSpawner*, triggeredSpawner);

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

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
	/////////////////////////// VARIABLES ///////////////////////////
	/////////// COMPONENTS ///////////
	UPROPERTY(EditDefaultsOnly, meta = (ToolTip = "If the relative location is 0, this has no affect."))
	UBoxComponent* spawnTrigger;

	UPROPERTY(EditDefaultsOnly, Category = "Sound", meta = (ToolTip = "The sound will play at the location of this sound player..."))
	UAudioComponent* soundPlayer;

	
	/////////// SOUND ///////////
	UPROPERTY(EditInstanceOnly, Category = "Sound")
	USoundWave* soundToPlay;

	UPROPERTY(EditInstanceOnly, Category = "Sound", meta = (Delta = .5f, ToolTip = "Setting to 0 means the sound plays instantly"))
	float soundDelay = 0;

	UPROPERTY(EditInstanceOnly, Category = "Sound")
	bool loopingSound = false;


	/////////// CELL CLASSES ///////////
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ACell> normalCell;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ACell> bouncyThing;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ACell> slipperyCell;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ACell> hoverCell;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ACell> stickyCell;
	
	UPROPERTY(EditInstanceOnly, meta = (EditInlineNew, ToolTip = "The type of thing to spawn."))
	ECellType cellType = ECellType::Normal;

	
	/////////// EDITABLE PROPERTIES ///////////
	UPROPERTY(EditInstanceOnly, Category = "Objective")
	ULevelObjective* objective;

	UPROPERTY(EditInstanceOnly, Category = "Level Assignment", meta = (EditInlineNew, ToolTip = "The type of thing to spawn."))
	ELevel level;
	
	UPROPERTY(EditInstanceOnly, Category = "Spawn Properties|Amount", meta = (EditInlineNew, ToolTip = "The initial number of cells that will spawn from this..."))
	unsigned int spawnAmount = 1;
	
	UPROPERTY(EditInstanceOnly, Category = "Spawn Properties|Activation", meta = (EditInlineNew, ToolTip = "Whether to spawn the cells as soon as the level is loaded"))
	bool previewed = true;
		
	UPROPERTY(EditInstanceOnly, Category = "Spawn Properties|Amount", meta = (EditInlineNew, ToolTip = "The maximum amount of cells that can spawn from this spawner..."))
	unsigned int maxSpawnAmount = 50;

	UPROPERTY(EditInstanceOnly, Category = "Spawn Properties|Force", meta = (EditInlineNew, ClampMax = 1000000, ToolTip = "The radius around the position of this actor that cells are allowed to spawn in (setting to means they spawn directly on the actor)."))
	unsigned int spawnRadius = 50;

	UPROPERTY(EditInstanceOnly, Category = "Spawn Properties|Force", meta = (EditInlineNew, ClampMax = 1000000, ToolTip = "The radius around the position of this actor that cells are allowed to spawn in (setting to means they spawn directly on the actor)."))
	unsigned int coneRadius = 20;

	UPROPERTY(EditInstanceOnly, Category = "Spawn Properties|Force", meta = (EditInlineNew, ToolTip = "This only applies when cells are spawned using the triggers."))
	int spawnForce = 2000;

	UPROPERTY(EditInstanceOnly, Category = "Spawn Properties|Activation", meta = (ToolTip = "Whether to spawn cells on collision rather than when the game starts..."))
	bool triggerable;


	/////////// OTHER ///////////
	UWorld* wrld;
	const ULevelStreamingDynamic* buildLevel;
	
	TArray<ACell*> spawnedCells;
	
	bool spawned = false;
	int collectedCount = 0;
	
	// Returns whether the overlap caused a spawn
	UFUNCTION(BlueprintCallable)
	bool Overlap(AActor* otherActor);

	void PlaySound() const;

	// Returns the spawned cell.
	ACell* Spawn(const FVector& spawn, const FRotator& rot) const;

	// Spawn parameters
	FActorSpawnParameters params;



protected:
	/////////// COMPONENTS ///////////
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* scene;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UArrowComponent* forceDirection;

	
public:
	// Sets default values for this actor's properties
	ACellSpawner();

	
	/////////////////////////// VARIABLES ///////////////////////////
	/////////// DELEGATES ///////////
	UPROPERTY(BlueprintAssignable)
	FOnSpawnTriggered onTriggered;

	
	/////////////////////////// FUNCTIONS ///////////////////////////
	// Returns whether initialisation was successful
	bool Init(const ULevelStreamingDynamic* streamedLevel, const ULevelStreamingDynamic* _buildArea);

	void InitialSpawn();
	void SpawnWithForce();

	UFUNCTION()
	void IncreaseCollectedAmount(AActor* DestroyedActor) { collectedCount++; }


	/////////// DELEGATES ///////////
	// The parameters are there so that it can be called when the level changes
	UFUNCTION()
	void StopSound(int empty, ELevel unused) { if(soundPlayer) soundPlayer->Stop(); }
	
	/////////// GETTERS ///////////
	UFUNCTION(BlueprintCallable)
	const ELevel& GetLevelEnum() const { return level; }
	
	UFUNCTION(BlueprintCallable)
	bool HasObjective() const { return IsValid(objective); }
	
	UFUNCTION(BlueprintCallable)
	const ULevelObjective* GetObjective() const { return objective; }

	int GetCollectedAmount() const { return collectedCount; }

	int GetSpawnAmount() const
	{
		// If this spawner has an objective, if it's already been completed... return 0 
		// if(HasObjective()) if(objective->IsCompleted()) return 0;

		// Otherwise return the amount
		return spawnAmount;
	}

	const ULevelStreamingDynamic* GetBuildLevel() const { return buildLevel; }
};
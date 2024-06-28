/**************************************************************************************************************
* Cell Spawner - Code
* 
* The code file for a spawner that creates cells. Creates the functions that were declared in the cell spawner header file. 
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "CellSpawner.h"

#include "Kismet/GameplayStatics.h"
#include "projProblox/CustomGameInstance.h"
#include "projProblox/LevelManager.h"
#include "projProblox/GameModes/Modes.h"
#include "projProblox/Pickupables/Cores/Connectors/CubeConnector.h"


// Sets default values
ACellSpawner::ACellSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	scene = CreateDefaultSubobject<USceneComponent>("Root Scene");
	spawnTrigger = CreateDefaultSubobject<UBoxComponent>("Trigger");

	forceDirection = CreateDefaultSubobject<UArrowComponent>("Direction indicator");
	forceDirection->SetupAttachment(scene);
	forceDirection->ArrowSize = 7.5f;
}

// Called when the game starts or when spawned
void ACellSpawner::BeginPlay()
{
	Super::BeginPlay();
	previewed = !triggerable;
}

void ACellSpawner::Init(ACubeCore* core)
{
	wrld = GetWorld();

	if (!wrld)
	{
		Print("World was invalid at begin play ~ spawner", 5);
		return;
	}

	// if (!triggerable && core) core->onStartGame.AddDynamic(this, &ACellSpawner::BeginSpawn);
	if (core) core->onTurnStarted.AddDynamic(this, &ACellSpawner::ActivateSpawner);

	EarlySpawn();
}

void ACellSpawner::Overlap(AActor* otherActor)
{
	// If the trigger's relative location is unchanged, don't do anything..
	if(!triggerable) return;
	
	// Only do something if the core collides (not connectors)....
	if(otherActor->IsA<ACubeConnector>()) return;

	APickupableMaster* other = Cast<APickupableMaster>(otherActor);

	// The thing that collided wasn't a pickupable
	if(!other) return;

	// Try to get the pickupables core
	if(ACubeCore* otherCore = other->GetCore())
	{
		SpawnWithForce();
		if(otherCore) otherCore->BroadcastNewCells();
	}

	// Otherwise, it is the core.
	else if(IsValid(otherCore = Cast<ACubeCore>(other)))
	{
		SpawnWithForce();
		if(otherCore) otherCore->BroadcastNewCells();
	}
	triggerable = false;
}

ACell* ACellSpawner::Spawn(const FVector& spawn, const FRotator& rot, const FActorSpawnParameters& params) const
{
	TSubclassOf<ACell> subClass;
	switch (thingType)
	{
		case ECellType::Normal:
			subClass = normalThing;
			break;
		
		case ECellType::Bouncy:
			subClass = bouncyThing;
			break;
		
		case ECellType::Slippery:
			subClass = slipperyThing;
			break;
		
		case ECellType::Hover:
			subClass = hoverThing;
			break;
		
		case ECellType::Sticky:
			subClass = stickyThing;
			break;

		default:
			subClass = normalThing;
	}
	
	return wrld->SpawnActor<ACell>(subClass, spawn, rot, params);
}

void ACellSpawner::BeginSpawn()
{
	if(previewed) return;
	if(!wrld)
	{
		Print("World was invalid... couldn't spawn cells.", 5)
		return;
	}

	if(spawned)
	{
		Print("Already spawned...", 4)
		return;
	}
	
	const FVector thisPos = GetActorLocation();
	const FRotator rot = GetActorRotation();

	FActorSpawnParameters params;
	params.bNoFail = true;
	if(UCustomGameInstance* instance = Cast<UCustomGameInstance>(wrld->GetGameInstance()))
	{
		params.OverrideLevel = wrld->GetStreamingLevels()[instance->GetCurrentLevel()]->GetLoadedLevel();
	}

	// If spawn radius isn't set, the spawn position will be this position.
	const FVector spawn = FMath::VRand() * spawnRadius + thisPos;

	// Spawn a new Thing for however many spawnAmount says to.
	for(int i = 0; i < spawnAmount; i++) Spawn(spawn, rot, params);
	spawned = true;
}

void ACellSpawner::EarlySpawn()
{
	if(!previewed) return;
	if(triggerable) return;
	if(!wrld)
	{
		Print("World was invalid... couldn't spawn cells.", 5)
		return;
	}
	if(spawned)
	{
		Print("Already spawned...", 4)
		return;
	}
	
	const FVector thisPos = GetActorLocation();
	const FRotator rot = GetActorRotation();

	FActorSpawnParameters params;
	params.bNoFail = true;
	if(UCustomGameInstance* instance = Cast<UCustomGameInstance>(wrld->GetGameInstance()))
	{
		params.OverrideLevel = wrld->GetStreamingLevels()[instance->GetCurrentLevel()]->GetLoadedLevel();
	}

	// If spawn radius isn't set, the spawn position will be this position.
	const FVector spawn = FMath::VRand() * spawnRadius + thisPos;

	// Spawn a new Thing for however many spawnAmount says to.
	for(int i = 0; i < spawnAmount; i++) Spawn(spawn, rot, params);
	spawned = true;
}

void ACellSpawner::SpawnWithForce()
{
	if(!wrld)
	{
		Print("World was invalid... couldn't spawn cells.", 5)
		return;
	}
	
	const FVector thisPos = GetActorLocation();
	const FRotator rot = GetActorRotation();
	const FVector spawn = FMath::VRand() * spawnRadius + thisPos;
	
	FActorSpawnParameters params;
	params.bNoFail = true;
	if(UCustomGameInstance* instance = Cast<UCustomGameInstance>(wrld->GetGameInstance()))
	{
		params.OverrideLevel = wrld->GetStreamingLevels()[instance->GetCurrentLevel()]->GetLoadedLevel();
	}

	TArray<ACell*> spawnedCells;
	// Spawn a new Thing for however many spawnAmount says to.
	for(int i = 0; i < spawnAmount; i++)
	{
		if(ACell* newCell = Spawn(spawn, rot, params)) spawnedCells.Add(newCell);
	}

	for (auto& cell : spawnedCells)
	{
		const FVector direction = GetActorForwardVector().RotateAngleAxis(FMath::RandRange(0, coneRadius), {1,0,0});
		cell->GetMesh()->AddImpulse(direction * spawnForce, "", true);
	}
	spawned = true;
}

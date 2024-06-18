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

	wrld = GetWorld();
	if(!wrld)
	{
		Print("World was invalid at beginplay ~ spawner", 5)
		return;
	}

	ALevelManager* levelManager = Cast<ALevelManager>(UGameplayStatics::GetActorOfClass(wrld, ALevelManager::StaticClass()));
	if(!levelManager) return;
	
	const bool loaded = levelManager->IsLevelLoaded(GetLevel());
	if(!loaded) return;
	
	// If the current gamemode successfully casts to story mode...
	if(Cast<AMode_Story>(UGameplayStatics::GetGameMode(wrld)))
	{
		active = !triggerable;

	    UCustomGameInstance* instance = Cast<UCustomGameInstance>(wrld->GetGameInstance());
		if(!instance) return;
		
		// if(!triggerable && !instance->HasGameStarted()) BeginSpawn();
		return;
	}

	ACubeCore* core = Cast<ACubeCore>(UGameplayStatics::GetActorOfClass(wrld, ACubeCore::StaticClass()));
	if(!triggerable) core->onStartGame.AddDynamic(this, &ACellSpawner::BeginSpawn);
	else core->onStartGame.AddDynamic(this, &ACellSpawner::Activate);
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
		active = false;

		if(otherCore) otherCore->BroadcastNewCells();
	}

	// Otherwise, it is the core.
	else if((otherCore = Cast<ACubeCore>(other)))
	{
		SpawnWithForce();
		active = false;

		if(otherCore) otherCore->BroadcastNewCells();
	}
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
	if(!wrld)
	{
		Print("World was invalid... couldn't spawn cells.", 5)
		return;
	}
	if(!active) return;
	
	const FVector thisPos = GetActorLocation();
	const FRotator rot = GetActorRotation();

	FActorSpawnParameters params;
	params.bNoFail = true;
	if(UCustomGameInstance* instance = Cast<UCustomGameInstance>(wrld->GetGameInstance()))
	{
		params.OverrideLevel = wrld->GetLevel(instance->GetCurrentLevel());
	}

	// If spawn radius isn't set, the spawn position will be this position.
	const FVector spawn = FMath::VRand() * spawnRadius + thisPos;

	// Spawn a new Thing for however many spawnAmount says to.
	for(int i = 0; i < spawnAmount; i++) Spawn(spawn, rot, params);
	active = false;
}

void ACellSpawner::SpawnWithForce() const
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
		params.OverrideLevel = wrld->GetLevel(instance->GetCurrentLevel());
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
}
/**************************************************************************************************************
* Cell Spawner - Code
* 
* The code file for a spawner that creates cells. Creates the functions that were declared in the cell spawner header file. 
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "CellSpawner.h"

#include "Kismet/GameplayStatics.h"
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

	// If the current gamemode successfully casts to story mode...
	if(Cast<AMode_Story>(UGameplayStatics::GetGameMode(wrld)))
	{
		active = true;
		if(spawnTrigger->GetRelativeLocation() == FVector::ZeroVector) BeginSpawn();
		return;
	}

	ACubeCore* core = Cast<ACubeCore>(UGameplayStatics::GetActorOfClass(wrld, ACubeCore::StaticClass()));
	if(spawnTrigger->GetRelativeLocation() == FVector::ZeroVector) core->onStartGame.AddDynamic(this, &ACellSpawner::BeginSpawn);
}

void ACellSpawner::Overlap(AActor* otherActor)
{
	// If the trigger's relative location is unchanged, don't do anything..
	if(spawnTrigger->GetRelativeLocation() == FVector::ZeroVector) return;

	// Only do something if the core collides (not connectors)....
	if(otherActor->IsA<ACubeConnector>()) return;
	if(ACubeCore* otherCore = Cast<ACubeCore>(otherActor))
	{
		SpawnWithForce();
		active = false;

		otherCore->BroadcastNewCells();
	}
	
}

ACell* ACellSpawner::Spawn(const FVector& spawn, const FRotator& rot, const FActorSpawnParameters& params) const
{
	if(!active) return nullptr;
	
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
	if(!active) return;
	
	const FVector thisPos = GetActorLocation();
	const FRotator rot = GetActorRotation();

	FActorSpawnParameters params;
	params.bNoFail = true;

	// If spawn radius isn't set, the spawn position will be this position.
	const FVector spawn = FMath::VRand() * spawnRadius + thisPos;

	// Spawn a new Thing for however many spawnAmount says to.
	for(int i = 0; i < spawnAmount; i++) Spawn(spawn, rot, params);
}

void ACellSpawner::SpawnWithForce() const
{
	const FVector thisPos = GetActorLocation();
	const FRotator rot = GetActorRotation();
	const FVector spawn = FMath::VRand() * spawnRadius + thisPos;
	
	FActorSpawnParameters params;
	params.bNoFail = true;

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
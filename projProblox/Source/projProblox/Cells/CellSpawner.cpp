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

// Sets default values
ACellSpawner::ACellSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ACellSpawner::BeginPlay()
{
	Super::BeginPlay();

	UWorld* wrld = GetWorld();

	// If the current gamemode successfully casts to story mode...
	if(Cast<AMode_Story>(UGameplayStatics::GetGameMode(wrld)))
	{
		BeginSpawn();
		return;
	}

	ACubeCore* core = Cast<ACubeCore>(UGameplayStatics::GetActorOfClass(wrld, ACubeCore::StaticClass()));
	core->onStartGame.AddDynamic(this, &ACellSpawner::BeginSpawn);
}

void ACellSpawner::Spawn(UWorld* wrld, const FVector& spawn, const FRotator& rot, const FActorSpawnParameters& params) const
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
	
	wrld->SpawnActor<ACell>(subClass, spawn, rot, params);
}

void ACellSpawner::BeginSpawn()
{
	UWorld* wrld = GetWorld();

	if(AMode_Wave* gm = Cast<AMode_Wave>(UGameplayStatics::GetGameMode(wrld)))
	{
	}
	
	const FVector thisPos = GetActorLocation();
	const FRotator rot = GetActorRotation();

	FActorSpawnParameters params;
	params.bNoFail = true;

	// If spawn radius isn't set, the spawn position will be this position.
	const FVector spawn = FMath::VRand() * spawnRadius + thisPos;

	// Spawn a new Thing for however many spawnAmount says to.
	for(int i = 0; i < spawnAmount; i++) Spawn(wrld, spawn, rot, params);
}

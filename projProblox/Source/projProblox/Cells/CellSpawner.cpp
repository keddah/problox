/**************************************************************************************************************
* Cell Spawner - Code
* 
* The code file for a spawner that creates cells. Creates the functions that were declared in the cell spawner header file. 
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "CellSpawner.h"

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

	BeginSpawn();
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

void ACellSpawner::BeginSpawn() const
{
	UWorld* wrld = GetWorld();
	const FVector spawn = GetActorLocation();
	const FRotator rot = GetActorRotation();
	
	FActorSpawnParameters params;
	params.bNoFail = true;

	// Spawn a new Thing for however many spawnAmount says to.
	for(int i = 0; i < spawnAmount; i++) Spawn(wrld, spawn, rot, params);
}

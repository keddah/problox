// Created by Dean Atkinson-Walker 2024


#include "ThingSpawner.h"

// Sets default values
AThingSpawner::AThingSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AThingSpawner::BeginPlay()
{
	Super::BeginPlay();

	Spawn();
}

void AThingSpawner::Spawn() const
{
	UWorld* wrld = GetWorld();
	const FVector spawn = GetActorLocation();
	
	FActorSpawnParameters params;
	params.bNoFail = true;

	// Spawn a new Thing for however many spawnAmounts says to.
	for(int i = 0; i < spawnAmounts; i++) wrld->SpawnActor<AThing>(thingClass, spawn, {}, params);
}

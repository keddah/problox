// Created by Dean Atkinson-Walker 2024


#include "MagPole.h"

// Sets default values
AMagPole::AMagPole()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
}

// Called when the game starts or when spawned
void AMagPole::BeginPlay()
{
	Super::BeginPlay();

	ConfigureCharge();
}

// Called every frame
void AMagPole::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


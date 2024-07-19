// Created by Dean Atkinson-Walker 2024


#include "MagPole.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
AMagPole::AMagPole()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	mesh->SetSimulatePhysics(false);
}

void AMagPole::UpdateMagnets()
{
	TArray<AActor*> magActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMagnet::StaticClass(), magActors);
	for (const auto& magActor : magActors) Cast<AMagnet>(magActor)->AddMagPole(this);
}
/**************************************************************************************************************
* Mag Pole - Code
* 
* The code file for one of the mag pole class. Hides the mesh since it will be placed inside other meshes (doesn't need to be visible).
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "MagPole.h"

#include "Kismet/GameplayStatics.h"

AMagPole::AMagPole()
{
	PrimaryActorTick.bCanEverTick = false;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SetActorHiddenInGame(true);
}

void AMagPole::UpdateMagnets()
{
	TArray<AActor*> magActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMagnet::StaticClass(), magActors);
	for (const auto& magActor : magActors) Cast<AMagnet>(magActor)->AddMagPole(this);
}
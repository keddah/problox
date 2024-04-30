// Created by Dean Atkinson-Walker 2024


#include "Modes.h"

#include "Kismet/GameplayStatics.h"
#include "projProblox/PlayerCharacter.h"
#include "projProblox/Cells/CellSpawner.h"
#include "projProblox/Pickupables/Cores/CubeCore.h"

void AMode_Story::BeginPlay()
{
	Super::BeginPlay();

	APlayerCharacter* player = Cast<APlayerCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCharacter::StaticClass()));
	player->SetGameMode(EGameMode::Story);
}

void AMode_Wave::BeginPlay()
{
	APlayerCharacter* player = Cast<APlayerCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCharacter::StaticClass()));
	player->SetGameMode(EGameMode::Wave);

	if(ACubeCore* cube = Cast<ACubeCore>(UGameplayStatics::GetActorOfClass(GetWorld(), ACubeCore::StaticClass()))) core = cube;
	if(!core)
	{
		Print("Wave game mode couldn't get the cubeCore", 5)
		return;
	}

	core->onNewWave.AddDynamic(this, &AMode_Wave::IncreaseSpawns);
}

void AMode_Wave::IncreaseSpawns()
{
	TArray<AActor*> spawnActors;
	TArray<AActor*> cells;

	// Destroy all the captured cells if more than 100 cells have been captured..
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACell::StaticClass(), cells);
	if(cells.Num() > 100)
	{
		for (const auto& Acell : cells)
		{
			if(ACell* cell = Cast<ACell>(Acell))
			{
				if(cell->IsSafe()) cell->Destroy();
			}
		}
	}
	
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACellSpawner::StaticClass(), spawnActors);
	for (const auto& actor : spawnActors) Cast<ACellSpawner>(actor)->IncreaseSpawnCount(waveAdditions);
	wave++;

	// Every 5 rounds...
	if(wave % waveFrequency != 0) return;
	
	// Increase the wave amounts
	waveAdditions += waveAdditionIncrease;
}

void AMode_Assault::BeginPlay()
{
	APlayerCharacter* player = Cast<APlayerCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCharacter::StaticClass()));
	player->SetGameMode(EGameMode::Assault);
}

void AMode_Creative::BeginPlay()
{
	APlayerCharacter* player = Cast<APlayerCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCharacter::StaticClass()));
	player->SetGameMode(EGameMode::Creative);
}

/**************************************************************************************************************
* Modes - Code
* 
* The code file for the different game mode classes. Mostly unused (there were supposed to be several game modes).
* 
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "Modes.h"

#include "Kismet/GameplayStatics.h"
#include "projProblox/PlayerCharacter.h"

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

	ActivateSpawner();
}

bool AMode_Wave::ActivateSpawner()
{
	TArray<AActor*> spawnActors;
	TArray<ACellSpawner*> spawners;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACellSpawner::StaticClass(), spawnActors);

	// Don't do anything if all the spawners are already active.
	if(spawnActors.Num() < activeSpawners.Num()) return true;
	
	for (const auto& actor : spawnActors) spawners.Add(Cast<ACellSpawner>(actor));

	for (const auto& spawner : spawners)
	{
		if(spawner->IsActive()) continue;

		spawner->ActivateSpawner();
		activeSpawners.Add(spawner);
		break; // Don't continue to do all of them.
	}

	return spawnActors.Num() == activeSpawners.Num();
}

void AMode_Wave::IncreaseSpawns(const int _wave)
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
	
	// Go to the next wave...
	wave++;

	// Give the player an extra attachment to choose from
	attachmentsAvailable++;

	// Don't do the next part if all the spawners aren't active 
	if(!ActivateSpawner()) return;
	
	// Every 5 rounds...
	if(wave % waveFrequency != 0) return;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACellSpawner::StaticClass(), spawnActors);
	for (const auto& actor : spawnActors) Cast<ACellSpawner>(actor)->IncreaseSpawnCount(waveAdditions);
	
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
	if(APlayerCharacter* player = Cast<APlayerCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCharacter::StaticClass())))
	{
		player->SetGameMode(EGameMode::Creative);
		return;
	}

	Print("Gamemode couldnt cast to player (BeginPlay) ~ creative game mode", 5)
}

void AMode_Build::BeginPlay()
{
	Super::BeginPlay();
}

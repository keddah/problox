// Created by Dean Atkinson-Walker 2024


#include "LevelManager.h"

#include "Cells/CellSpawner.h"
#include "Pickupables/Cores/CubeCore.h"
#include "Pickupables/Cores/Connectors/CubeConnector.h"


// Sets default values
ALevelManager::ALevelManager()
{
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ALevelManager::BeginPlay()
{
	Super::BeginPlay();

	wrld = GetWorld();
	instance = Cast<UCustomGameInstance>(wrld->GetGameInstance());
	player = Cast<APlayerCharacter>(UGameplayStatics::GetActorOfClass(wrld, APlayerCharacter::StaticClass()));
	if(!player) Print("Level Manager couldn't get the player....", 8)
	FindCore();

	// Get the level instances that are a part of the main world
	for (int i = 0; i < wrld->GetStreamingLevels().Num(); i++)
	{
		ULevelStreaming* levelStream = wrld->GetStreamingLevels()[i];
		if (levelStream && levelStream->IsA<ULevelStreamingDynamic>())
		{
			ULevelStreamingDynamic* lvl = Cast<ULevelStreamingDynamic>(levelStream);
			if (!lvl) continue;

			// Add the level if it's valid.
			levels.AddUnique(lvl);
		}
	}

	// Get all the spawn points from that level
	TArray<AActor*> spawns;
	UGameplayStatics::GetAllActorsOfClass(wrld, ASpawnPoint::StaticClass(), spawns);
	for (auto& spawn : spawns)
	{
		ASpawnPoint* point = Cast<ASpawnPoint>(spawn);
		if(!point) continue;

		// Add the points to their respective arrays
		switch (point->GetLevelEnum())
		{
			case ELevel::BuildArea:
				point->SetLevelIndex(0);
				lvl0Spawn = point;
				break;
			case ELevel::Bedroom:
				point->SetLevelIndex(1);
				lvl1Spawns.Add(point);
				break;
			case ELevel::Kitchen:
				point->SetLevelIndex(2);
				lvl2Spawns.Add(point);
				break;
		}
	}

	// Unload every level apart from the first.
	for(int i = 1; i < levels.Num(); i++) UnloadLevel(i);

	for (ULevelStreamingDynamic* level : levels)
	{
		if (level)
		{
			level->OnLevelLoaded.AddDynamic(this, &ALevelManager::OnLevelLoaded);
		}
	}
}

void ALevelManager::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if(levels.IsEmpty()) return;

	if(levels.IsValidIndex(currentLevel))
	{
		bLevelLoading = levels[currentLevel]->GetLevelStreamingState() == ELevelStreamingState::MakingVisible;// || levels[currentLevel]->GetLevelStreamingState() == ELevelStreamingState::Loading;
	}
}

void ALevelManager::LoadLevel(const int lvlIndex, const int spawnPoint)
{
	if(!levels.IsValidIndex(lvlIndex))
	{
		Print("Level index is out of range....: Index = " + FString::FromInt(lvlIndex), 5)
		return;
	}

	if (bLevelLoading)
	{
		Print("Already loading a level...", 5);
		return;
	}
	
	if(lvlIndex == currentLevel)
	{
		Print("The level that's trying to be loaded is already loaded...: Index = " + FString::FromInt(lvlIndex), 5)
		Print("Level name = " + levels[currentLevel]->GetWorld()->GetName(), 5)
		return;
	}

	if(!wrld)
	{
		Print("World was invalid when trying to load a levels...", 8)
		return;
	}

	currentLevel = lvlIndex;
	if(!levels.IsValidIndex(currentLevel)) return;
	if(!levels[currentLevel]) return;
	
	if(!levels[currentLevel]->IsLevelLoaded())
	{
		levels[currentLevel]->SetShouldBeLoaded(true);
	}
	levels[currentLevel]->SetShouldBeVisible(true);

	// Broadcast the level change
	onLevelChanged.Broadcast(currentLevel);
	InitCellSpawners();

	instance->SetCurrentLevel(currentLevel);

	// Unload all the levels apart from the current level
	UnloadAllLevels();

	if(!player)
	{
		Print("Couldn't set spawn because the player was invalid...", 5)
		return;
	}

	if(!core)
	{
		Print("Couldn't set spawn because the core was invalid...", 5)
		return;
	}

	core->RemoveVelocity();
	
	FVector spawnPos;
	switch (currentLevel)
	{
		case 0:
			if(!lvl0Spawn) break;
			spawnPos = lvl0Spawn->GetActorLocation();
			player->SetActorRotation(lvl0Spawn->GetActorRotation());
			player->SetActorLocation(spawnPos + FVector(0,0,300));
			core->SetActorLocation(spawnPos);
			break;

		case 1:
			if(lvl1Spawns.IsEmpty()) break;
			if(lvl1Spawns.IsValidIndex(spawnPoint))
			{
				spawnPos = lvl1Spawns[spawnPoint]->GetActorLocation();
				player->SetActorRotation(lvl1Spawns[spawnPoint]->GetActorRotation());
				player->SetActorLocation(spawnPos + FVector(0,0,300));
				core->SetActorLocation(spawnPos);
			}
			break;

		case 2:
			if(lvl2Spawns.IsEmpty()) break;
			if(lvl2Spawns.IsValidIndex(spawnPoint))
			{
				spawnPos = lvl2Spawns[spawnPoint]->GetActorLocation();
				player->SetActorRotation(lvl2Spawns[spawnPoint]->GetActorRotation());
				player->SetActorLocation(spawnPos + FVector(0,0,300));
				core->SetActorLocation(spawnPos);
			}
			break;

		case 3:
			if(lvl3Spawns.IsEmpty()) break;
			if(lvl3Spawns.IsValidIndex(spawnPoint))
			{
				spawnPos = lvl3Spawns[spawnPoint]->GetActorLocation();
				player->SetActorRotation(lvl3Spawns[spawnPoint]->GetActorRotation());
				player->SetActorLocation(spawnPos + FVector(0,0,300));
				core->SetActorLocation(spawnPos);
			}
			break;
	}
}

void ALevelManager::UnloadLevel(short lvlIndex)
{
	if(!wrld)
	{
		Print("World was invalid when trying to unload A levels...", 8)
		return;
	}

	if(!levels.IsValidIndex(lvlIndex))
	{
		Print("Level index is out of range....: Index = " + FString::FromInt(lvlIndex), 5)
		return;
	}

	levels[lvlIndex]->SetShouldBeVisible(false);
}

void ALevelManager::UnloadAllLevels()
{
	// Unload all levels
	for(int i = 0; i < levels.Num(); i++)
	{
		if(i == currentLevel) continue;
		UnloadLevel(i);
	}
}

void ALevelManager::FindCore()
{
	if(!wrld) return;

	TArray<AActor*> coreActors;
	UGameplayStatics::GetAllActorsOfClass(wrld, ACubeCore::StaticClass(), coreActors);
	for (auto& ACore: coreActors)
	{
		// Ignore connectors....
		if(ACore->IsA<ACubeConnector>()) continue;

		if(ACubeCore* objCore = Cast<ACubeCore>(ACore)) core = objCore;
		if(!core) Print("Core not found... ~ Level Manager", 5)
	}
}

void ALevelManager::InitCellSpawners()
{
	if (!wrld) return;

	if(!lvl1Spawned)
	{
		TArray<AActor*> spawns;
		UGameplayStatics::GetAllActorsOfClass(levels[1]->GetStreamingWorld(), ACellSpawner::StaticClass(), spawns);
		Print(levels[1]->GetName(), 4)

		for (auto& spawnActor : spawns)
		{
			if (ACellSpawner* spawner = Cast<ACellSpawner>(spawnActor)) spawner->Init(core);
		}
	}

	else if(!lvl2Spawned)
	{
		TArray<AActor*> spawns;
		UGameplayStatics::GetAllActorsOfClass(levels[2]->GetStreamingWorld(), ACellSpawner::StaticClass(), spawns);

		Print(levels[2]->GetName(), 4)
		
		for (auto& spawnActor : spawns)
		{
			if (ACellSpawner* spawner = Cast<ACellSpawner>(spawnActor)) spawner->Init(core);
		}
	}

	if(currentLevel == 1) lvl1Spawned = true;
	if(currentLevel == 2) lvl2Spawned = true;
}


void ALevelManager::OnLevelLoaded()
{
	InitCellSpawners();
}


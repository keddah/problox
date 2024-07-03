/**************************************************************************************************************
* Level Manager - Code
* 
* The code file for the level manager. In charge of keeping track of all the player and cells spawns as well as allowing/managing the process of loading and
* unloading levels.
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "LevelManager.h"

#include "SaveFiles.h"
#include "Pickupables/Cores/CubeCore.h"
#include "Pickupables/Cores/Connectors/CubeConnector.h"


ALevelManager::ALevelManager()
{
	PrimaryActorTick.bCanEverTick = false;
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
	for (auto& levelStream : wrld->GetStreamingLevels())
	{
		if (levelStream && levelStream->IsA<ULevelStreamingDynamic>())
		{
			ULevelStreamingDynamic* lvl = Cast<ULevelStreamingDynamic>(levelStream);
			if (!lvl) continue;

			// Add the level if it's valid.
			levels.AddUnique(lvl);

			lvl->OnLevelHidden.AddDynamic(this, &ALevelManager::OnHidden);
			lvl->OnLevelShown.AddDynamic(this, &ALevelManager::OnShown);
		}
	}

	// Add a delegate for when loading begins (used for the loading screen)
	onLoadingLevel.AddDynamic(this, &ALevelManager::BeginLoading);

	// Initialise the cell spawns (spawns all the cells from every level then makes them dormant)
	InitSpawners();

	// Finding the player spawns after a delay so that the spawn area screenshot isn't dark (the lighting isn't initialised properly at BeginPlay)
	FTimerHandle UnusedHandle;
	wrld->GetTimerManager().SetTimer(UnusedHandle, [this](){FindSpawns();}, 0.25f, false); 
}

bool ALevelManager::LoadLevel(const int lvlIndex, const int spawnPoint, const bool initialLoad)
{
	if(!levels.IsValidIndex(lvlIndex))
	{
		Print("Level index is out of range....: Index = " + FString::FromInt(lvlIndex), 5)
		return false;
	}

	if (bLevelLoading)
	{
		Print("Already loading a level...", 5);
		return false;
	}
	
	if(lvlIndex == currentLevel)
	{
		// If already in the level, just go to the given spawn point.
		SelectSpawn(spawnPoint);
		return false;
	}

	if(!wrld)
	{
		Print("World was invalid when trying to load a levels...", 8)
		return false;
	}

	currentLevel = lvlIndex;
	if(!levels.IsValidIndex(currentLevel)) return false;
	if(!levels[currentLevel]) return false;

	onLoadingLevel.Broadcast();

	// Load the level if it's not loaded yet...
	if(!levels[currentLevel]->IsLevelLoaded())
	{
		levels[currentLevel]->SetShouldBeLoaded(true);
	}

	// Un hide it (load it)
	levels[currentLevel]->SetShouldBeVisible(true);
	instance->SetCurrentLevel(currentLevel);
	
	// Unload all the levels apart from the current level
	UnloadUnusedLevels();

	// Then spawn the player and core in the chosen location
	SelectSpawn(spawnPoint);
	return true;
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

void ALevelManager::UnloadUnusedLevels()
{
	for(int i = 0; i < levels.Num(); i++)
	{
		// Ignore the current level
		if(i == currentLevel) continue;
		UnloadLevel(i);
	}
}

void ALevelManager::FindCore()
{
	if(!wrld) return;

	// Isn't really necessary anymore since connectors aren't being used.
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

void ALevelManager::FindSpawns()
{
	// Get all the spawn points from the PERSISTENT level
	TArray<AActor*> spawns;
	UGameplayStatics::GetAllActorsOfClass(wrld, ASpawnPoint::StaticClass(), spawns);
	for (auto& spawn : spawns) 
	{
		ASpawnPoint* point = Cast<ASpawnPoint>(spawn);
		if(!point) continue;

		allSpawns.Add(point);

		// Foreach spawn point add a delegate to save whenever it has been unlocked
		point->onNewSpawn.AddDynamic(this, &ALevelManager::ALevelManager::SaveSpawns);

		// Sorts the spawns into their levels
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
				lvl1Screenshots.Add(point->CaptureScreenshot());
				break;
					
			case ELevel::Kitchen:
				point->SetLevelIndex(2);
				lvl2Spawns.Add(point);
				lvl2Screenshots.Add(point->CaptureScreenshot());
				break;
					
			case ELevel::Bathroom:
				point->SetLevelIndex(3);
				lvl3Spawns.Add(point);
				lvl3Screenshots.Add(point->CaptureScreenshot());
				break;
		}
	}

	// If there wasn't a save file...
	LoadUnlockedSpawns();
}

void ALevelManager::InitSpawners()
{
	TArray<AActor*> actors;
	UGameplayStatics::GetAllActorsOfClass(wrld, ACellSpawner::StaticClass(), actors);

	for(auto& cellSpawner: actors)
	{
		ACellSpawner* spawner = Cast<ACellSpawner>(cellSpawner);
		if(!spawner) continue;

		cellSpawners.Add(spawner);
		spawner->Init(core);
	}

	// Unload every level apart from the first.
	// for(int i = 1; i < levels.Num(); i++) UnloadLevel(i);
}

void ALevelManager::SelectSpawn(const int spawnPoint)
{
	if (!player)
	{
		Print("Couldn't set spawn because the player was invalid...", 5)
			return;
	}

	if (!core)
	{
		Print("Couldn't set spawn because the core was invalid...", 5)
			return;
	}

	core->RemoveVelocity();

	FVector spawnPos;
	const FVector spawnOffset = { -500,0, 0 };
	switch (currentLevel)
	{
	case 0:
		if (!lvl0Spawn) break;
		spawnPos = lvl0Spawn->GetActorLocation();
		core->Teleport(spawnPos, lvl0Spawn->GetRot());
		player->Respawn(spawnPos + spawnOffset, lvl0Spawn->GetRot());
		break;

	case 1:
		if (lvl1Spawns.IsEmpty()) break;
		if (lvl1Spawns.IsValidIndex(spawnPoint))
		{
			spawnPos = lvl1Spawns[spawnPoint]->GetActorLocation();
			core->Teleport(spawnPos, lvl1Spawns[spawnPoint]->GetRot());
			player->Respawn(spawnPos + spawnOffset, lvl1Spawns[spawnPoint]->GetRot());
		}
		break;

	case 2:
		if (lvl2Spawns.IsEmpty()) break;
		if (lvl2Spawns.IsValidIndex(spawnPoint))
		{
			spawnPos = lvl2Spawns[spawnPoint]->GetActorLocation();
			core->Teleport(spawnPos, lvl2Spawns[spawnPoint]->GetRot());
			player->Respawn(spawnPos + spawnOffset, lvl2Spawns[spawnPoint]->GetRot());
		}
		break;

	case 3:
		if (lvl3Spawns.IsEmpty()) break;
		if (lvl3Spawns.IsValidIndex(spawnPoint))
		{
			spawnPos = lvl3Spawns[spawnPoint]->GetActorLocation();
			core->Teleport(spawnPos, lvl3Spawns[spawnPoint]->GetRot());
			player->Respawn(spawnPos + spawnOffset, lvl3Spawns[spawnPoint]->GetRot());
		}
		break;
	}

	onSpawnChanged.Broadcast(spawnPoint);
}

void ALevelManager::WakeSleepCells()
{
	for(auto& spawner : cellSpawners)
	{
		ELevel levelEnum = ELevel::BuildArea;
		
		if(currentLevel == 1) levelEnum = ELevel::Bedroom;
		else if(currentLevel == 2) levelEnum = ELevel::Kitchen;
		else if(currentLevel == 3) levelEnum = ELevel::Bathroom;

		spawner->WakeSleepCollectedCells(levelEnum != ELevel::BuildArea);
		spawner->SetCellsDormant(spawner->GetLevelEnum() != levelEnum);
	}
}

void ALevelManager::SaveSpawns()
{
	TArray<short> unlockedIndices;
	USpawnSaves* spawnSave = Cast<USpawnSaves>(UGameplayStatics::LoadGameFromSlot(spawnSaveSlot, 0));
	if (!spawnSave)
	{
		spawnSave = Cast<USpawnSaves>(UGameplayStatics::CreateSaveGameObject(USpawnSaves::StaticClass()));
		Print("New save made", 5);
	}

	for (short i = 0; i < allSpawns.Num(); i++)
	{
		if (allSpawns[i]->IsUnlocked()) unlockedIndices.Add(i);
	}
	for (const auto& index : unlockedIndices) spawnSave->AddUnlock(index);
}

bool ALevelManager::LoadUnlockedSpawns()
{
	if (USpawnSaves* spawnSave = Cast<USpawnSaves>(UGameplayStatics::LoadGameFromSlot(spawnSaveSlot, 0)))
	{
		for (const auto& index : spawnSave->GetUnlockedIndices()) allSpawns[index]->UnlockPoint();
		// spawnSave->PrintUnlockedIndices();
		return true;
	}

	Print("There was no spawn save found so one was created", 8);
	// UnlockInitialSpawns();
	return false;
}

void ALevelManager::OnHidden()
{
}

void ALevelManager::OnShown()
{
	WakeSleepCells();

	ELevel lvl;
	
	// Broadcast the level change
	if(currentLevel == 0) lvl = ELevel::BuildArea;
	else if(currentLevel == 1) lvl = ELevel::Bedroom;
	else if(currentLevel == 2) lvl = ELevel::Kitchen;
	else lvl = ELevel::Bathroom;
	
	onLevelChanged.Broadcast(currentLevel, lvl);
	bLevelLoading = false;
}

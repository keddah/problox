/**************************************************************************************************************
* Level Manager - Code
* 
* The code file for the level manager. In charge of keeping track of the player and all the cell spawns as well as allowing/managing the process of loading and
* unloading levels. The game can be made expandable using this system. The persistent level is essentially a "house" and all the streamed levels are "rooms".
* Placing a level manager in each "house" would allow you to switch between "rooms". Other UI could be used to select other "houses" by selecting persistent levels.
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "LevelManager.h"

#include "Kismet/GameplayStatics.h"
#include "Pickupables/Cores/CubeCore.h"


void ALevelManager::BeginPlay()
{
	Super::BeginPlay();

	wrld = GetWorld();
	instance = Cast<UCustomGameInstance>(wrld->GetGameInstance());

	player = Cast<APlayerCharacter>(UGameplayStatics::GetActorOfClass(wrld, APlayerCharacter::StaticClass()));
	if(!player) Print("Level Manager couldn't get the player....", 8)

	FindCore();

	onFirstLoad.AddDynamic(this, &ALevelManager::OnFirstSpawn);
	
	// Get the level instances that are a part of the main world
	for (const auto& levelStream : wrld->GetStreamingLevels())
	{
		if(!IsValid(levelStream)) continue;
		if (levelStream->IsA<ULevelStreamingDynamic>())
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
	onLoadingLevel.AddDynamic(this, &ALevelManager::SetIsLoading);

	if(levels.IsEmpty())
	{
		Print("No levels were found in the persistent level.", 4)
		return;
	}

	// In the Levels tab of the persistent level, ensure that all the levels have initially visible and loaded unchecked.
	// Find the spawns once the last level has been loaded so that screenshots can be taken with everything loaded in.
	levels[levels.Num() - 1]->OnLevelShown.AddDynamic(this, &ALevelManager::FindSpawns);

	// Unhide all the levels (apart from build level)
	if(levels.Num() > 1)
	{
		for(uint8 i = 1; i < levels.Num(); i++)
		{
			levels[i]->SetShouldBeLoaded(true);
			levels[i]->SetShouldBeVisible(true);
		}
	}
	else Print("Not enough levels..?", 4)
}

bool ALevelManager::LoadLevel(const int lvlIndex, const int spawnPoint)
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
		Print("changing spawns...", 4)
		return false;
	}

	if(!IsValid(wrld))
	{
		Print("World was invalid when trying to load a level...", 8)
		return false;
	}

	if(!IsValid(instance))
	{
		Print("The game instace was invalid when trying to load a level...", 8)
		return false;
	}
	

	currentLevel = lvlIndex;
	if(!levels.IsValidIndex(currentLevel)) return false;
	if(!IsValid(levels[currentLevel])) return false;

	if(currentLevel == 1) levelEnum = ELevel::Bedroom;
	else if(currentLevel == 2) levelEnum = ELevel::Kitchen;
	else if(currentLevel == 3) levelEnum = ELevel::Bathroom;
	else levelEnum = ELevel::BuildArea;
	
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
	if(!IsValid(wrld))
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
	for(uint8 i = 0; i < levels.Num(); i++)
	{
		// Ignore the current level
		if(i == currentLevel) continue;
		UnloadLevel(i);
	}
}

void ALevelManager::FindCore()
{
	if(!IsValid(wrld)) return;

	// Isn't really necessary anymore since connectors aren't being used.
	AActor* coreActor = UGameplayStatics::GetActorOfClass(wrld, ACubeCore::StaticClass());
	
	if(ACubeCore* objCore = Cast<ACubeCore>(coreActor)) core = objCore;
	if(!core) Print("Core not found... ~ Level Manager", 5)
}

void ALevelManager::FindSpawns()
{
	// Only do this once. (will be called everytime a level loads)
	if(!IsValid(wrld)) return;

	FTimerHandle delay;
	auto ConfigSpawners = [this]
	{
		// Get all the spawn points from the PERSISTENT level
		TArray<AActor*> spawns;
		UGameplayStatics::GetAllActorsOfClass(wrld, ASpawnPoint::StaticClass(), spawns);
		if(spawns.IsEmpty())
		{
			Print("Initial load failed...", 6)
			return;
		}
		
		for (const auto& spawn : spawns) 
		{
			ASpawnPoint* point = Cast<ASpawnPoint>(spawn);
			if(!IsValid(point)) continue;

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
					break;
						
				case ELevel::Kitchen:
					point->SetLevelIndex(2);
					lvl2Spawns.Add(point);
					break;
						
				case ELevel::Bathroom:
					point->SetLevelIndex(3);
					lvl3Spawns.Add(point);
					break;
			}
		}

		// If there wasn't a save file...
		LoadUnlockedSpawns();
		
		// Initialise the cell spawns (spawns all the cells from every level)
		onFirstLoad.Broadcast();

		// Remove the delegate once the last level has been loaded so that it doesn't happen again
		if(levels.IsEmpty()) return;
		levels[levels.Num() - 1]->OnLevelShown.RemoveDynamic(this, &ALevelManager::FindSpawns);
	};

	// Run the above after 2 second to ensure the levels are completely loaded.
	// (breaks without the delay)
	wrld->GetTimerManager().SetTimer(delay, ConfigSpawners, 2, false);
}


void ALevelManager::InitSpawners()
{
	if(!IsValid(wrld))
	{
		Print("World was invalid when initialising cell spawners...", 8)
		return;
	}
	if(levels.IsEmpty())
	{
		Print("Coulding intialise cell spawners since the levels weren't set...", 5)
	}
	
	TArray<AActor*> actors;
	UGameplayStatics::GetAllActorsOfClass(wrld, ACellSpawner::StaticClass(), actors);

	for(const auto& cellSpawner: actors)
	{
		ACellSpawner* spawner = Cast<ACellSpawner>(cellSpawner);
		if(!IsValid(spawner)) continue;

		ULevelStreamingDynamic* lvl = 0;
		switch(spawner->GetLevelEnum())
		{
			case ELevel::Bedroom:
				if(levels.IsValidIndex(1)) lvl = levels[1];
				break;
			case ELevel::Kitchen:
				if(levels.IsValidIndex(2))lvl = levels[2];
				break;
			case ELevel::Bathroom:
				if(levels.IsValidIndex(3))lvl = levels[3];
				break;

			default:
				Print("Spawner was assigned to the wrong level...: " + spawner->GetName(), 5)
				break;
		}

		if(!spawner->Init(lvl)) continue;

		// Always stop the send when the level changes
		onLevelChanged.AddDynamic(spawner, &ACellSpawner::StopSound);
	}
}

void ALevelManager::SelectSpawn(const int spawnPoint)
{
	if (!IsValid(player))
	{
		Print("Couldn't set spawn because the player was invalid...", 5)
		return;
	}

	if (!IsValid(core))
	{
		Print("Couldn't set spawn because the core was invalid...", 5)
		return;
	}

	core->RemoveVelocity();

	switch(currentLevel)
	{
		case 0:
			if (!IsValid(lvl0Spawn)) break;
			core->Teleport(lvl0Spawn->GetRot(), lvl0Spawn->GetActorLocation());
			player->EnterLevel(false);
			break;

		case 1:
			if (lvl1Spawns.IsValidIndex(spawnPoint))
			{
				core->Teleport(lvl1Spawns[spawnPoint]->GetRot(), lvl1Spawns[spawnPoint]->GetActorLocation());
			}
			player->EnterLevel();
			break;

		case 2:
			if (lvl2Spawns.IsValidIndex(spawnPoint))
			{
				core->Teleport(lvl2Spawns[spawnPoint]->GetRot(), lvl2Spawns[spawnPoint]->GetActorLocation());
			}
			player->EnterLevel();
			break;

		case 3:
			if (lvl3Spawns.IsValidIndex(spawnPoint))
			{
				core->Teleport(lvl3Spawns[spawnPoint]->GetRot(), lvl3Spawns[spawnPoint]->GetActorLocation());
			}
			player->EnterLevel();
			break;
	}

	onSpawnChanged.Broadcast(spawnPoint);
}

void ALevelManager::SaveSpawns()
{
	// TArray<short> unlockedIndices;
	// USpawnSaves* spawnSave = Cast<USpawnSaves>(UGameplayStatics::LoadGameFromSlot(spawnSaveSlot, 0));
	// if (!spawnSave)
	// {
	// 	spawnSave = Cast<USpawnSaves>(UGameplayStatics::CreateSaveGameObject(USpawnSaves::StaticClass()));
	// 	Print("New save made", 5);
	// }
	//
	// for (short i = 0; i < allSpawns.Num(); i++)
	// {
	// 	if (allSpawns[i]->IsUnlocked()) unlockedIndices.Add(i);
	// }
	// for (const auto& index : unlockedIndices) spawnSave->AddUnlock(index);
}

bool ALevelManager::LoadUnlockedSpawns()
{
	// if (USpawnSaves* spawnSave = Cast<USpawnSaves>(UGameplayStatics::LoadGameFromSlot(spawnSaveSlot, 0)))
	// {
	// 	for (const auto& index : spawnSave->GetUnlockedIndices()) allSpawns[index]->UnlockPoint();
	// 	// spawnSave->PrintUnlockedIndices();
	// 	return true;
	// }

	// Print("There was no spawn save found so one was created", 8);
	// UnlockInitialSpawns();
	return false;
}

void ALevelManager::OnHidden()
{
}

void ALevelManager::OnShown()
{
	ELevel lvl;
	
	// Broadcast the level change
	if(currentLevel == 0) lvl = ELevel::BuildArea;
	else if(currentLevel == 1) lvl = ELevel::Bedroom;
	else if(currentLevel == 2) lvl = ELevel::Kitchen;
	else lvl = ELevel::Bathroom;
	
	onLevelChanged.Broadcast(currentLevel, lvl);
	bLevelLoading = false;
}

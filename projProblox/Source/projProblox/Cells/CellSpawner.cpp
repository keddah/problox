/**************************************************************************************************************
* Cell Spawner - Code
* 
* The code file for a spawner that creates cells. Creates the functions that were declared in the cell spawner header file.
* In engine, the spawners are placed in the persistent level with a level enum that needs to be assigned...
* The cells used to be put to sleep but that caused issues.. so now when the cells are spawned, they're spawned in the streamed level that
* corresponds with the level enum.
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "CellSpawner.h"

#include "projProblox/LevelManager.h"
#include "projProblox/Pickupables/Cores/Connectors/CubeConnector.h"


ACellSpawner::ACellSpawner()
{
	PrimaryActorTick.bCanEverTick = false;

	scene = CreateDefaultSubobject<USceneComponent>("Root Scene");
	spawnTrigger = CreateDefaultSubobject<UBoxComponent>("Trigger");

	soundPlayer = CreateDefaultSubobject<UAudioComponent>("Audio Player");
	soundPlayer->SetupAttachment(scene);

	forceDirection = CreateDefaultSubobject<UArrowComponent>("Direction indicator");
	forceDirection->SetupAttachment(scene);
	forceDirection->ArrowSize = 7.5f;

	params.bNoFail = true;
	params.Owner = this;
}

void ACellSpawner::BeginPlay()
{
	Super::BeginPlay();

	// Can't preview if triggerable 
	previewed = !triggerable;
	if(IsValid(objective)) objective->SetOwner(this);
}

bool ACellSpawner::Init(const ULevelStreamingDynamic* streamedLevel, const ULevelStreamingDynamic* _buildArea)
{
	if(!streamedLevel)
	{
		// Print("The level given by the level manager is invalid ~ cell spawner", 3)
		return false;
	}
	params.OverrideLevel = streamedLevel->GetLoadedLevel();

	if(_buildArea) buildLevel = _buildArea;
	
	wrld = GetWorld();
	if (!IsValid(wrld))
	{
		Print("World was invalid at begin play ~ spawner", 5);
		return false;
	}

	InitialSpawn();
	return true;
}

bool ACellSpawner::Overlap(AActor* otherActor)
{
	// If the trigger's relative location is unchanged, don't do anything..
	if(!triggerable) return false;
	if(!IsValid(otherActor)) return false;
	
	// Only do something if the core collides (not connectors)....
	if(otherActor->IsA<ACubeConnector>()) return false;

	APickupableMaster* other = Cast<APickupableMaster>(otherActor);

	// The thing that collided wasn't a pickupable
	if(!IsValid(other)) return false;

	// Try to get the pickupables core
	if(ACubeCore* otherCore = other->GetCore())
	{
		SpawnWithForce();
		if(otherCore) otherCore->BroadcastNewCells();
	}

	// Otherwise, it is the core.
	else if(IsValid(otherCore = Cast<ACubeCore>(other)))
	{
		SpawnWithForce();
		if(otherCore) otherCore->BroadcastNewCells();
	}

	PlaySound();
	triggerable = false;

	return true;
}

void ACellSpawner::PlaySound() const
{
	if (!IsValid(soundPlayer))
	{
		Print("The sound player was invalid...", 4)
		return;
	}
	
	if (!IsValid(soundToPlay))
	{
		// Print("There was no sound given...", 4)
		return;
	}

	soundToPlay->bLooping = loopingSound;
	soundPlayer->SetSound(soundToPlay);
	soundPlayer->Play(soundDelay);
}

ACell* ACellSpawner::Spawn(const FVector& spawn, const FRotator& rot)const
{
	TSubclassOf<ACell> subClass;
	switch (cellType)
	{
		case ECellType::Normal:
			subClass = normalCell;
			break;
		
		case ECellType::Bouncy:
			subClass = bouncyThing;
			break;
		
		case ECellType::Slippery:
			subClass = slipperyCell;
			break;
		
		case ECellType::Hover:
			subClass = hoverCell;
			break;
		
		case ECellType::Sticky:
			subClass = stickyCell;
			break;

		default:
			subClass = normalCell;
	}

	if(!params.OverrideLevel) Print("No level/.", 4)
	
	ACell* cell = wrld->SpawnActor<ACell>(subClass, spawn, rot, params);
	cell->SetOwningSpawner(this);
	cell->OnDestroyed.AddDynamic(this, &ACellSpawner::IncreaseCollectedAmount);
	
	return cell;
}

void ACellSpawner::InitialSpawn()
{
	if(spawned) return;

	// Don't spawn on begin play if triggerable
	if(triggerable) return;

	if(!previewed) return;
	if(!IsValid(wrld))
	{
		Print("World was invalid... couldn't spawn cells.", 5)
		return;
	}

	// Doing outside the loop so it's not done unnecessarily
	const FVector thisPos = GetActorLocation();
	const FRotator rot = GetActorRotation();

	// If spawn radius isn't set, the spawn position will be this position.
	const FVector spawn = FMath::VRand() * spawnRadius + thisPos;

	// Spawn a new Thing for however many spawnAmount says to.
	for(unsigned int i = 0; i < spawnAmount; i++)
	{
		ACell* cell = Spawn(spawn, rot);

		// Spawns a cell then deactivates it...
		// cell->Sleep();

		spawnedCells.Add(cell);
	}
	spawned = true;
}

void ACellSpawner::SpawnWithForce()
{
	// Don't allow things to spawn if the objective has already been done.
	// if(HasObjective()) if(objective->IsCompleted()) return;
	
	if(!IsValid(wrld))
	{
		Print("World was invalid... couldn't spawn cells.", 5)
		return;
	}
	
	const FVector thisPos = GetActorLocation();
	const FRotator rot = GetActorRotation();
	const FVector spawn = FMath::VRand() * spawnRadius + thisPos;
	
	// Spawn a new Thing for however many spawnAmount says to.
	for(unsigned int i = 0; i < spawnAmount; i++)
	{
		if(ACell* newCell = Spawn(spawn, rot)) spawnedCells.Add(newCell);
	}

	for (auto& cell : spawnedCells)
	{
		const FVector direction = GetActorForwardVector().RotateAngleAxis(FMath::RandRange(0, coneRadius), {1,0,0});
		cell->GetMesh()->AddImpulse(direction * spawnForce, "", true);
	}
	spawned = true;

	onTriggered.Broadcast(this);
	if(IsValid(objective)) objective->SetCompleted();
}

// int ACellSpawner::GetCollectedAmount()
// {
// 	if(spawnedCells.IsEmpty()) return 0;
//
// 	int count = 0;
// 	for(const auto& cell : spawnedCells)
// 	{
// 		// If it's not valid.. it means it's been destroyed/collected.
// 		if(!cell) count++;
// 	}
//
// 	return count;
// }
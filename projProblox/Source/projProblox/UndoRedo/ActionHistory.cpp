// Created by Dean Atkinson-Walker 2024


#include "ActionHistory.h"

#include "projProblox/Pickupables/Cores/CubeCore.h"

FTask UActionHistory::Undo()
{
	if (tasks.IsEmpty())
	{
		Print("The task history is empty.", 5);
		return {};
	}

	// If currentTask index is invalid return
	if(currentTask == -1)
	{
		Print("Couldnt redo because of a bad index: " + FString::FromInt(currentTask), 5);
		return {};
	}

	// Decrement currentTask to point to the previous task
	--currentTask;
	atEnd = currentTask <= 0;
	if(atEnd)
	{
		currentTask = -1;
		return tasks[0];
	}
	
	// Check if the currentTask is still a valid index after decrement
	if(!tasks.IsValidIndex(currentTask))
	{
		// This means we have undone all tasks, and we're at the beginning
		currentTask = 0; // Reset to the first index
		atEnd = true;
		return tasks[currentTask];
	}

	// Return the task that was undone
	if(tasks.IsValidIndex(currentTask + 1)) return tasks[currentTask + 1];

	return tasks[currentTask];
}

FTask UActionHistory::Redo()
{
	if (tasks.IsEmpty())
	{
		Print("The task history is empty.", 5);
		return {};
	}

	// If currentTask index is invalid return
	if(currentTask == tasks.Num() - 1)
	{
		Print("Couldnt redo because of a bad index: " + FString::FromInt(currentTask), 5);
		return {};
	}

	// Increment currentTask to point to the previous task
	++currentTask;
	atEnd = currentTask >= tasks.Num();
	if(atEnd)
	{
		currentTask = tasks.Num() + 1;
		return tasks[tasks.Num() - 1];
	}
	
	// Check if the currentTask is still a valid index after decrement
	if(!tasks.IsValidIndex(currentTask))
	{
		// This means we have undone all tasks, and we're at the beginning
		currentTask = tasks.Num() - 1; // Reset to the last index
		atEnd = true;
		
		return tasks[currentTask];
	}

	// Return the task that was undone
	if(tasks.IsValidIndex(currentTask - 1)) return tasks[currentTask - 1];
	
	return tasks[currentTask];
}

// Spawns a new attachment depending on the given class and attaches it to the given core, in the given slot
void UActionHistory::RecreateObject(UWorld* world, ACubeCore* core, TSubclassOf<APickupableMaster> respawnClass, const FName& socket)
{
	if(!core)
	{
		Print("couldnt cast to core - Reattaching...", 5)
		return;
	}

	FActorSpawnParameters params;
	params.bNoFail = true;

	for(const auto& _class : bpClasses)
	{
		if(respawnClass != _class) continue;

		APickupableMaster* newObj = world->SpawnActor<APickupableMaster>(_class, {}, {}, params);
		newObj->SetCore(core);
		newObj->Reattach(socket);
		core->AddAttachment(newObj, socket);
		return;
	}
}

void UActionHistory::NewAction(const FTask& task)
{
	if(task.modifiedObjs.IsEmpty())
	{
		Print("The task objects are invalid.... ~ action history" , 5)
		return;
	}
	
	// If it's in the middle of the history and a new action is added... 
	// overwrite before adding the new task.
	if (currentTask > -1 && currentTask < tasks.Num() - 1) Overwrite();

	// Add the new task to the history
	tasks.Add(task);

	// Update the current task index to the latest task
	currentTask = tasks.Num() - 1;
	
	// Check if the number of tasks exceeds the limit
	if (tasks.Num() > tasksLimit)
	{
		tasks.RemoveAt(0);
		currentTask--; // Adjust the current task index as the list shrinks
		Print("Removed task since there are too many...", 5);
	}
}

void UActionHistory::SetReferences()
{
	bpClasses.Empty();

    // Balloon
    static ConstructorHelpers::FClassFinder<APickupableMaster> BalloonFinder(TEXT("/Game/Blueprints/Pickupables/BP_Balloon.BP_Balloon_C"));
    if (BalloonFinder.Succeeded()) bpClasses.Add(BalloonFinder.Class);

    // Spring
    static ConstructorHelpers::FClassFinder<APickupableMaster> SpringFinder(TEXT("/Game/Blueprints/Pickupables/BP_BounceSpring.BP_BounceSpring_C"));
    if (SpringFinder.Succeeded()) bpClasses.Add(SpringFinder.Class);

    // Glider
    static ConstructorHelpers::FClassFinder<APickupableMaster> GliderFinder(TEXT("/Game/Blueprints/Pickupables/BP_Glider.BP_Glider_C"));
    if (GliderFinder.Succeeded()) bpClasses.Add(GliderFinder.Class);

    // Hoverer
    static ConstructorHelpers::FClassFinder<APickupableMaster> HovererFinder(TEXT("/Game/Blueprints/Pickupables/BP_Hoverer.BP_Hoverer_C"));
    if (HovererFinder.Succeeded()) bpClasses.Add(HovererFinder.Class);

    // Magnet
    static ConstructorHelpers::FClassFinder<APickupableMaster> MagnetFinder(TEXT("/Game/Blueprints/Pickupables/BP_Magnet.BP_Magnet_C"));
    if (MagnetFinder.Succeeded()) bpClasses.Add(MagnetFinder.Class);

    // Piston
    static ConstructorHelpers::FClassFinder<APickupableMaster> PistonFinder(TEXT("/Game/Blueprints/Pickupables/BP_Pusher.BP_Pusher_C"));
    if (PistonFinder.Succeeded()) bpClasses.Add(PistonFinder.Class);

    // Propeller
    static ConstructorHelpers::FClassFinder<APickupableMaster> PropellerFinder(TEXT("/Game/Blueprints/Pickupables/BP_PropellerFan.BP_PropellerFan_C"));
    if (PropellerFinder.Succeeded()) bpClasses.Add(PropellerFinder.Class);

    // Thruster
    static ConstructorHelpers::FClassFinder<APickupableMaster> ThrusterFinder(TEXT("/Game/Blueprints/Pickupables/BP_Rocket.BP_Rocket_C"));
    if (ThrusterFinder.Succeeded()) bpClasses.Add(ThrusterFinder.Class);

    // Treads
    static ConstructorHelpers::FClassFinder<APickupableMaster> TreadsFinder(TEXT("/Game/Blueprints/Pickupables/BP_Treads.BP_Treads_C"));
    if (TreadsFinder.Succeeded()) bpClasses.Add(TreadsFinder.Class);

    // Grapple
    static ConstructorHelpers::FClassFinder<APickupableMaster> GrappleFinder(TEXT("/Game/Blueprints/Pickupables/Grapple/BP_Grapple.BP_Grapple_C"));
    if (GrappleFinder.Succeeded()) bpClasses.Add(GrappleFinder.Class);
}

void UActionHistory::Overwrite()
{
	// Remove tasks after the current task
	const unsigned int tasksToRemove = tasks.Num() - (currentTask + 1) + 1;
	if (tasksToRemove > 0) tasks.RemoveAt(currentTask, tasksToRemove);
}

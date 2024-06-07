// Created by Dean Atkinson-Walker 2024


#include "ActionHistory.h"


std::tuple<FTask, bool> UActionHistory::Undo()
{
	if (tasks.IsEmpty())
	{
		Print("The task history is empty.", 5);
		return {};
	}

	// If currentTask index is invalid return
	if(!tasks.IsValidIndex(currentTask))
	{
		Print("Couldnt undo because of a bad index: " + FString::FromInt(currentTask), 5);
		return {};
	}

	// Decrement currentTask to point to the previous task
	--currentTask;
	atEnd = currentTask == 0;

	// Check if the currentTask is still a valid index after decrement
	if(!tasks.IsValidIndex(currentTask))
	{
		// This means we have undone all tasks, and we're at the beginning
		currentTask = 0; // Reset to the first index
		atEnd = true;
		PrintInt(currentTask, 5)
		return std::make_tuple(tasks[currentTask], true);
	}

	// Return the task that was undone
	if(tasks.IsValidIndex(currentTask + 1)) return std::make_tuple(tasks[currentTask + 1], false);
	
	return std::make_tuple(tasks[currentTask], false);
}


std::tuple<FTask, bool> UActionHistory::Redo()
{
	if (tasks.IsEmpty())
	{
		Print("The task history is empty.", 5);
		return {};
	}

	// If currentTask index is invalid return
	if(!tasks.IsValidIndex(currentTask))
	{
		Print("Couldnt undo because of a bad index: " + FString::FromInt(currentTask), 5);
		return {};
	}

	// Increment currentTask to point to the previous task
	++currentTask;
	atEnd = currentTask == tasks.Num();

	// Check if the currentTask is still a valid index after decrement
	if(!tasks.IsValidIndex(currentTask))
	{
		// This means we have undone all tasks, and we're at the beginning
		currentTask = tasks.Num() - 1; // Reset to the last index
		atEnd = true;
		PrintInt(currentTask, 5)
		
		return std::make_tuple(tasks[currentTask], true);
	}

	// Return the task that was undone
	if(tasks.IsValidIndex(currentTask - 1)) return std::make_tuple(tasks[currentTask - 1], false);
	
	return std::make_tuple(tasks[currentTask], false);
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
	if (currentTask < tasks.Num() - 1) Overwrite();

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

void UActionHistory::Overwrite()
{
	// Remove tasks after the current task
	const unsigned int tasksToRemove = tasks.Num() - (currentTask + 1) + 1;
	if (tasksToRemove > 0) tasks.RemoveAt(currentTask, tasksToRemove);
}

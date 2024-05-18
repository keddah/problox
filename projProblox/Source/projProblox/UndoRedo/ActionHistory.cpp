// Created by Dean Atkinson-Walker 2024


#include "ActionHistory.h"

UActionHistory::UActionHistory()
{
}

FTask UActionHistory::Undo()
{
	// if(atEnd) return {};
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
		Print("at end set to true", 5)
		return tasks[currentTask];
	}

	// Return the task that was undone
	Print("At end = " + atEnd? "True" : "False", 5)
	Print("Returned Task: " + FString::FromInt(currentTask), 5);
	return tasks[currentTask];
}


FTask UActionHistory::Redo()
{
	// if(atEnd) return {};
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
	++currentTask;
	atEnd = currentTask == tasks.Num();

	// Check if the currentTask is still a valid index after decrement
	if(!tasks.IsValidIndex(currentTask))
	{
		// This means we have undone all tasks, and we're at the beginning
		currentTask = tasks.Num() - 1; // Reset to the last index
		atEnd = true;
		Print("at end set to true", 5)
		return tasks[currentTask];
	}

	// Return the task that was undone
	Print("At end = " + atEnd? "True" : "False", 5)
	Print("Returned Task: " + FString::FromInt(currentTask), 5);
	return tasks[currentTask];
}


void UActionHistory::NewAction(const FTask& task)
{
	if(!task.obj)
	{
		Print("The task's object is invalid.... ~ action history" , 5)
		return;
	}
	
	// If it's in the middle of the history and a new action is added... 
	// overwrite before adding the new task.
	if (currentTask < tasks.Num() - 1) Overwrite();

	// Add the new task to the history
	tasks.Add(task);

	// Update the current task index to the latest task
	currentTask = tasks.Num() - 1;
	Print("Current Task: " + FString::FromInt(currentTask), 5);
	
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
	Print("OVERWRITE CALLED", 5);

	// Remove tasks after the current task
	const unsigned int tasksToRemove = tasks.Num() - (currentTask + 1) + 1;
	PrintInt(tasksToRemove, 4)
	if (tasksToRemove > 0) tasks.RemoveAt(currentTask, tasksToRemove);
}

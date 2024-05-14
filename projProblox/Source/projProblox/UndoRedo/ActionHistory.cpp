// Created by Dean Atkinson-Walker 2024


#include "ActionHistory.h"

UActionHistory::UActionHistory()
{
}

FTask UActionHistory::Undo()
{
	if (tasks.IsEmpty() || !tasks.IsValidIndex(currentTask))
	{
		if(currentTask < 0 && !tasks.IsEmpty())
		{
			currentTask = 0;
			return tasks.IsValidIndex(currentTask)? tasks[currentTask] : FTask();
		}
		
		Print("Couldnt undo because of a bad index: " + FString::FromInt(currentTask), 5)
		return {};
	}

	// WHEN YOU REACH THE START/END OF THE HISTORY YOU GO OVER BY 1. FIXES ITSELF WHEN YOU REDO/UNDO AGAIN
	--currentTask;
	Print("Returned Task: " + FString::FromInt(currentTask + 1), 5);
	return tasks.IsValidIndex(currentTask + 1)? tasks[currentTask + 1] : FTask();
}

FTask UActionHistory::Redo()
{
	// Return the last task if already up to date...
	if (tasks.IsEmpty() || !tasks.IsValidIndex(currentTask))
	{
		if(currentTask >= tasks.Num())
		{
			currentTask = tasks.Num() - 1;
			
			Print("end of tasks list... " + FString::FromInt(currentTask), 3)
			return tasks.IsValidIndex(currentTask)? tasks[currentTask] : FTask();
		}
		
		Print("Couldnt undo because of a bad index: " + FString::FromInt(currentTask), 5)
		return {};
	}


	// WHEN YOU REACH THE START/END OF THE HISTORY YOU GO OVER BY 1. FIXES ITSELF WHEN YOU REDO/UNDO AGAIN
	++currentTask;
	Print("Returned Task: " + FString::FromInt(currentTask - 1), 5);
	return tasks.IsValidIndex(currentTask - 1)? tasks[currentTask - 1] : FTask();
}


void UActionHistory::NewAction(const FTask& task)
{
	tasks.Add(task);
	
	// Don't overwrite if there aren't any tasks or if the current task is the latest task.
	bool overwrite = true;

	// +1 to consider the next task (since a new task is added at the start of this function).
	// if the current task is the last task...
	if(currentTask + 1 == tasks.Num() - 1) overwrite = false;

	if(overwrite) Overwrite();
	else currentTask++;
	
	// Check if the number of tasks exceeds the limit..
	if (tasksLimit > 0 && tasks.Num() > tasksLimit)
	{
		tasks.RemoveAt(0);
		currentTask--;
	}
	Print("Current Task: " + FString::FromInt(currentTask), 2);
}

void UActionHistory::Overwrite()
{
	Print("OVERWRITE CALLED", 5)
	
	// Remove tasks after the current task
	const short removeCount = tasks.Num() - currentTask - 1;
	tasks.RemoveAt(currentTask + 1, removeCount);

	// If tasks have been removed, adjust the current task index
	if (removeCount > 0) currentTask = FMath::Clamp(currentTask, 0, tasks.Num() - 1);
}
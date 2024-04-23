// Created by Dean Atkinson-Walker 2024


#include "ActionHistory.h"

UActionHistory::UActionHistory()
{
}

FTask UActionHistory::Undo()
{
	// Don't do anything if no tasks have been done...
	if (tasks.IsEmpty())
	{
		Print("Couldnt undo because of a bad index", 5)
		return {};
	}

	// If there's a change but it's the first change...
	if(currentTask == 0)
	{
		currentTask = 0;
		return tasks[currentTask];
	}
	
	Print("Current Task: " + FString::FromInt(currentTask), 6);
	currentTask--;
	return tasks[currentTask + 1];
}

FTask UActionHistory::Redo()
{
	if (currentTask >= tasks.Num() - 1)
	{
		Print("Couldnt redo because of a bad index", 5)
		return {};
	}

	Print("Current Task: " + FString::FromInt(currentTask), 6);
	currentTask++;
	return tasks[currentTask];
}

void UActionHistory::NewAction(const FTask& task)
{
	tasks.Add(task);
	Print("Addedd task", 5)
	
	// Don't overwrite if there aren't any tasks or if the current task is the latest task
	bool overwrite = true;

	// if there is only one task and its the current task OR
	// if the tasks array is empty OR
	// if the tasks array isn't empty but the current task is the last task...
	// Don't Overwrite

	// +1 to consider the next task (since a new task is added at the start of this function)
	if(currentTask + 1 == tasks.Num() - 1) overwrite = false;

	if(overwrite) Overwrite();
	else currentTask++;
	
	// Check if the number of tasks exceeds the limit..
	if (tasksLimit > 0 && tasks.Num() > tasksLimit)
	{
		tasks.RemoveAt(0);
		currentTask--;
	}
	Print("Current Task: " + FString::FromInt(currentTask), 6);
}

void UActionHistory::Overwrite()
{
	Print("OVERWRITE CALLED", 5)
	
	// Remove tasks after the current task
	const short removeCount = tasks.Num() - currentTask - 1;
	tasks.RemoveAt(currentTask + 1, removeCount);

	// If tasks have been removed, adjust the current task index
	if (removeCount > 0)
	{
		currentTask = FMath::Clamp(currentTask, 0, tasks.Num() - 1);
		return;
	}

	// Nothing got overwrote...
	Print("nothing overwrote...", 5)
}
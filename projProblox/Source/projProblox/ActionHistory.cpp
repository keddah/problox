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
		Print("The first change....", 5)
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
	return tasks[currentTask - 1];
}

void UActionHistory::NewAction(const FTask& task)
{
	tasks.Add(task);
	Print("Adedd tast", 5)
	
	// Don't overwrite if there aren't any tasks or if the current task is the latest task
	bool overwrote = false;
	if (currentTask > -1 && currentTask + 1 != tasks.Num() - 1) overwrote = Overwrite();
	if(!overwrote) currentTask++;
	

	// Check if the number of tasks exceeds the limit..
	if (tasksLimit > 0 && tasks.Num() > tasksLimit)
	{
		tasks.RemoveAt(0);
		currentTask--;
	}
	Print("Current Task: " + FString::FromInt(currentTask), 6);
}

bool UActionHistory::Overwrite()
{
	Print("OVERWRITE CALLED", 5)
	
	// Remove tasks after the current task
	const short removeCount = tasks.Num() - currentTask - 1;
	tasks.RemoveAt(currentTask + 1, removeCount);

	// If tasks have been removed, adjust the current task index
	if (removeCount > 0)
	{
		currentTask = FMath::Clamp(currentTask, 0, tasks.Num() - 1);
		return true;
	}

	// Nothing got overwrote...
	Print("nothing overwrote...", 5)
	return false;
}
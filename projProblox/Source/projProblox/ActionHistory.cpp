// Created by Dean Atkinson-Walker 2024


#include "ActionHistory.h"

UActionHistory::UActionHistory()
{
}

FTask UActionHistory::Undo()
{
	// Don't do anything if no tasks have been done...
	if (tasks.Num() == 0 || currentTask <= 0)
	{
		Print("Couldnt undo because of a bad index", 5)
		return {};
	}
    
	currentTask--;
	Print("Current Task: " + FString::FromInt(currentTask), 6);
	return tasks[currentTask];
}

FTask UActionHistory::Redo()
{
	if (currentTask >= tasks.Num() - 1)
	{
		Print("Couldnt redo because of a bad index", 5)
		return {};
	}

	currentTask++;
	Print("Current Task: " + FString::FromInt(currentTask), 6);
	return tasks[currentTask];
}

void UActionHistory::NewAction(const FTask& task)
{
	// Don't overwrite if there aren't any tasks or if the current task is the latest task
	bool overwrote = false;
	Print(tasks.IsEmpty()? "empty" : "not empry", 4)
	if (!tasks.IsEmpty() && currentTask != tasks.Num() - 1) overwrote = Overwrite();
	if(!overwrote) currentTask++;
	
	tasks.Add(task);
	Print("Adedd tast", 5)

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
	Print("overwriting because of task length..." + FString::FromInt(tasks.Num() - 1), 4)
	tasks.RemoveAt(currentTask + 1, tasks.Num() - currentTask - 1);
	Print("OVERWROTE", 4)
	return true;
}
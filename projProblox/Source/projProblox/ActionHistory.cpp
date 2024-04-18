// Created by Dean Atkinson-Walker 2024


#include "ActionHistory.h"

UActionHistory::UActionHistory()
{
}

FTask UActionHistory::Undo()
{
	// Don't do anything if no tasks have been done...
	if(tasks.IsEmpty()) return {NAME_None};
	
	// Don't do anything if the player is currently on the first task...
	if(currentTask == 0) return {NAME_None};
	
	currentTask--;
	return tasks[currentTask];
}

FTask UActionHistory::Redo()
{
	if(currentTask >= tasks.Num())
	{
		currentTask = tasks.Num() - 1;
		return {NAME_None};
	}
	
	currentTask++;
	return tasks[currentTask];
}

void UActionHistory::NewAction(const FTask& task)
{
	tasks.Add(task);
	currentTask++;
	
	Print(task.taskName.ToString(), 4)
}

void UActionHistory::Overwrite()
{
}

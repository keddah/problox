// Created by Dean Atkinson-Walker 2024


#include "ActionHistory.h"


UActionHistory::UActionHistory()
{
}

FTask UActionHistory::Undo()
{
	if(tasks.IsEmpty()) return {};
	
	currentTask--;
	return tasks[currentTask];
}

FTask UActionHistory::Redo()
{
	currentTask++;

	if(currentTask >= tasks.Num()) currentTask = tasks.Num() - 1;
	return tasks[currentTask];
}

void UActionHistory::NewAction(const FTask& task)
{
	tasks.Add(task);
}

void UActionHistory::Overwrite()
{
}

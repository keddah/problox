// Created by Dean Atkinson-Walker 2024


#include "ActionHistory.h"

UActionHistory::UActionHistory()
{
}

FTask UActionHistory::Undo()
{
	// Don't do anything if no tasks have been done...
	if (tasks.Num() == 0 || currentTask <= 0) return {};
    
	currentTask--;

	PrintInt(currentTask, 3);

	return tasks[currentTask];
}

FTask UActionHistory::Redo()
{
	if (currentTask >= tasks.Num() - 1) return {};

	currentTask++;

	PrintInt(currentTask, 3);

	return tasks[currentTask];
}

void UActionHistory::NewAction(const FTask& task)
{
	tasks.Add(task);

	// Will only overwrite if the current task isn't the last index of the array.
	if(!Overwrite()) currentTask++;

	// Check if the number of tasks exceeds the limit..
	if (tasksLimit > 0 && tasks.Num() > tasksLimit) tasks.RemoveAt(0);

	Print(task.taskName.ToString(), 4);
}
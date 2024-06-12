// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ActionHistory.generated.h"

#define Print(x, duration) { GEngine->AddOnScreenDebugMessage(-1, duration, FColor::Cyan, x); }
#define PrintInt(x, duration) { GEngine->AddOnScreenDebugMessage(-1, duration, FColor::Cyan, FString::FromInt(x)); }

UENUM(BlueprintType)
enum class EOperations : uint8
{
	Attach,
	Detach,
	Move,
};

class APickupableMaster;
USTRUCT(BlueprintType)
struct FTask
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(VisibleAnywhere)
	FName taskName;
	
	UPROPERTY(VisibleAnywhere, meta = (ToolTip = "Made to be an array just for detaching from cores (when detaching all)"))
	TArray<APickupableMaster*> modifiedObjs;
	
	UPROPERTY(VisibleAnywhere)
	FTransform startTransform;
	
	UPROPERTY(VisibleAnywhere)
	FTransform endTransform;

	UPROPERTY(VisibleAnywhere)
	EOperations operation;

	bool operator==(const FTask& task) const
	{
		// If all the values are the same...
		const bool same = taskName == task.taskName && modifiedObjs == task.modifiedObjs && operation == task.operation && startTransform.Equals(task.startTransform) && endTransform.Equals(task.endTransform);
		return same;
	}
};

UCLASS()
class PROJPROBLOX_API UActionHistory : public UObject
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, meta = (ToolTip = "An array of things that the player has done.\n The max number of tasks is 25 - includes moving, attaching and detaching."))
	TArray<FTask> tasks;

	short currentTask = -1;

	// Whether at the start or end of the task history.
	bool atEnd;
	
	// The max number of tasks allowed to be saved
	unsigned short tasksLimit = 25;

	void Overwrite();

public:
	void NewAction(const FTask& task);

	short GetCurrentTaskIndex() const { return currentTask; }

	// The bool in the tuple returns whether it reached the end.
	FTask Undo();
	FTask Redo();
	void Clear() {tasks.Empty(); currentTask = -1; }
	void PrintTaskIndex(const float duration = 4) const { Print("Current Task: " + FString::FromInt(currentTask), duration)}
	
};

// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ActionHistory.generated.h"

#define Print(x, duration) { GEngine->AddOnScreenDebugMessage(-1, duration, FColor::Cyan, x); }

UENUM(BlueprintType)
enum class EOperations : uint8
{
	Attach,
	Detach,
	Move,
};

USTRUCT(BlueprintType)
struct FTask
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(VisibleAnywhere)
	FName taskName;
	
	UPROPERTY(VisibleAnywhere)
	class APickupableMaster* obj;
	
	UPROPERTY(VisibleAnywhere)
	FTransform startTransform;
	
	UPROPERTY(VisibleAnywhere)
	FTransform endTransform;

	UPROPERTY(VisibleAnywhere)
	EOperations operation;
};

UCLASS()
class PROJPROBLOX_API UActionHistory : public UObject
{
	GENERATED_BODY()

	UActionHistory();

	UPROPERTY(VisibleAnywhere, meta = (ToolTip = "An array of things that the player has done.\n The max number of tasks is 25 - includes moving, attaching and detaching."))
	TArray<FTask> tasks;

	unsigned short currentTask;

	// The max number of tasks allowed to be saved
	unsigned short tasksLimit = 25;

	void Overwrite();
	void Clear() {tasks.Empty(); currentTask = 0; }

public:
	void NewAction(const FTask& task);
	
	FTask Undo();
	FTask Redo();
	
};

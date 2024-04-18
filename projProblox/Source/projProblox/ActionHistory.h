// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ActionHistory.generated.h"

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

	UPROPERTY()
	FName taskName;
	
	UPROPERTY()
	class APickupableMaster* obj;
	
	UPROPERTY()
	FTransform startTransform;
	
	UPROPERTY()
	FTransform endTransform;

	UPROPERTY()
	EOperations operation;
};

UCLASS()
class PROJPROBLOX_API UActionHistory : public UObject
{
	GENERATED_BODY()

	UActionHistory();

	UPROPERTY(meta = (ToolTip = "An array of things that the player has done.\n The max number of tasks is 25 - includes moving, attaching and detaching."))
	TArray<FTask> tasks;

	unsigned short currentTask;
	

	void Overwrite();
	void Clear() {tasks.Empty(); currentTask = 0; }

public:
	void NewAction(const FTask& task);
	
	FTask Undo();
	FTask Redo();
	
};

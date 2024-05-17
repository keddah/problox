// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

#include "Pickupables/Cores/Connectors/CubeConnector.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> coreActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACubeCore::StaticClass(), coreActors);

	// Since the connectors inherit from the core and are technically cube cores...
	for (const auto& coreObj: coreActors)
	{
		if(coreObj->IsA<ACubeConnector>()) continue;

		core = Cast<ACubeCore>(coreObj);
	}
	if(!IsValid(core))
	{
		Print("Core Invalid... ~ player", 5);
		return;
	}
	
	core->onGameEnd.AddDynamic(this, &APlayerCharacter::EndGame);

	history = NewObject<UActionHistory>();
	buildPhase = true;
}

void APlayerCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	// if(selectedObj) Print(selectedObj->GetName(),.1);
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void APlayerCharacter::Undo()
{
	const FTask task = history->Undo();
	APickupableMaster* changedObj = task.obj;

	// If the task.object wasn't set... the task struct is invalid.
	if(!IsValid(changedObj))
	{
		Print("There aren't any tasks to undo...", 2);
		history->PrintTaskIndex();
		return;
	}

	// Manually deselect the object...
	changedObj->ManualSetSelected(false);

	holding = false;
	selectedObj = nullptr;

	// Clear things to ignore once not selecting anything.
	exclusions.Empty();

	// Depending on the operation... Move back, Reattach or Detach
	switch (task.operation)
	{
		// Undo the attach operation
		case EOperations::Attach:
			changedObj->Detach();
			break;
		
		// Undo the detach operation
		case EOperations::Detach:
			changedObj->Reattach();
			break;
		
		// Undo the move operation
		case EOperations::Move:
			changedObj->SetActorLocation(task.startTransform.GetLocation());
			changedObj->SetActorRotation(task.startTransform.Rotator());
			break;
	}

	changedObj->RemoveVelocity();
}

void APlayerCharacter::Redo()
{
	const FTask task = history->Redo();
	if(!IsValid(task.obj))
	{
		Print("There aren't any tasks to redo...", 2);
		history->PrintTaskIndex();
		return;
	}
	
	APickupableMaster* changedObj = task.obj;
	changedObj->ManualSetSelected(false);

	// Is the selected object a core?
	holding = false;
	selectedObj = nullptr;

	// Clear things to ignore once not selecting anything.
	exclusions.Empty();
	
	// Depending on the operation... Move back, Reattach or Detach
	switch (task.operation)
	{
		// Redo the attach operation
		case EOperations::Attach:
			changedObj->Reattach();
			break;
			
		// Redo the detach operation
		case EOperations::Detach:
			changedObj->Detach();
			break;
			
		// Redo the move operation
		case EOperations::Move:
			changedObj->SetActorLocation(task.endTransform.GetLocation());
			changedObj->SetActorRotation(task.endTransform.Rotator());
		break;
	}
	
	changedObj->RemoveVelocity();
}

void APlayerCharacter::CreateTaskHistory(const FName& task, APickupableMaster* obj, const FTransform& startTransform, const FTransform& endTransform) const
{
	FTask newTask;
	if(task == "ATTACH") newTask = {task, obj, startTransform, endTransform, EOperations::Attach};
	if(task == "DETACH") newTask = {task, obj, startTransform, endTransform, EOperations::Detach};
	if(task == "MOVE") newTask = {task, obj, startTransform, endTransform, EOperations::Move};
	
	history->NewAction(newTask);
}

void APlayerCharacter::ManualSelectObject(APickupableMaster* obj)
{
	if(!IsValid(obj)) return;
	
	holding = true;
	selectedObj = obj;
	selectedObj->SetSelected(true);

	// Need to set the start position...
	// Only add a new action after deselecting since that's what confirms the task.
	selectedTransform = selectedObj->GetActorTransform();
	
	// Includes if the selected object is the core
	exclusions.Add(selectedObj);
	if(!selectedObj->IsA<ACubeCore>()) return;

	// Add the things that are connected to the core/connector to the things to ignore
	if(ACubeCore* obj = Cast<ACubeCore>(selectedObj))
	{
		exclusions.Append(obj->GetAttachedObjActors());
	}
}

void APlayerCharacter::SelectObject(const FHitResult& hit)
{
	// When the hold button is let go
	if(!holding)
	{
		Deselect();
		return;
	}
	
	// Can't select anything whilst not in the build phase...
	if(!buildPhase) return;

	// Don't do anything if the selected object is already valid
	if(IsValid(selectedObj)) return;
	
	if(!hit.bBlockingHit)
	{
		holding = false;
		return;
	}

	AActor* hitActor = hit.GetActor();
	
	if(!IsValid(hitActor))
	{
		holding = false;
		return;
	}

	// Cast to the selected object..
	if(APickupableMaster* obj = Cast<APickupableMaster>(hitActor))
	{
		// If the player can't pick it up... return.
		if(!obj->GetCanPickup() && (obj->IsA<ACubeCore>() && !obj->IsA<ACubeConnector>()) ) return;
		
		selectedObj = obj;
		selectedTransform = selectedObj->GetActorTransform();
		selectedObj->SetSelected(true);

		// Need to set the start position...
		// Only add a new action after deselecting since that's what confirms the task.
	}
	else holding = false;
	
	if(!IsValid(selectedObj))
	{
		holding = false;
		return;
	}

	// Includes if the selected object is the core
	exclusions.Add(selectedObj);
	if(!selectedObj->IsA<ACubeCore>()) return;

	// Add the things that are connected to the core/connector to the things to ignore
	if(ACubeCore* obj = Cast<ACubeCore>(selectedObj))
	{
		exclusions.Append(obj->GetAttachedObjActors());
	}
}

void APlayerCharacter::GroupSelect(const FHitResult& hit)
{
	if(!holding)
	{
		Deselect();
		return;
	}
	
	// Can't select anything whilst not in the build phase...
	if(!buildPhase) return;

	// Don't do anything if there's already something selected.
	if(IsValid(selectedObj)) return;

	// If the trace didn't hit anything don't do anything...
	if(!hit.bBlockingHit)
	{
		holding = false;
		return;
	}

	AActor* hitActor = hit.GetActor();

	// If the hit actor is invalid exit the function...
	if(!IsValid(hitActor))
	{
		holding = false;
		return;
	}

	// Try to cast to an object
	if(APickupableMaster* hitObj = Cast<APickupableMaster>(hitActor))
	{
		// If the cast is successful... Try to get its parent
		selectedObj = hitObj->GetParent();

		// If the object's parent is valid...
		if(IsValid(selectedObj))
		{
			// Its parent is always a core.
			// Prevent the core from being picked up if it's out of range
			if(const ACubeCore* objCore = Cast<ACubeCore>(selectedObj))
			{
				if(!objCore->IsA<ACubeConnector>()) if(!objCore->CanCollect())
				{
					// Return if can't pickup
					holding = false;
					selectedObj = 0;
					return;
				}
			}
		}

		// If the object doesn't have a parent....
		else selectedObj = hitObj;

		if(!IsValid(selectedObj)) return;

		selectedObj->SetGroupSelected(true);
	}
	else holding = false;

	if(!IsValid(selectedObj)) return;

	// Setting the undo/redo transform
	selectedTransform = selectedObj->GetActorTransform();
	
	// Setup mouse hit exclusions
	exclusions.Add(selectedObj);
	
	if(!selectedObj->IsA<ACubeCore>()) return;

	// Add the things that are connected to the core/connector to the things to ignore
	ACubeCore* obj = Cast<ACubeCore>(selectedObj);
	exclusions.Append(obj->GetAttachedObjActors());
}

void APlayerCharacter::Detach(const FHitResult& hit)
{
	// if the cast is successful...
	if(ACubeCore* hitCore = Cast<ACubeCore>(hit.GetActor()))
	{
		if(ACubeCore* parentCore = hitCore->GetCore())
		{
			const FTransform coreTransform = parentCore->GetTransform();

			// Don't create a new action if nothing was detached...
			if(!parentCore->DetachAll(true)) return;

			CreateTaskHistory("DETACH", parentCore, coreTransform, coreTransform);
			return;
		}
		
		const FTransform coreTransform = hitCore->GetTransform();
		if(!hitCore->DetachAll(true)) return;

		CreateTaskHistory("DETACH", hitCore, coreTransform, coreTransform);
		return;
	}

	// Otherwise try to cast to the pickupmaster and get its parent... so that it can detach all.. 
	if(const APickupableMaster* obj = Cast<APickupableMaster>(hit.GetActor()))
	{
		if(ACubeCore* parentCore = obj->GetCore())
		{
			const FTransform coreTransform = parentCore->GetTransform();
			if(!parentCore->DetachAll(true)) return;

			CreateTaskHistory("DETACH", parentCore, coreTransform, coreTransform);
		}
	}
}

void APlayerCharacter::MoveSelection(const FVector& mousePos)
{
	// Can't move anything whilst not in the build phase...
	if(!buildPhase)
	{
		if(selectedObj) Deselect();
		return;
	}
	
	if(selectedObj->IsA<ACubeCore>()) exclusions.AddUnique(selectedObj);
	else exclusions.AddUnique(selectedObj);

	selectedObj->SetActorLocation({mousePos.X, mousePos.Y, selectedObj->GetMesh()->GetComponentLocation().Z});
}

void APlayerCharacter::Deselect()
{
	if(!IsValid(selectedObj)) return;

	// Is the selected object a core?
	if(const ACubeCore* objCore = Cast<ACubeCore>(selectedObj))
	{
		// Is the obj not a connector... if it is... check if it can collect... if it can't return
		if(!objCore->IsA<ACubeConnector>()) if(!objCore->CanCollect())
		{
			holding = true;
			return;
		}
	}
	
	// Clear things to ignore.
	exclusions.Empty();
	holding = false;

	const EOperations operation = selectedObj->SetSelected(false);
	FName opName;
	
	switch (operation)
	{
		case EOperations::Attach:
			opName = "ATTACH";
			break;
		
		case EOperations::Detach:
			opName = "DETACH";
			break;
		
		case EOperations::Move:
			opName = "MOVE";
			break;
	}
	
	// Adding new action history entry.
	CreateTaskHistory(opName, selectedObj, selectedTransform, selectedObj->GetActorTransform());
	selectedObj = nullptr;
}
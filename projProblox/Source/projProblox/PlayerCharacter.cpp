// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

#include "CubeConnector.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APlayerCharacter::Undo()
{
	const FTask task = history->Undo();
	APickupableMaster* changedObj = task.obj;

	// If the task.object wasn't set... the task struct is invalid.
	if(!IsValid(changedObj))
	{
		Print("There aren't any tasks to undo...", 5);
		return;
	}
	
	changedObj->ManualSetSelected(false);

	//Deselect()
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
			changedObj->Reattach(task.startTransform);
			break;
		
		// Undo the move operation
		case EOperations::Move:
			// Don't need to do anything since the object's transform will be elsewhere.
			break;
	}

	// The start transform will always be used whenever undoing something...
	changedObj->SetActorLocation(task.startTransform.GetLocation());
	changedObj->SetActorRotation(task.startTransform.Rotator());
	changedObj->RemoveVelocity();
	Print("Undoing...", 4)
}

void APlayerCharacter::Redo()
{
	const FTask task = history->Redo();
	if(!IsValid(task.obj))
	{
		Print("There aren't any tasks to redo...", 5);
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
			changedObj->Reattach(task.endTransform);
			break;
			
		// Redo the detach operation
		case EOperations::Detach:
			changedObj->Detach();
			break;
			
		// Redo the move operation
		case EOperations::Move:
			// Don't need to do anything since the object's transform will be elsewhere.
		break;
	}
	
	// The end transform will always be used whenever redoing something...
	changedObj->SetActorLocation(task.endTransform.GetLocation());
	changedObj->SetActorRotation(task.endTransform.Rotator());
	changedObj->RemoveVelocity();
	Print("Redoing...", 4)
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if(ACubeCore* cubeCore = Cast<ACubeCore>(UGameplayStatics::GetActorOfClass(GetWorld(), ACubeCore::StaticClass()))) core = cubeCore;
	if(!IsValid(core))
	{
		Print("Core Invalid... ~ player", 5);
		return;
	}
	
	core->onGameEnd.AddDynamic(this, &APlayerCharacter::EndGame);

	history = NewObject<UActionHistory>();
}

void APlayerCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	// if(history) history->PrintTaskIndex(.1);
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void APlayerCharacter::SelectObject(const FHitResult& hit)
{
	// When the hold button is let go
	if(!holding)
	{
		Deselect();
		return;
	}

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
		selectedObj->SetSelected(true);

		// Need to set the start position...
		// Only add a new action after deselecting since that's what confirms the task.
		selectedTransform = selectedObj->GetTransform();
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

			const FTask newTask = {"DETACH", parentCore, coreTransform, coreTransform, EOperations::Detach};
			history->NewAction(newTask);
			return;
		}
		
		const FTransform coreTransform = hitCore->GetTransform();
		if(!hitCore->DetachAll(true)) return;

		const FTask newTask = {"DETACH", hitCore, coreTransform, coreTransform, EOperations::Detach};
		history->NewAction(newTask);
		return;
	}

	// Otherwise try to cast to the pickupmaster and get its parent... so that it can detach all.. 
	if(const APickupableMaster* obj = Cast<APickupableMaster>(hit.GetActor()))
	{
		if(ACubeCore* parentCore = obj->GetCore())
		{
			const FTransform coreTransform = parentCore->GetTransform();
			if(!parentCore->DetachAll(true)) return;


			const FTask newTask = {"DETACH", parentCore, coreTransform, coreTransform, EOperations::Detach};
			history->NewAction(newTask);
		}

	}

}

void APlayerCharacter::GroupSelect(const FHitResult& hit)
{
	if(!holding)
	{
		Deselect();
		return;
	}

	// Don't do anything if there's already something selected.
	if(IsValid(selectedObj)) return;

	// If the trace didn't hit anything don't do anything...
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
	
	if(APickupableMaster* hitObj = Cast<APickupableMaster>(hitActor))
	{
		selectedObj = hitObj->GetParent();

		// If the hitObj (which has already successfully been casted to) is valid...
		if(IsValid(selectedObj))
		{
			// Prevent the core from being picked up if it's out of range
			if(const ACubeCore* objCore = Cast<ACubeCore>(selectedObj))
			{
				if(!objCore->IsA<ACubeConnector>()) if(!objCore->CanCollect())
				{
					holding = false;
					selectedObj = 0;
					return;
				}
			}
		}

		// Otherwise just select normally
		else selectedObj = hitObj;

		if(!IsValid(selectedObj)) return;

		selectedObj->SetGroupSelected(true);
	}
	else holding = false;

	if(!IsValid(selectedObj)) return;
	
	// Setup mouse hit exclusions
	exclusions.Add(selectedObj);
	
	if(!selectedObj->IsA<ACubeCore>()) return;

	// Add the things that are connected to the core/connector to the things to ignore
	ACubeCore* obj = Cast<ACubeCore>(selectedObj);
	exclusions.Append(obj->GetAttachedObjActors());
}

void APlayerCharacter::MoveSelection(const FVector& mousePos)
{
	if(selectedObj->IsA<ACubeCore>()) exclusions.AddUnique(selectedObj);
	else exclusions.AddUnique(selectedObj);

	selectedObj->GetMesh()->SetWorldLocation({mousePos.X, mousePos.Y, selectedObj->GetMesh()->GetComponentLocation().Z});
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
	const FTask newTask {opName, selectedObj, selectedTransform, selectedObj->GetTransform(),operation};
	history->NewAction(newTask);
	
	selectedObj = nullptr;

	// Clear things to ignore once not selecting anything.
	exclusions.Empty();
}
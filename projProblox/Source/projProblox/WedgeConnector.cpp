// Created by Dean Atkinson-Walker 2024

#include "WedgeConnector.h"
#include "WedgeSocketInfo.h"
#include "Wheel.h"


AWedgeConnector::AWedgeConnector()
{
	PrimaryActorTick.bCanEverTick = true;

	
	// Disable anything to do with Thing collection
	thingCollector->SetGenerateOverlapEvents(false);
	thingCollector->SetBoxExtent({});
	thingCollector->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
	thingHomer->SetGenerateOverlapEvents(false);
	thingHomer->SetBoxExtent({});
	thingHomer->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AWedgeConnector::ApplyOffset(ACubeCore* core)
{
	// If it's the actual core use a smaller offset
	if(!core) return;

	const float distance = core->IsA<ACubeConnector>()? 50 : 25;
	attachOffset = raySocket == "DIAG" ? distance * .1f : distance;

	Print(FString::SanitizeFloat(attachOffset), 3)
	SetActorRelativeLocation({attachOffset,0,0});
}

void AWedgeConnector::GhostPlacement()
{
	Print("Werdge", .1f)

	if(ghostVisible || isAttached) return;
	if(!parentCore) return;

	silhouette->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	
	silhouette->SetHiddenInGame(false);

	FRotator alignedRotation = FRotator::ZeroRotator;

	const bool isDiag = raySocket == "DIAG";
	
	if (isDiag) alignedRotation = FRotator(135.0f, 0.0f, 0.0f);
	else if (raySocket == "DOWN") alignedRotation = FRotator(180.0f, 180.0f, 0.0f);
	else if (raySocket == "BACK") alignedRotation = FRotator::ZeroRotator;

	
	// Fixes the rotation depending on the orientation of the cube
	if(!isDiag && abs(parentCore->GetActorUpVector().Z) < .5f)
	{
		// If the cube is not oriented correctly, adjust the rotation by finding the rotation difference between the cube's forward direction
		// and the global forward direction.
		// Cancels out the current orientation of the cube by getting the delta rotation of its original rot to its current
		if(tempSocket == "FRONT" || tempSocket == "BACK") alignedRotation += FRotator(0,0,180);
		else if (tempSocket == "LEFT") alignedRotation += FRotator(-90,90,0);
		else if (tempSocket == "RIGHT") alignedRotation += FRotator(90,90,0);
		else if (tempSocket == "UP") alignedRotation += FRotator(0, 180,0);
		else if(tempSocket == "DOWN") alignedRotation += FRotator(0, 180, 0);
	}
	
	// Get the current rotation of the actor and round it
	const FRotator currentRot = {0, appliedYaw, 0};
	const FRotator roundRot = RoundRotation(currentRot);
	
	// Attach the actor to the parent with the target socket
	silhouette->AttachToComponent(parentCore->GetMesh(), ghostRules, tempSocket);

	// Apply the aligned rotation to the actor (assuming socket is attached)
	silhouette->SetRelativeRotation(alignedRotation);

	const UStaticMeshComponent* parentMesh = parentCore->GetMesh();
	const bool flatFace = tempSocket != "DIAG";
	const bool canDiagRot = flatFace && abs(parentMesh->GetSocketRotation(tempSocket).Vector().Z) > .8f;
	
	// Add the rotation the wedge had before doing the attachment (if not the hypotenuse side)...
	if(!isDiag || canDiagRot) silhouette->AddWorldRotation({0, roundRot.Yaw + RoundRotation(silhouette->GetComponentRotation()).Yaw, 0});

	const float distance = parentCore->IsA<ACubeConnector>()? 50 : 25;
	attachOffset = isDiag ? distance * .1f : distance;

	silhouette->SetRelativeLocation({attachOffset,0,0});
}

void AWedgeConnector::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if(!selected) return;

	const FRotator currentRot = {0, appliedYaw, 0};
	const FRotator roundRot = RoundRotation(currentRot);
	// const FRotator currentRot = GetTransform().GetRotation().Rotator();
	// const FRotator roundRot = RoundRotation(currentRot);

	Print("current: " + FString::SanitizeFloat(currentRot.Yaw), 3)
	Print("rounded: " + FString::SanitizeFloat(roundRot.Yaw), 3)
}
//
void AWedgeConnector::SetSelected(const bool value)
{
	selected = value;

	const AActor* self = this;
	TArray<APickupableMaster*> children;
	GetDescendents(self, children);
	
	// Detach from its components if selected
	if(selected)
	{
		canPlace = true;
		Detach();
		
		for(const auto& obj : children)
		{
			if(obj->IsA<AWheel>()) Cast<AWheel>(obj)->SetParentDominates(true);
		}
		return;
	}

	// When unselected....
	ResetGhost();
	
	for(const auto& obj : children)
	{
		if(obj->IsA<AWheel>()) Cast<AWheel>(obj)->SetParentDominates(false);
	}
	
	// Rotate/Manipulate self when it hits the core
	if(!IsValid(parentCore)) return;

	const bool isDiag = raySocket == "DIAG";
	attachedSocket = tempSocket;

	
	//////////////////////////// THE BLUEPRINT ////////////////////////////
	
	// Define the initial rotation based on the raySocket
	FRotator alignedRotation = FRotator::ZeroRotator;

	if (isDiag) alignedRotation = FRotator(135.0f, 0.0f, 0.0f);
	else if (raySocket == "DOWN") alignedRotation = FRotator(180.0f, 180.0f, 0.0f);
	else if (raySocket == "BACK") alignedRotation = FRotator::ZeroRotator;

	// Fixes the rotation depending on the orientation of the cube
	if(!isDiag && abs(parentCore->GetActorUpVector().Z) < .5f)
	{
		// If the cube is not oriented correctly, adjust the rotation by finding the rotation difference between the cube's forward direction
		// and the global forward direction.
		// Cancels out the current orientation of the cube by getting the delta rotation of its original rot to its current
		if(attachedSocket == "FRONT" || attachedSocket == "BACK") alignedRotation += FRotator(0,0,180);
		else if (attachedSocket == "LEFT") alignedRotation += FRotator(-90,90,0);
		else if (attachedSocket == "RIGHT") alignedRotation += FRotator(90,90,0);
		else if (attachedSocket == "UP") alignedRotation += FRotator(0, 180,0);
		else if(attachedSocket == "DOWN") alignedRotation += FRotator(0, 180, 0);
	}
	
	// Get the current rotation of the actor and round it
	const FRotator currentRot = {0, appliedYaw, 0};
	const FRotator roundRot = RoundRotation(currentRot);
	
	AttachToActor(parentCore, attachRules, attachedSocket);

	// Doesn't work properly.. but close enough
	const FRotator relativeRot = FRotator::ZeroRotator;

	// Apply the aligned rotation to the actor (assuming socket is attached)
	SetActorRelativeRotation(relativeRot + alignedRotation);

	const UStaticMeshComponent* parentMesh = parentCore->GetMesh();
	const bool flatFace = attachedSocket != "DIAG";
	const bool canDiagRot = flatFace && abs(parentMesh->GetSocketRotation(attachedSocket).Vector().Z) > .8f;
	
	// Add the rotation the wedge had before doing the attachment (if not the hypotenuse side)...
	if(!isDiag || canDiagRot) AddActorWorldRotation({0, roundRot.Yaw + RoundRotation(GetActorRotation()).Yaw, 0});

	///////////////////////////////////////////////////////////////////////

	ApplyOffset(parentCore);

	parentCore->AddAttachment(this, attachedSocket);
	isAttached = true;
}

void AWedgeConnector::SetAbilityActive(bool value)
{
	Super::SetAbilityActive(value);
}

void AWedgeConnector::BeginPlay()
{
	placeRange = 100;
	attachOffset = 5;

	socketInfo = NewObject<UWedgeSocketInfo>();
	AdjustRange();
}
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

void AWedgeConnector::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if(!selected) return;
	const FRotator currentRot = GetActorRotation();
	const FRotator roundRot = RoundRotation(currentRot);

	Print("current: " + FString::SanitizeFloat(currentRot.Yaw), 3)
	Print("rounded: " + FString::SanitizeFloat(roundRot.Yaw), 3)
}

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
	for(const auto& obj : children)
	{
		if(obj->IsA<AWheel>()) Cast<AWheel>(obj)->SetParentDominates(false);
	}
	
	// Rotate/Manipulate self when it hits the core
	if(!IsValid(parentCore)) return;

	const bool isDiag = raySocket == "DIAG";
	attachedSocket = tempSocket;

	
	//////////////////////////// THE BLUEPRINT ////////////////////////////
	/// just need to align with the socket rotation.........
	/// The front,back,left,right sides of the cube attach properly when using the "BACK" and "DOWN" raySockets of the wedge.
	/// NONE OF THE DIAGNAL STUFF WORKS ... THE TOP AND BOTTOM FACES OF THE CUBE DON'T WORK PROPERLY.

	// Calculate the rotation based on the alignment of the wedge with the cube's faces
	FRotator alignedRotation = FRotator::ZeroRotator;

	const FRotator currentRot = GetActorRotation();
	const FRotator roundRot = RoundRotation(currentRot);
	
	if (raySocket == "DIAG") {
		// Align with the hypotenuse face
		// Calculate the rotation to align with the hypotenuse face
		// Assuming the wedge's local X-axis aligns with the edge to be aligned with the hypotenuse
		alignedRotation = FRotator(135.0f, 0, 0); // Rotate 45 degrees around Z-axis
	} else if (raySocket == "DOWN") {
		// Align with the opposite face
		alignedRotation = FRotator(180.0f, 180.0f, 0); // Rotate 180 degrees around X-axis
	} else if (raySocket == "BACK") {
		// Align with the adjacent face
		// Assuming the wedge's local X-axis aligns with the edge to be aligned with the adjacent face
		alignedRotation = FRotator(0.0f, 0, 0); // Rotate 90 degrees around Y-axis
	} else {
		// Handle other cases if needed
	}
//
	// Attach the actor to the parent with the target socket
	AttachToActor(parentCore, attachRules, attachedSocket);
	// Apply the combined rotation to the actor (assuming socket is attached)
	SetActorRelativeRotation(alignedRotation);

	AddActorWorldRotation({0, roundRot.Yaw, 0});
//
	///////////////////////////////////////////////////////////////////////

	// If it's the actual core use a smaller offset
	attachOffset = !parentCore->IsA<ACubeConnector>()? 35 : 50;
	attachOffset *= isDiag? .1f : 1;
	ApplyOffset();

	parentCore->AddAttachment(this, attachedSocket);
}

void AWedgeConnector::SetAbilityActive(bool value)
{
	Super::SetAbilityActive(value);
}

void AWedgeConnector::BeginPlay()
{
	placeRange = 100;
	attachOffset = 50;

	socketInfo = NewObject<UWedgeSocketInfo>();
	AdjustRange();
}
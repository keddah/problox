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
	/// Works almost perfectly. Just the down and back faces don't round properly (it's aligned but doesn't select the right direction correctly)... 
	
	FRotator alignedRotation = FRotator::ZeroRotator;

	const FRotator currentRot = GetActorRotation();
	const FRotator roundRot = RoundRotation(currentRot);

	// Has to be done manually. there's no other way0_0
	if (raySocket == "DIAG") alignedRotation = FRotator(135.0f, 0, 0); 
	else if (raySocket == "DOWN") alignedRotation = FRotator(180.0f, 180.0f, 0); 
	else if (raySocket == "BACK") alignedRotation = FRotator(0.0f, 0, 0); 
	
	// Attach the actor to the parent with the target socket
	AttachToActor(parentCore, attachRules, attachedSocket);
	
	// Apply the combined rotation to the actor (assuming socket is attached)
	SetActorRelativeRotation(alignedRotation);

	AddActorWorldRotation({0, roundRot.Yaw, 0});
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
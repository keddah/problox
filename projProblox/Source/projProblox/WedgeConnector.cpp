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
	const FTransform socketTransform = parentCore->GetMesh()->GetSocketTransform(attachedSocket);
	const FTransform rayTransform = objMesh->GetSocketTransform(raySocket);	

	// Round the actor's rotation based on the threshold (optional)
	const float AngleThreshold = isDiag ? 45.0f : 90.0f;
	FRotator rot = GetActorRotation();

	// Get forward vectors of parent and actor in world space
	const FVector cubeForward = parentCore->GetActorForwardVector();
	const FVector thisForward = GetActorForwardVector();

	// Calculate dot product between parent and actor forward vectors
	const float dot = FVector::DotProduct(cubeForward, thisForward);

	// Calculate axis of rotation (assuming parent's X is forward)
	FVector rotAxis = FVector::CrossProduct(cubeForward, thisForward);

	// Handle potential zero-length axis case
	if (rotAxis.IsNearlyZero())
	{
	// Use a small arbitrary axis to avoid division by zero (adjust as needed)
	rotAxis = FVector(1.0f, 0.0f, 0.0f);
	}

	// Calculate angle based on dot product (consider potential negative values)
	const float angle = FMath::Acos(FMath::Clamp(dot, -1.0f, 1.0f)) * (dot >= 0.0f ? 1.0f : -1.0f);

	FRotator relativeRot;
	if (rotAxis.IsNearlyZero(KINDA_SMALL_NUMBER)) relativeRot = FRotator::ZeroRotator;
	else
	{
		// Create a temporary rotator for individual adjustments
		FRotator tempRot = FRotator::ZeroRotator;

		// Apply pitch rotation based on angle and axis
		tempRot.Pitch = angle;
		relativeRot = relativeRot + tempRot;
	}

	const FRotator allRot = RoundRotation(rot + relativeRot, AngleThreshold);

	// Attach the actor to the parent with the target socket
	AttachToActor(parentCore, attachRules, attachedSocket);

	// Apply the combined rotation to the actor (assuming socket is attached)
	SetActorRelativeRotation(allRot);

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
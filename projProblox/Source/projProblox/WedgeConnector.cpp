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

void AWedgeConnector::BeginPlay()
{
	Super::BeginPlay();
	
	// Don't use the up, right, left arrows...
	upArrow->SetHiddenInGame(true);
	leftArrow->SetHiddenInGame(true);
	rightArrow->SetHiddenInGame(true);
	
	placeRange = 100;
	attachOffset = 5;

	socketInfo = NewObject<UWedgeSocketInfo>();
	AdjustRange();
}

void AWedgeConnector::ApplyOffset(const ACubeCore* core)
{
	// If it's the actual core use a smaller offset
	if(!core) return;

	const float distance = core->IsA<ACubeConnector>()? 50 : 25;
	attachOffset = raySocket == "DIAG" ? distance * .1f : distance;

	SetActorRelativeLocation({attachOffset,0,0});
}

void AWedgeConnector::GhostPlacement()
{
	if(!parentCore) return;

	silhouette->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	silhouette->SetHiddenInGame(false);

	const UStaticMeshComponent* parentMesh = parentCore->GetMesh();

	///////////// Rotation (ISN'T CONSISTENT)
	///	ONCE THE TARGET CORE IS ROTATED TO A DIFFERENT ORIENTATION... HORIZONTAL PLACEMENT DOESN'T WORK PROPERLY
	///
	// Only allow directional placement of wedges when they're above the cube / wedge and not on a diagonal face.
	const bool flatFace = tempSocket != "DIAG";
	const bool isDiag = raySocket == "DIAG";
	const bool above = parentCore->GetActorLocation().Z + parentCore->GetActorRelativeScale3D().X * (isDiag? 50: 100) <= GetActorLocation().Z;	// 100 = the size of the core 
	const bool canDiagRot = isDiag && flatFace && above;
	
	float roundedYaw = RoundRotation( {0, appliedYaw, 0}).Yaw;
	const FRotator currentRot = GetActorRotation();
	const FRotator roundRot = RoundRotation(currentRot);

	const FRotator originParentRot = parentCore->GetActorRotation();
	const FRotator originSocketRot = parentMesh->GetSocketRotation(tempSocket);

	if(parentCore->IsA<AWedgeConnector>())
	{
		// Attach the actor to the parent with the target socket
		silhouette->AttachToComponent(parentCore->GetMesh(), ghostRules, tempSocket);
		
		// The pitch is always 135 if attaching to a hyp side... otherwise.
		const float pitch = isDiag? 135.0f : flatFace? roundRot.Pitch : 0;
		silhouette->SetRelativeRotation({pitch, 0, 0});
	}

	else
	{
		// Temporarily set the parent core's rotation to the socket so that the orientation problem goes away..
		// then reset the rotation at the end.
		parentCore->SetActorRotation(originSocketRot);

		// Attach the actor to the parent with the target socket
		silhouette->AttachToComponent(parentCore->GetMesh(), ghostRules, tempSocket);

		// Calculate relative rotation based on parent's rotation
		const FRotator relativeRot = GetActorRotation() - parentCore->GetActorRotation();
		
		// Is the wedge trying to attach from a non-hypotenuse side..?
		if(!isDiag)
		{
			const bool flip = raySocket == "DOWN" && tempSocket != "DIAG";
			silhouette->SetRelativeRotation(RoundRotation(relativeRot) + FRotator(roundRot.Pitch,flip? 180: 0,0));
		}
		else silhouette->SetRelativeRotation({135,0,0});
	}

	// Only allow directional placement of wedges if....
	if((!isDiag && above) || canDiagRot)
	{
		//Fixes the rotation when the wedge is pointing on the forward axis.
		if(roundedYaw == 0) roundedYaw = 180;
		else if(roundedYaw == 180) roundedYaw = 0;
		
		// Add the rotation the wedge had before doing the attachment (if not the hypotenuse side)...
		// But don't do this if the attached socket is the diagonal face of a wedge
		if(canDiagRot)
		{
			silhouette->AddWorldRotation({0, roundedYaw + RoundRotation(parentCore->GetActorForwardVector().Rotation()).Yaw, 0});
		}
		
		else if(flatFace) silhouette->SetRelativeRotation({0,0, roundedYaw});
	}

	///////////// Location
	const float distance = parentCore->IsA<ACubeConnector>()? 50 : 25;
	attachOffset = isDiag ? distance * .1f : distance;
	silhouette->SetRelativeLocation({attachOffset,0,0});
	
	parentCore->SetActorRotation(originParentRot);
}

void AWedgeConnector::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AWedgeConnector::SetHideIndicator(const bool hide)
{
	indicator->SetHiddenInGame(hide);
	backArrow->SetHiddenInGame(hide);
	downArrow->SetHiddenInGame(hide);
}

void AWedgeConnector::SetupIndicator()
{
	// indicator->SetMaterial(0, indicatorMat);
	// backArrow->SetMaterial(0, indicatorMat);
	// downArrow->SetMaterial(0, indicatorMat);

	indicator->ArrowColor.A = .5f;
	backArrow->ArrowColor.A = .5f;
	downArrow->ArrowColor.A = .5f;

	
	indicator->ArrowLength = placeRange;
	backArrow->ArrowLength = placeRange;
	downArrow->ArrowLength = placeRange;

	// diag
	FRotator rot = UKismetMathLibrary::MakeRotFromX({.5f,0,.5f});
	indicator->SetRelativeRotation(rot);

	// back
	rot = UKismetMathLibrary::MakeRotFromX({-1,0,0});
	backArrow->SetRelativeRotation(rot);

	// down
	rot = UKismetMathLibrary::MakeRotFromX({0,0,-1});
	downArrow->SetRelativeRotation(rot);

	SetHideIndicator(true);
}

void AWedgeConnector::SetSelected(const bool value)
{
	selected = value;
	SetHideIndicator(!selected);

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
	// FRotator alignedRotation = FRotator::ZeroRotator;
	//
	// if (isDiag) alignedRotation = FRotator(135.0f, 0.0f, 0.0f);
	// else if (raySocket == "DOWN") alignedRotation = FRotator(180.0f, 180.0f, 0.0f);
	// else if (raySocket == "BACK") alignedRotation = FRotator::ZeroRotator;
	//
	// // Fixes the rotation depending on the orientation of the cube
	// if(!isDiag && abs(parentCore->GetActorUpVector().Z) < .5f)
	// {
	// 	// If the cube is not oriented correctly, adjust the rotation by finding the rotation difference between the cube's forward direction
	// 	// and the global forward direction.
	// 	// Cancels out the current orientation of the cube by getting the delta rotation of its original rot to its current
	// 	if(attachedSocket == "FRONT" || attachedSocket == "BACK") alignedRotation += FRotator(0,0,180);
	// 	else if (attachedSocket == "LEFT") alignedRotation += FRotator(-90,90,0);
	// 	else if (attachedSocket == "RIGHT") alignedRotation += FRotator(90,90,0);
	// 	else if (attachedSocket == "UP") alignedRotation += FRotator(0, 180,0);
	// 	else if(attachedSocket == "DOWN") alignedRotation += FRotator(0, 180, 0);
	// 	else if(attachedSocket == "DIAG") alignedRotation = FRotator(45,0, 0);
	// }
	//
	// // Get the current rotation of the actor and round it
	// const FRotator currentRot = {0, appliedYaw, 0};
	// const FRotator roundRot = RoundRotation(currentRot);

	SetActorLocation(silhouette->GetComponentLocation());
	SetActorRotation(silhouette->GetComponentRotation());
	
	AttachToActor(parentCore, attachRules, attachedSocket);
	//
	// // Doesn't work properly.. but close enough
	// const FRotator relativeRot = FRotator::ZeroRotator;
	//
	// // Apply the aligned rotation to the actor (assuming socket is attached)
	// SetActorRelativeRotation(relativeRot + alignedRotation);
	//
	// const UStaticMeshComponent* parentMesh = parentCore->GetMesh();
	// const bool flatFace = attachedSocket != "DIAG";
	// const bool canDiagRot = flatFace && abs(parentMesh->GetSocketRotation(attachedSocket).Vector().Z) > .8f;
	//
	// // Add the rotation the wedge had before doing the attachment (if not the hypotenuse side)...
	// if(attachedSocket != "DIAG" && (!isDiag || canDiagRot)) AddActorWorldRotation({0, roundRot.Yaw + RoundRotation(GetActorRotation()).Yaw, 0});
	//
	// ///////////////////////////////////////////////////////////////////////
	//
	// ApplyOffset(parentCore);

	parentCore->AddAttachment(this, attachedSocket);
	isAttached = true;
}

void AWedgeConnector::SetAbilityActive(bool value)
{
	Super::SetAbilityActive(value);
}
/**************************************************************************************************************
* Wedge Connector - Code
* 
* The code file for wedge connector (one of the connector classes). Gives functionality to the declared functions. Deactivates the collision collection boxes that.
* were inherited by the cube connector class (which was inherited from the cube core). Also overrides some of the inherited functions so that they work as intended
* for how this actor is supposed to act.
*
* PROBLEMS:
*	The ghost placement isn't always perfect... If the thing it's trying to attach to is slightly at an angle the place rotation is off (ignore the roll/x axis??)
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "WedgeConnector.h"
#include "./projProblox/Pickupables/Cores/SocketInfo/WedgeSocketInfo.h"


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
	leftArrow->DestroyComponent();
	rightArrow->DestroyComponent();
	upArrow->DestroyComponent();

	Super::BeginPlay();
	
	socketInfo = NewObject<UWedgeSocketInfo>();
}

void AWedgeConnector::ApplyOffset(const ACubeCore* core)
{
	// If it's the actual core use a smaller offset
	if(!core) return;

	SetActorRelativeLocation({GetAttachOffset(*core),0,0});
}

void AWedgeConnector::GhostPlacement()
{
	RemoveVelocity();

	if(!parentCore) return;

	silhouette->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	silhouette->SetHiddenInGame(false);

	const UStaticMeshComponent* parentMesh = parentCore->GetMesh();
	const bool isDiag = raySocket == "DIAG";
	const bool attachDiag = attachedSocket == "DIAG";

	silhouette->AttachToComponent(parentCore->GetMesh(), ghostRules, attachedSocket);

	///////////// Location
	silhouette->SetRelativeLocation({GetAttachOffset(*parentCore),0,0});

	
	///////////// Rotation
	// If the diagonal sides of 2 wedges are trying to attach...
	if(isDiag)
	{
		silhouette->SetRelativeRotation({135, 0, 0});
		return;
	}
	// if(attachDiag && isDiag)
	// {
	// 	// Always make the slopes touch each other.
	// 	silhouette->SetRelativeRotation({135,0,0});
	// 	SetGhostBlocked();
	// 	return;
	// }
	//
	// const FRotator socketRot = parentMesh->GetSocketRotation(attachedSocket);
	// FRotator attachRot = DiagRoundRot(GetActorRotation(), socketRot, isDiag);
	// silhouette->SetWorldRotation(attachRot);
	//
	// // Ignore if the X and Y vectors aren't low...
	// constexpr float aboveThreshold = .075f;
	// const bool upright = abs(socketRot.Vector().X) < aboveThreshold && abs(socketRot.Vector().Y) < aboveThreshold;
	//
	// // Whether the attached socket is the diagonal side of a wedge...
	const unsigned short rounder = isDiag? 45 : 90; 
	const FRotator relativeRot = mesh->GetSocketTransform(raySocket).GetRelativeTransform(parentCore->GetActorTransform()).Rotator();
	//
	// // Rounded is true if the xyz relative rotations are factors of the rounder (45/90)
	const bool rounded = FMath::RoundToInt(relativeRot.Roll) % rounder == 0 && FMath::RoundToInt(relativeRot.Pitch) % rounder == 0 && FMath::RoundToInt(relativeRot.Yaw) % rounder == 0;  
	// if(!rounded) silhouette->SetRelativeRotation(RoundRotation(silhouette->GetRelativeRotation(), -float(rounder)));
	//
	// if(attachDiag && !upright) attachRot.Yaw = socketRot.Yaw;
	// silhouette->SetWorldRotation(attachRot);
	//
	// // Ensure that when above an object and the raySocket is the hypotenuse side, the hyp side always faces the bottom but the other axis can still be used..
	// if(isDiag && upright)
	// {
	// 	// Basically just used to round the hypotenuse side...
	// 	FRotator roundRot = RoundAxis(silhouette->GetComponentRotation(), parentCore->GetActorRotation(), {-45,90,90});
	// 	roundRot.Pitch = FMath::Clamp(roundRot.Pitch, -45, 0);
	//
	// 	const FRotator roundYaw = RoundRotation(silhouette->GetComponentRotation(), parentCore->GetActorRotation());
	// 	silhouette->SetWorldRotation({roundRot.Pitch, roundYaw.Yaw, roundRot.Roll});
	// 	SetGhostBlocked();
	// 	return;
	// }
	//
	// else if(isDiag)
	// {
	// 	silhouette->SetRelativeRotation({135,0,0});
	// 	SetGhostBlocked();
	// 	return;
	// }
	//
	// // If the current rotation isn't aligned with the socket rotation (the relative rotation since it's already attached)...
	// // just round the relative rotation to either 45 or 90 depending on whether the attaching socket isDiag.
	if(!rounded) silhouette->SetRelativeRotation(RoundRotation(silhouette->GetRelativeRotation(), -float(rounder)));
	// SetGhostBlocked();
}

void AWedgeConnector::GhostSnapRotate(const FString& keypress)
{
	// If rotating horizontally use 90 degree turns.
	const float turn = keypress == "Q" ? -90 : 90;
		
	// Horizontal rotations
	if(raySocket == "DOWN" || raySocket == "BACK")
	{
		const FRotator relRot = silhouette->GetRelativeRotation();
		silhouette->SetRelativeRotation({0,0, relRot.Roll});
		silhouette->AddRelativeRotation({0,0,turn});
	}

	if(!parentCore) return;
	silhouette->SetRelativeLocation({GetAttachOffset(*parentCore),0,0});
}

void AWedgeConnector::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}
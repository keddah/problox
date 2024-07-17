/**************************************************************************************************************
* Cube Connector - Code
* 
* The code file for cube connector (one of the connector classes). Gives functionality to the declared functions. Deactivates the collision collection boxes that.
* were inherited by the cube core). Also overrides some of the inherited functions so that they work as intended for how this actor is supposed to act.
*
* PROBLEMS:
*	The ghost placement isn't always perfect... If the thing it's trying to attach to is slightly at an angle the place rotation is off
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/

#include "CubeConnector.h"
#include "WedgeConnector.h"


ACubeConnector::ACubeConnector()
{
	backArrow = CreateDefaultSubobject<UArrowComponent>("Backwards Arrow");
	backArrow->SetupAttachment(mesh);

	leftArrow = CreateDefaultSubobject<UArrowComponent>("Left Arrow");
	leftArrow->SetupAttachment(mesh);

	rightArrow = CreateDefaultSubobject<UArrowComponent>("Right Arrow");
	rightArrow->SetupAttachment(mesh);

	upArrow = CreateDefaultSubobject<UArrowComponent>("Upwards Arrow");
	upArrow->SetupAttachment(mesh);

	downArrow = CreateDefaultSubobject<UArrowComponent>("Downwards Arrow");
	downArrow->SetupAttachment(mesh);
}

void ACubeConnector::Placement(ACubeCore* core, const FName& socket)
{
	if(!core)
	{
		Print("The given core was invalid... ~ OtherPlacement.", 7)
		return;
	}

	parentCore = core;
	if(socket != NAME_None) attachedSocket = socket;
	SetShowMesh(false);
	GhostPlacement();
	GhostSnapRotate("Q");
}

void ACubeConnector::GhostPlacement()
{
	RemoveVelocity();
	
	if(!parentCore) return;

	silhouette->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	silhouette->SetHiddenInGame(false);

	const UStaticMeshComponent* parentMesh = parentCore->GetMesh();

	// Attach the actor to the parent with the target socket
	silhouette->AttachToComponent(parentCore->GetMesh(), ghostRules, attachedSocket);

	///////////// Location
	silhouette->SetRelativeLocation({GetAttachOffset(*parentCore),0,0});

	
	///////////// Rotation
	const bool attachDiag = attachedSocket == "DIAG";

	// Have to realign the socket rotation with another axis
	const FRotator socketRot = DiagRoundRot(GetActorRotation(), parentMesh->GetSocketRotation(attachedSocket), attachDiag);

	silhouette->SetWorldRotation(socketRot);

	// All this to fix the rotation....
	const FRotator relativeRot = mesh->GetSocketTransform(raySocket).GetRelativeTransform(parentCore->GetActorTransform()).Rotator();
	
	// Whether or not the attached socket is the diagonal side of a wedge...
	const unsigned short rounder = attachDiag? 45 : 90; 
	
	// Rounded is true if the xyz relative rotations are factors of 45 (rounded to 45 degrees).
	const bool rounded = FMath::RoundToInt(relativeRot.Roll) % rounder == 0 && FMath::RoundToInt(relativeRot.Pitch) % rounder == 0 && FMath::RoundToInt(relativeRot.Yaw) % rounder == 0;  

	// If the current rotation isn't aligned with the socket rotation (the relative rotation since it's already attached)...
	// just round the relative rotation to either 45 or 90 depending on whether the attaching socket isDiag.
	// Ensures that the final rotation is always aligned.
	if(!rounded) silhouette->SetRelativeRotation(RoundRotation(silhouette->GetRelativeRotation(), -float(rounder)));
}

float ACubeConnector::GetAttachOffset(const APickupableMaster& attachee)
{
	float distance;

	// Different offsets depending on what connector it attaches to...
	if(attachee.IsA<ACubeConnector>()) distance = 52.5f; 
	else if(attachee.IsA<AWedgeConnector>()) distance = 55;
	else if(attachee.IsA<ACubeCore>()) distance = 35;
	else distance = 50;

	attachOffset = distance;
	return attachOffset;
}

void ACubeConnector::FindOppositeSocket()
{
	if(attachedSocket == "FRONT") oppositeSocket = "BACK";
	else if(attachedSocket == "BACK") oppositeSocket = "FRONT";
	else if(attachedSocket == "LEFT") oppositeSocket = "RIGHT";
	else if(attachedSocket == "RIGHT") oppositeSocket = "LEFT";
	else if(attachedSocket == "UP") oppositeSocket = "DOWN";
	else if(attachedSocket == "DOWN") oppositeSocket = "UP";
}

void ACubeConnector::Detach(bool playSound, const float _detachForce, const float _detachAngularForce)
{
	ResetGhost();
	
	if(!parentCore)
	{
		Print("Couldn't detach... parent was invalid..", 4)
		return;
	}

	SetAbilityActive(false);

	SetHideOutlineMesh(true);
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	
	// Enable physics
	mesh->SetSimulatePhysics(true);
	const FVector launchDir = UKismetMathLibrary::GetForwardVector(parentCore->GetMesh()->GetSocketRotation(attachedSocket));

	// Ensure that the mesh is showing
	SetShowMesh(true);

	AddVelocity(launchDir * _detachForce);
	mesh->AddTorqueInRadians(FMath::VRand() * _detachAngularForce, "", true);
	
	parentCore->RemoveAttachment(attachedSocket);
	silhouette->SetupAttachment(mesh);
	
	// Only play the detach sound if there was a parent core
	if(soundPlayer && playSound) soundPlayer->PlayDetach();
	else if(!soundPlayer) Print("Sfx manager is invalid.....", 5)

	parentCore = nullptr;
	isAttached = false;
}

// Sets the ability active value for everything that's attached to it
void ACubeConnector::SetAbilityActive(bool value)
{
	if(!IsValid(parentCore)) return;
	
	const AActor* self = this;
	TArray<APickupableMaster*> children;
	GetDescendents(self, children);
	
	for (const auto& obj : children) obj->SetAbilityActive(value);
}

void ACubeConnector::CycleRaySocket(const bool next)
{
	const TArray<FName> freeSockets = GetFreeSockets();

	if(freeSockets.IsEmpty()) return;

	short index = freeSockets.IndexOfByKey(raySocket) + (next? 1: -1);
	if(index >= freeSockets.Num()) index = 0;
	if(index < 0) index = freeSockets.Num() - 1;
	
	if(freeSockets.IsValidIndex(index)) raySocket = freeSockets[index];
	else Print("Bad socket index when cycling ray socket...", 5)
	
	GhostPlacement();
}


void ACubeConnector::ApplyOffset(const ACubeCore* core)
{
	// If it's the actual core use a smaller offset
	if(core) GetAttachOffset(*core);
	
	Super::ApplyOffset(core);
}

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

	socketInfo = NewObject<UWedgeSocketInfo>();
	AdjustRange();
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

	///////////// Rotation
	///	// WHEN THE OBJECT IS SLIGHTLY KNOCKED.... THE ROUND ROTATION IS SLIGHTLY OFF..... (ONLY FOR WEDGES?)

	const bool isDiag = raySocket == "DIAG";

	silhouette->AttachToComponent(parentCore->GetMesh(), ghostRules, tempSocket);

	// Have to realign the socket rotation with another axis
	const FRotator socketRot = parentMesh->GetSocketRotation(tempSocket);
	FRotator attachRot = RoundRotation(GetActorRotation(), socketRot);

	// When placing on the diagonal face ... can only point in one direction...
	const bool upright = abs(socketRot.Vector().Z) > .95f;
	if(tempSocket == "DIAG" && !upright) attachRot.Yaw = socketRot.Yaw;
	
	silhouette->SetWorldRotation(attachRot);
	
	// If the diagonal sides of 2 wedges are trying to attach...
	if(tempSocket == "DIAG" && isDiag) silhouette->SetRelativeRotation({135,0,0});

	///////////// Location
	silhouette->SetRelativeLocation({GetAttachOffset(*parentCore),0,0});
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


	SetActorLocation(silhouette->GetComponentLocation());

	// WHEN THE OBJECT IS SLIGHTLY KNOCKED.... THE ROUND ROTATION IS SLIGHTLY OFF..... (ONLY FOR WEDGES?)
	SetActorRotation(silhouette->GetComponentRotation());
	
	AttachToActor(parentCore, attachRules, attachedSocket);

	parentCore->AddAttachment(this, attachedSocket);
	isAttached = true;
}

void AWedgeConnector::SetAbilityActive(bool value)
{
	Super::SetAbilityActive(value);
}
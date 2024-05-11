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

	// Disable anything to do with Thing collection
	thingCollector->SetGenerateOverlapEvents(false);
	thingCollector->SetBoxExtent({});
	thingCollector->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	thingHomer->SetGenerateOverlapEvents(false);
	thingHomer->SetBoxExtent({});
	thingHomer->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ACubeConnector::BeginPlay()
{
	placeRange = 100;
	
	Super::BeginPlay();
}

void ACubeConnector::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}


void ACubeConnector::SetupIndicator()
{
	indicator->ArrowColor.A = .5f;
	backArrow->ArrowColor.A = .5f;
	leftArrow->ArrowColor.A = .5f;
	rightArrow->ArrowColor.A = .5f;
	upArrow->ArrowColor.A = .5f;
	downArrow->ArrowColor.A = .5f;

	
	indicator->ArrowLength = placeRange;
	backArrow->ArrowLength = placeRange;
	leftArrow->ArrowLength = placeRange;
	rightArrow->ArrowLength = placeRange;
	upArrow->ArrowLength = placeRange;
	downArrow->ArrowLength = placeRange;


	// Setting the orientation
	FRotator rot = UKismetMathLibrary::MakeRotFromX({1,0,0});
	indicator->SetRelativeRotation(rot);

	rot = UKismetMathLibrary::MakeRotFromX({-1,0,0});
	backArrow->SetRelativeRotation(rot);

	rot = UKismetMathLibrary::MakeRotFromX({0,-1,0});
	leftArrow->SetRelativeRotation(rot);

	rot = UKismetMathLibrary::MakeRotFromX({0,1,0});
	rightArrow->SetRelativeRotation(rot);

	rot = UKismetMathLibrary::MakeRotFromX({0,0,1});
	upArrow->SetRelativeRotation(rot);

	rot = UKismetMathLibrary::MakeRotFromX({0,0,-1});
	downArrow->SetRelativeRotation(rot);

	// Setting the position
	TArray<UArrowComponent*> arrows;
	GetComponents<UArrowComponent>(arrows);

	if(!socketInfo) return;
	const TArray<FName> sockets = socketInfo->GetSockets(); 
	
	for(int i = 0; i < arrows.Num(); i++)
	{
		arrows[i]->SetWorldLocation(mesh->GetSocketLocation(sockets[i]));
	}
	
	SetHideIndicator(true);
}


void ACubeConnector::Placement()
{
	if(!canPlace) return;
	if(!selected) return;

	RemoveVelocity();

	const UWorld* wrld = GetWorld();
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);
	collisionParams.MobilityType = EQueryMobilityType::Any;
	collisionParams.bDebugQuery = true;

	// Change the direction to each face of the cube
	for(int i = 0; i < socketInfo->GetSockets().Num(); i++)
	{
		// Don't do anything if there's already something in the current direction slot.
		if(socketInfo->ObjectInSocket(i)) continue;

		FHitResult hit;
		const FVector direction = UKismetMathLibrary::GetForwardVector(mesh->GetSocketRotation(socketInfo->GetSockets()[i]));
		const FVector start = mesh->GetSocketLocation(socketInfo->GetSockets()[i]);

		// Debug Draw
		DrawDebugLine(wrld, start, start + direction * placeRange, FColor::Red, false, .2f);	
		wrld->LineTraceSingleByChannel(hit, start, start + direction * placeRange, ECC_Visibility, collisionParams);
		
		// Go to the next ray if it didn't hit anything...
		if(!hit.bBlockingHit)
		{
			hitObj = 0;
			parentCore = 0;
			ResetGhost();
			continue;
		}

		DrawDebugPoint(wrld, hit.ImpactPoint, 10, FColor::Green, false, .2f);

		// Go to the next ray if it didn't hit an actor...
		AActor* hitActor = hit.GetActor();
		if(!hitActor) continue;


		if(APickupableMaster* obj = Cast<APickupableMaster>(hitActor)) hitObj = obj;
		else
		{
			parentCore = 0;
			hitObj = 0;
			ResetGhost();
		}
		if(!IsValid(hitObj)) continue;

		// Don't do anything if the hit object is anywhere in this actor's hierarchy
		if(hitObj->Children.Contains(this)) continue;
		if(hitObj->IsChildOf(this)) continue;
		
		// Attempt to cast to the cubecore
		if(hitObj->IsA<ACubeCore>())
		{
			raySocket = socketInfo->GetSockets()[i];

			// All the previous checks ensure that the cast is valid
			parentCore = Cast<ACubeCore>(hitObj);
			FName closestSocket = NearestSocket(parentCore, hit);
			
			attachedSocket = closestSocket;
			// hitObj = nullptr;
			break;
		}

		// Foreach of the connector's sockets
		// for(const auto& socket: objMesh->GetAllSocketNames())
		// {
		// 	// If the socket is free...
		// 	if(ObjectInSocket(socket)) continue;
		//
		// 	// Compare the distances between the current socket and the impact point
		// 	const float distance = FVector::Distance(objMesh->GetSocketLocation(socket), hit.ImpactPoint);
		// 	if(distance < shortestDistance)
		// 	{
		// 		shortestDistance = distance;
		// 		closestSocket = socket;
		// 	}
		// }

		// if(tempSocket != NAME_None) tempSocket = closestSocket;
		// hitObj->SetCore(this);
		break;
	}

	GhostPlacement();
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

// The final position when attached is dependent on the silhouette/ghost's position and rotation
EOperations ACubeConnector::SetSelected(const bool value)
{
	selected = value;
	ToggleGravity();
	
	// Only use continuous collisions while selected (to prevent objects from going through objects).
	mesh->SetUseCCD(selected);
	
	SetHideIndicator(!selected);

	const AActor* self = this;
	TArray<APickupableMaster*> children;
	GetDescendents(self, children);

	
	// Detach from its components if selected
	if(selected)
	{
		wasDetached = isAttached;
		canPlace = true;
		Detach();

		for(const auto& obj : children)
		{
			if(obj->IsA<AWheel>()) Cast<AWheel>(obj)->SetParentDominates(true);
		}
		return {EOperations::Detach};
	}
	
	// When unselected....
	ResetGhost(false);
	
	for(const auto& obj : children)
	{
		if(obj->IsA<AWheel>()) Cast<AWheel>(obj)->SetParentDominates(false);
	}
	
	// Rotate/Manipulate self when it hits the core
	if(!IsValid(parentCore)) return {wasDetached? EOperations::Detach : EOperations::Move};

	// Use the silhouettes position/rotation...
	UseSilhouetteTransform();

	// Reset the ghost's rotation
	ResetGhost();
	
	// Attach the actor to the parent with the target socket
	AttachToActor(parentCore, attachRules, attachedSocket);

	isAttached = true;
	parentCore->AddAttachment(this, attachedSocket);
	return {EOperations::Attach};
}

bool ACubeConnector::SetGroupSelected(const bool value)
{
	groupSelected = value;
	ToggleGravity(!groupSelected);
	
	canPlace = !groupSelected;
	
	return true;
}


void ACubeConnector::SetHideIndicator(const bool hide)
{
	Super::SetHideIndicator(hide);
	backArrow->SetHiddenInGame(hide);
	leftArrow->SetHiddenInGame(hide);
	rightArrow->SetHiddenInGame(hide);
	upArrow->SetHiddenInGame(hide);
	downArrow->SetHiddenInGame(hide);
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

void ACubeConnector::Reattach(const FTransform& transform)
{
	parentCore = Cast<ACubeCore>(previousObj);
	if(!IsValid(parentCore))
	{
		Print("couldnt cast to core - Reattaching...", 5)
		return;
	}
	
	AttachToActor(parentCore, attachRules, removedSocket);
	SetActorLocation(transform.GetLocation());
	SetActorRotation(transform.GetRotation());
	
	parentCore->AddAttachment(this, attachedSocket);
	isAttached = true;
}

void ACubeConnector::SetAttachedSocket(FName socket, const bool useDirection)
{
	attachedSocket = socket;

	if(!useDirection) return;

	RearrangeSockets();
	AlignSocketRot();
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


void ACubeConnector::ApplyOffset(const ACubeCore* core)
{
	// If it's the actual core use a smaller offset
	if(core) GetAttachOffset(*core);
	
	Super::ApplyOffset(core);
}
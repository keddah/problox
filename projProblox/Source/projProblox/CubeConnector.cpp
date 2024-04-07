// Fill out your copyright notice in the Description page of Project Settings.

#include "CubeConnector.h"

#include "WedgeConnector.h"
#include "Wheel.h"


ACubeConnector::ACubeConnector()
{
	backArrow = CreateDefaultSubobject<UArrowComponent>("Backwards Arrow");
	backArrow->SetupAttachment(objMesh);

	leftArrow = CreateDefaultSubobject<UArrowComponent>("Left Arrow");
	leftArrow->SetupAttachment(objMesh);

	rightArrow = CreateDefaultSubobject<UArrowComponent>("Right Arrow");
	rightArrow->SetupAttachment(objMesh);

	upArrow = CreateDefaultSubobject<UArrowComponent>("Upwards Arrow");
	upArrow->SetupAttachment(objMesh);

	downArrow = CreateDefaultSubobject<UArrowComponent>("Downwards Arrow");
	downArrow->SetupAttachment(objMesh);

	// Disable anything to do with Thing collection
	thingCollector->SetGenerateOverlapEvents(false);
	thingCollector->SetBoxExtent({});
	thingCollector->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
	thingHomer->SetGenerateOverlapEvents(false);
	thingHomer->SetBoxExtent({});
	thingHomer->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ACubeConnector::ApplyOffset(const ACubeCore* core)
{
	// If it's the actual core use a smaller offset
	if(core) attachOffset = !core->IsA<ACubeConnector>()? 35 : 50;
	
	Super::ApplyOffset(core);
}

void ACubeConnector::BeginPlay()
{
	placeRange = 100;
	attachOffset = 5;
	
	Super::BeginPlay();
}

void ACubeConnector::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void ACubeConnector::SetAttachedSocket(FName socket, const bool useDirection)
{
	attachedSocket = socket;

	if(!useDirection) return;

	RearrangeSockets();
	AlignSocketRot();
}

void ACubeConnector::Placement()
{
	if(!canPlace) return;
	if(!selected) return;

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
		const FVector direction = UKismetMathLibrary::GetForwardVector(objMesh->GetSocketRotation(socketInfo->GetSockets()[i]));
		const FVector start = objMesh->GetSocketLocation(socketInfo->GetSockets()[i]);

		// Debug Draw
		// DrawDebugLine(wrld, start, start + direction * placeRange, FColor::Red, false, .2f);	
		wrld->LineTraceSingleByChannel(hit, start, start + direction * placeRange, ECC_Visibility, collisionParams);
		
		// Go to the next ray if it didn't hit anything...
		if(!hit.bBlockingHit)
		{
			hitObj = 0;
			parentCore = 0;
			ResetGhost();
			continue;
		}

		// DrawDebugPoint(wrld, hit.ImpactPoint, 10, FColor::Green, false, .2f);

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
			
			tempSocket = closestSocket;
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
		// parentCore = nullptr;
		// hitObj->SetCore(this);
		break;
	}

	GhostPlacement();
}

void ACubeConnector::GhostPlacement()
{
	if(!parentCore) return;

	silhouette->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	silhouette->SetHiddenInGame(false);

	const UStaticMeshComponent* parentMesh = parentCore->GetMesh();

	const bool above = !parentCore->IsA<AWedgeConnector>() && parentCore->GetActorLocation().Z + parentCore->GetActorRelativeScale3D().X * 100 <= GetActorLocation().Z;	// 100 = the size of the core 
	
	// Attach the actor to the parent with the target socket
	silhouette->AttachToComponent(parentCore->GetMesh(), ghostRules, tempSocket);

	// Have to realign the socket rotation with another axis
	FRotator socketRot = parentMesh->GetSocketRotation(tempSocket);
	if(above)
	{
		const FVector socketForward = UKismetMathLibrary::GetForwardVector(socketRot);
		socketRot = socketRot.RotateVector(socketForward).Rotation();
		Print("Above", .2)
	}
	
	silhouette->SetWorldRotation(RoundRotation(GetActorRotation(), socketRot));
	
	///////////// Location
	const float distance = parentCore->IsA<ACubeConnector>()? 50 : 25;
	attachOffset = distance;
	silhouette->SetRelativeLocation({attachOffset,0,0});
}

void ACubeConnector::SetHideIndicator(const bool hide)
{
	Print(FString::SanitizeFloat(backArrow->ArrowLength), 3)
	
	Super::SetHideIndicator(hide);
	backArrow->SetHiddenInGame(hide);
	leftArrow->SetHiddenInGame(hide);
	rightArrow->SetHiddenInGame(hide);
	upArrow->SetHiddenInGame(hide);
	downArrow->SetHiddenInGame(hide);
}

void ACubeConnector::SetupIndicator()
{
	// indicator->SetMaterial(0, indicatorMat);
	// backArrow->SetMaterial(0, indicatorMat);
	// leftArrow->SetMaterial(0, indicatorMat);
	// rightArrow->SetMaterial(0, indicatorMat);
	// upArrow->SetMaterial(0, indicatorMat);
	// downArrow->SetMaterial(0, indicatorMat);

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

	SetHideIndicator(true);
}

bool ACubeConnector::SetGroupSelected(const bool value)
{
	selected = value;
	canPlace = !selected;
	
	return true;
}

void ACubeConnector::SetSelected(const bool value)
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

	attachedSocket = tempSocket;
	
	SetActorLocation(silhouette->GetComponentLocation());
	SetActorRotation(silhouette->GetComponentRotation());
	
	// Attach the actor to the parent with the target socket
	AttachToActor(parentCore, attachRules, attachedSocket);
	
	parentCore->AddAttachment(this, attachedSocket);
}

void ACubeConnector::SetAbilityActive(bool value)
{
	// if(!IsValid(parentCore)) return;

	Super::SetAbilityActive(value);
}

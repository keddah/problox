/**************************************************************************************************************
* Balloon - Code
* 
* The code file for one of the pickupable objects. The only attachment that doesn't directly attach itself to the core.
* Instead, it uses a physics constraint. This file Creates the required components for this attachment and sets up their parameters. 
* 
* Problems:
*	GetAttachedOffset
*	Ability
*	GhostPlacement
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/

// Created by Dean Atkinson-Walker 2024
#include "Balloon.h"

#include "Cores/CubeCore.h"
#include "Cores/Connectors/CubeConnector.h"
#include "Kismet/GameplayStatics.h"

ABalloon::ABalloon()
{
	if(GEngine) mesh->SetMassOverrideInKg("", 0);
	
	string = CreateDefaultSubobject<UCableComponent>("String");
	string->SetupAttachment(mesh);

	constraint = CreateDefaultSubobject<UPhysicsConstraintComponent>("Constraint");
	constraint->SetupAttachment(string);

	string->bAttachEnd = false;
	string->CableLength = 200;
	string->NumSegments = 16;
	string->NumSides = 4;
	string->SolverIterations = 2;
	string->EndLocation = {};

	constraint->SetLinearXLimit(LCM_Limited, string->CableLength);
	constraint->SetLinearYLimit(LCM_Limited, string->CableLength);
	constraint->SetLinearZLimit(LCM_Limited, string->CableLength);

	uiName = "Balloon";
	favouredSlot = ECoreSockets::Up;
}

void ABalloon::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> cores;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACubeCore::StaticClass(), cores);

	for (const auto& coreActor : cores)
	{
		if(coreActor->IsA<ACubeConnector>()) continue;

		Cast<ACubeCore>(coreActor)->onReset.AddDynamic(this, &ABalloon::ResetBalloon);
		Cast<ACubeCore>(coreActor)->onTurnStarted.AddDynamic(this, &ABalloon::SaveResetTransform);
	}

	mesh->SetSimulatePhysics(false);
}

void ABalloon::Ability(float deltaTime)
{
	if(!parentCore || !active) return;
	if(!parentCore->GetMesh()->IsSimulatingPhysics()) return;

	// (Since the pivot for the balloon mesh is the bottom)
	constexpr float offset = 120;
	const bool atLimit = (GetActorLocation().Z + offset) - parentCore->GetMesh()->GetSocketLocation(attachedSocket).Z >= constraint->ConstraintInstance.GetLinearLimit() * 1.15f;

	// The speed the balloon should go upwards when it is first activated (until the limit is reached)
	constexpr float initSpeed = 3;
	
	float upAmount = mesh->GetPhysicsLinearVelocity().Z;
	upAmount *= -deltaTime;
	upAmount -= sqrt(parentCore->GetMass());
	upAmount += atLimit? floatiness : floatiness * initSpeed; 
	
	AddVelocity({0,0,upAmount});
}

EOperations ABalloon::SetSelected(const bool value)
{
	selected = value;

	// Only use continuous collisions while selected (to prevent objects from going through objects).
	mesh->SetUseCCD(selected);

	ToggleGravity();

	if(selected)
	{
		Detach(false);
		mesh->SetEnableGravity(false);
		
		return {EOperations::Detach};
	}

	if(!parentCore) return EOperations::Detach;
	if(attachedSocket == NAME_None) return  EOperations::Detach ;

	SetShowMesh(true);
	UseSilhouetteTransform();
	ResetGhost();
	Attach();

	parentCore->AddAttachment(this, attachedSocket);
	isAttached = true;
	
	return {EOperations::Attach};
}

APickupableMaster* ABalloon::GetParent()
{
	if(!isAttached) return this;
	
	UPrimitiveComponent* comp1;
	UPrimitiveComponent* comp2;
	FName empty;
	constraint->GetConstrainedComponents(comp1, empty, comp2, empty);

	if(comp1) return Cast<APickupableMaster>(comp1->GetOwner());

	return this;
}

void ABalloon::Detach(const bool push)
{
	ResetGhost();

	if(!parentCore)
	{
		Print("Couldn't detach... parent was invalid..", 4)
		return;
	}

	SetHideOutlineMesh(true);
	RemoveVelocity();
	
	if(parentCore) parentCore->RemoveAttachment(attachedSocket);

	constraint->BreakConstraint();
	string->SetAttachEndToComponent(nullptr);
	if(push)
	{
		const FVector launchDir = UKismetMathLibrary::GetForwardVector(mesh->GetSocketRotation(attachedSocket));
		const float launchForce = GetMass();

		constexpr float maxVelocity = 1000;
		SetShowMesh(true);
		mesh->SetSimulatePhysics(true);
		AddVelocity(launchDir * std::min(launchForce, maxVelocity));
	}
	
	silhouette->SetupAttachment(mesh);

	if(parentCore) soundPlayer->PlayDetach();

	ToggleGravity(true);
	parentCore = nullptr;
	isAttached = false;
}

void ABalloon::Attach()
{
	if(!parentCore) return;
	
	UStaticMeshComponent* parentMesh = parentCore->GetMesh();
	constraint->SetConstrainedComponents(parentMesh,"", mesh, "");
	string->SetAttachEndToComponent(parentMesh, attachedSocket);
	if(!isAttached) soundPlayer->PlayAttach();
	active = false;
	isAttached = true;
}

void ABalloon::GhostPlacement()
{
	if(!parentCore)
	{
		Print("Couldn't do ghost placement because there's no core", 4)
		return;
	}
	silhouette->SetHiddenInGame(false);

	const UStaticMeshComponent* parentMesh = parentCore->GetMesh();
	SetActorLocation(parentMesh->GetSocketLocation(attachedSocket));
	
	const FVector forwardVec = UKismetMathLibrary::GetForwardVector(parentMesh->GetSocketRotation(attachedSocket));
	FRotator rot;
	if(placeDir.X != 0) rot = UKismetMathLibrary::MakeRotFromX(forwardVec);
	else if(placeDir.Y != 0) rot = UKismetMathLibrary::MakeRotFromY(forwardVec);
	else if(placeDir.Z != 0) rot = UKismetMathLibrary::MakeRotFromZ(forwardVec);

	// Rotate to match the socket rotation
	SetActorRotation(rot);
}

void ABalloon::UseSilhouetteTransform(const UStaticMeshComponent* ghost)
{
	// If a silhouette wasn't given, use this one.
	if(!ghost) ghost = silhouette;
		
	const FTransform silhouetteTransform = ghost->GetComponentTransform();
	SetActorRotation(silhouetteTransform.GetRotation());
}

void ABalloon::ResetBalloon()
{
	mesh->SetHiddenInGame(false);
	string->bAttachStart = true;
	string->AttachToComponent(mesh, FAttachmentTransformRules::KeepWorldTransform);
	string->SetRelativeLocation({0,0,50});
	// SetActorTransform(resetTransform);
	Attach();
	
	if(!parentCore) return;

	SetSelected(false);
}

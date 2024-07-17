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
	string->CableLength = 250;
	string->NumSegments = 16;
	string->NumSides = 4;
	string->SolverIterations = 2;
	string->EndLocation = {};

	constraint->SetLinearZLimit(LCM_Limited, string->CableLength);
	constraint->SetLinearXLimit(LCM_Limited, string->CableLength);
	constraint->SetLinearYLimit(LCM_Limited, string->CableLength);

	favouredSlot = ECoreSockets::Up;
	needsTimer = false;
}

void ABalloon::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> cores;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACubeCore::StaticClass(), cores);

	for (const auto& coreActor : cores)
	{
		if(coreActor->IsA<ACubeConnector>()) continue;

		Cast<ACubeCore>(coreActor)->onTurnStarted.AddDynamic(this, &ABalloon::SaveResetTransform);
	}

	mesh->SetSimulatePhysics(false);
}

void ABalloon::Ability(float deltaTime)
{
	if(!mesh)
	{
		Print("mesh was invalid......?: " + GetName().ToUpper(), 4)
		return;
	}
	
	if(!parentCore) return;
	if(!parentCore->GetMesh()->IsSimulatingPhysics()) return;

	// (Since the pivot for the balloon mesh is the bottom)
	constexpr float leeway = 170;
	const bool atLimit = (GetActorLocation().Z + leeway) - parentCore->GetMesh()->GetSocketLocation(attachedSocket).Z >= constraint->ConstraintInstance.GetLinearLimit();
	
	// The speed the balloon should go upwards when it is first activated (until the limit is reached)
	const float initSpeed = floatiness * 2;

	const FVector thisVelocity = mesh->GetPhysicsLinearVelocity();
	const FVector coreVelocity = parentCore->GetMesh()->GetPhysicsLinearVelocity();

	float upAmount = thisVelocity.Z;
	upAmount *= -deltaTime;
	upAmount -= sqrt(parentCore->GetMass() / massMultiplier);
	upAmount += atLimit? floatiness : initSpeed; 

	constexpr float velocityDampner = .975f;
	mesh->SetPhysicsLinearVelocity({coreVelocity.X * velocityDampner, coreVelocity.Y * velocityDampner, thisVelocity.Z + upAmount});
}

void ABalloon::Attach()
{
	if(!parentCore) return;
	if(attachedSocket == NAME_None) return;

	SetShowMesh(true);
	UseSilhouetteTransform();
	ResetGhost();
	BalloonAttach();

	parentCore->AddAttachment(this, attachedSocket);
	isAttached = true;
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

void ABalloon::Detach(bool playSound, float detachForce, float detachAngularForce)
{
	ResetGhost();

	if(!IsValid(parentCore))
	{
		Print("Couldn't detach... parent was invalid..", 4)
		return;
	}

	SetHideOutlineMesh(true);
	
	parentCore->RemoveAttachment(attachedSocket);

	constraint->Deactivate();
	constraint->BreakConstraint();
	string->SetAttachEndToComponent(nullptr);
	
	const FVector launchDir = UKismetMathLibrary::GetForwardVector(mesh->GetSocketRotation(attachedSocket));

	SetShowMesh(true);
	mesh->SetSimulatePhysics(true);
	
	AddVelocity(launchDir * detachForce);
	
	silhouette->SetupAttachment(mesh);

	if(IsValid(soundPlayer) && playSound) soundPlayer->PlayDetach();

	parentCore = nullptr;
	isAttached = false;
}

void ABalloon::BalloonAttach()
{
	if(!IsValid(parentCore)) return;
	
	UStaticMeshComponent* parentMesh = parentCore->GetMesh();
	constraint->SetConstrainedComponents(parentMesh,"", mesh, "");
	string->SetAttachEndToComponent(parentMesh, attachedSocket);
	if(!isAttached) soundPlayer->PlayAttach();
	active = false;
	isAttached = true;
}

void ABalloon::GhostPlacement()
{
	if(!IsValid(parentCore))
	{
		Print("Couldn't do ghost placement because there's no core", 4)
		return;
	}

	if(!IsValid(silhouette))
	{
		Print("Couldn't do ghost placement because the silhouette was invalid", 4)
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
/**************************************************************************************************************
* Balloon - Code
* 
* The code file for one of the pickupable objects. The only attachment that doesn't directly attach itself to the core.
* Instead, it uses a physics constraint. This file Creates the required components for this attachment and sets up their parameters. 
* 
* Problems:
*	Can turn erratic if the balloon moves on the horizontal axis too quickly?
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "Balloon.h"

#include "Cores/CubeCore.h"
#include "Kismet/GameplayStatics.h"

ABalloon::ABalloon()
{
	if(GEngine) mesh->SetMassOverrideInKg("", 0);
	
	string = CreateDefaultSubobject<UCableComponent>("String");
	string->SetupAttachment(mesh);

	constraint = CreateDefaultSubobject<UPhysicsConstraintComponent>("Constraint");
	constraint->SetupAttachment(string);

	string->bAttachEnd = true;
	string->CableLength = 80;
	string->NumSegments = 16;
	string->NumSides = 4;
	string->SolverIterations = 2;
	string->EndLocation = {};

	constraint->SetLinearZLimit(LCM_Limited, stringLength);
	constraint->SetLinearXLimit(LCM_Limited, stringLength);
	constraint->SetLinearYLimit(LCM_Limited, stringLength);

	favouredSlot = ECoreSockets::Up;
	needsTimer = false;
}

void ABalloon::BeginPlay()
{
	Super::BeginPlay();

	if(ACubeCore* core = Cast<ACubeCore>(UGameplayStatics::GetActorOfClass(GetWorld(), ACubeCore::StaticClass())))
	{
		core->onTurnStarted.AddDynamic(this, &ABalloon::SaveResetTransform);
	}

	mesh->SetSimulatePhysics(false);
}

void ABalloon::Ability(float deltaTime)
{
	if(!mesh)
	{
		return;
	}
	
	if(!IsValid(parentCore)) return;
	if(!parentCore->GetMesh()->IsGravityEnabled()) return;

	const FVector thisVelocity = mesh->GetPhysicsLinearVelocity();
	const FVector coreVelocity = parentCore->GetMesh()->GetPhysicsLinearVelocity();

	float upAmount = thisVelocity.Z;
	upAmount *= -deltaTime;
	upAmount += floatiness; 

	constexpr float velocityDampener = .99f;
	mesh->SetPhysicsLinearVelocity({coreVelocity.X * velocityDampener, coreVelocity.Y * velocityDampener, thisVelocity.Z + upAmount});
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
	string->AttachEndToSocketName = attachedSocket;
	string->bAttachEnd = true;
	string->bAttachStart = true;
	
	if(!isAttached) soundPlayer->PlayAttach();
	active = false;
	isAttached = true;

	string->SetPhysicsLinearVelocity({});
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
// Created by Dean Atkinson-Walker 2024
#include "Balloon.h"

#include "Cores/CubeCore.h"

ABalloon::ABalloon()
{
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

	active = true;
}

void ABalloon::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	SetConstraintsActive(!(selected || groupSelected));
}

void ABalloon::Ability(float deltaTime)
{
	Super::Ability(deltaTime);
	if(!parentCore || !active) return;
	
	FVector velocity = mesh->GetPhysicsLinearVelocity();
	velocity.Z *= -deltaTime;
	velocity.Z -= sqrt(parentCore->GetMass());
	velocity.Z += floatiness; 
	
	mesh->SetPhysicsLinearVelocity(velocity);
}

void ABalloon::SetAbilityActive(const bool value)
{
	Super::SetAbilityActive(value);

	if(value) return;
	mesh->SetHiddenInGame(true);
	string->bAttachStart = false;
	string->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	constraint->BreakConstraint();
}

EOperations ABalloon::SetSelected(const bool value)
{
	selected = value;

	// Only use continuous collisions while selected (to prevent objects from going through objects).
	mesh->SetUseCCD(selected);
	
	ToggleGravity();
	SetHideIndicator(!selected);

	if(selected)
	{
		wasDetached = isAttached;
		Detach(false);
		
		canPlace = true;
		return {EOperations::Detach};
	}

	if(!parentCore) return { wasDetached? EOperations::Detach : EOperations::Move};
	if(attachedSocket == NAME_None) return { wasDetached? EOperations::Detach : EOperations::Move};

	if(!previousObj) previousObj = parentCore;
	
	Attach();
	UseSilhouetteTransform();
	ResetGhost();

	parentCore->AddAttachment(this, attachedSocket);
	isAttached = true;
	
	return {EOperations::Attach};
}

void ABalloon::Detach(const bool push)
{
	ResetGhost();

	if(!parentCore && !previousObj)
	{
		Print("Couldn't detach... parent was invalid..", 4)
		return;
	}

	SetAbilityActive(false);

	ResetMaterial();
	RemoveVelocity();
	
	if(parentCore) parentCore->RemoveAttachment(attachedSocket);
	else previousObj->RemoveAttachment(attachedSocket);

	constraint->BreakConstraint();
	string->SetAttachEndToComponent(nullptr);
	if(push)
	{
		const FVector launchDir = UKismetMathLibrary::GetForwardVector(mesh->GetSocketRotation(attachedSocket));
		const float launchForce = GetMass();

		constexpr float maxVelocity = 1000;
		AddVelocity(launchDir * std::min(launchForce, maxVelocity));
	}
	
	silhouette->SetupAttachment(mesh);

	if(parentCore)
	{
		previousObj = parentCore;
		parentCore = nullptr;
	}

	ToggleGravity(true);
	isAttached = false;
	soundPlayer->PlayDetach();
}

void ABalloon::Attach() const
{
	UStaticMeshComponent* parentMesh = parentCore->GetMesh();
	constraint->SetConstrainedComponents(parentMesh,"", mesh, "");
	string->SetAttachEndToComponent(parentMesh, attachedSocket);
	soundPlayer->PlayAttach();
}

void ABalloon::Reattach()
{
	parentCore = Cast<ACubeCore>(previousObj);
	if(!parentCore)
	{
		Print("couldnt cast to core - Reattaching...", 5)
		return;
	}
	
	Attach();
	SetActorRelativeLocation(savedTransform.GetLocation());
	SetActorRelativeRotation(savedTransform.Rotator());
	
	parentCore->AddAttachment(this, attachedSocket);
	isAttached = true;
}

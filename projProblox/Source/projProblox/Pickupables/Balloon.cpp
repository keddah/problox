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
}

void ABalloon::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	SetConstraintsActive(!(selected || groupSelected));
}

void ABalloon::Ability(float deltaTime)
{
	Super::Ability(deltaTime);

	if(!parentCore || !isAttached) return;
	
	FVector velocity = mesh->GetPhysicsLinearVelocity();
	velocity.Z *= -deltaTime;
	velocity.Z -= sqrt(parentCore->GetMass());
	velocity.Z += floatiness; 
	
	mesh->SetPhysicsLinearVelocity(velocity);
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
		Detach();
		
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

void ABalloon::Detach()
{
	ResetGhost();

	if(!parentCore && !previousObj)
	{
		Print("Couldn't detach... parent was invalid..", 4)
		return;
	}

	SetAbilityActive(false);

	ResetMaterial();
	
	if(parentCore) parentCore->RemoveAttachment(attachedSocket);
	else previousObj->RemoveAttachment(attachedSocket);

	constraint->BreakConstraint();
	string->SetAttachEndToComponent(nullptr);
	
	silhouette->SetupAttachment(mesh);

	if(parentCore)
	{
		previousObj = parentCore;
		parentCore = nullptr;
	}

	ToggleGravity(true);
	isAttached = false;
}

void ABalloon::Attach() const
{
	UStaticMeshComponent* parentMesh = parentCore->GetMesh();
	constraint->SetConstrainedComponents(parentMesh,"", mesh, "");
	string->SetAttachEndToComponent(parentMesh, attachedSocket);
	soundPlayer->PlayConnect();
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

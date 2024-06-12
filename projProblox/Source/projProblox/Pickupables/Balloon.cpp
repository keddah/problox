// Created by Dean Atkinson-Walker 2024
#include "Balloon.h"

#include "Cores/CubeCore.h"
#include "Cores/Connectors/CubeConnector.h"
#include "Kismet/GameplayStatics.h"

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

	uiName = "Balloon";
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
		Cast<ACubeCore>(coreActor)->onStartGame.AddDynamic(this, &ABalloon::SaveRestTransform);
	}
}

void ABalloon::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void ABalloon::Ability(float deltaTime)
{
	Super::Ability(deltaTime);
	if(!parentCore || !active) return;

	PrintFloat(GetActorLocation().Z - parentCore->GetMesh()->GetSocketLocation(attachedSocket).Z, .1)
	PrintFloat(constraint->ConstraintInstance.GetLinearLimit() * 2, .1)
	Print("", .1)
	
	const bool atLimit = GetActorLocation().Z - parentCore->GetMesh()->GetSocketLocation(attachedSocket).Z >= constraint->ConstraintInstance.GetLinearLimit() * 1.15f;
	
	FVector velocity = mesh->GetPhysicsLinearVelocity();
	velocity.Z *= -deltaTime;
	velocity.Z -= sqrt(parentCore->GetMass());
	velocity.Z += atLimit? floatiness : floatiness * 4; 
	
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

	savedDetachTransform = GetActorTransform();

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

EOperations ABalloon::SetGroupSelected(const bool value)
{
	groupSelected = value;
	
	ToggleGravity(!groupSelected);
	SetParentDominates(!groupSelected);
	canPlace = !groupSelected;

	// If the player has unselected... the operation is move
	return EOperations::Move;
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
	SetHideOutlineMesh(true);

	if(!parentCore && !previousObj)
	{
		Print("Couldn't detach... parent was invalid..", 4)
		return;
	}

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
		soundPlayer->PlayDetach();
	}

	ToggleGravity(true);
	isAttached = false;
}

void ABalloon::Attach()
{
	UStaticMeshComponent* parentMesh = parentCore->GetMesh();
	constraint->SetConstrainedComponents(parentMesh,"", mesh, "");
	string->SetAttachEndToComponent(parentMesh, attachedSocket);
	if(!isAttached) soundPlayer->PlayAttach();
	active = false;
	isAttached = true;
}

void ABalloon::Reattach(const bool sound)
{
	parentCore = Cast<ACubeCore>(previousObj);
	if(!parentCore)
	{
		Print("couldnt cast to core - Reattaching...", 5)
		return;
	}
	
	SetSelected(false);
	SetActorLocation(savedAttachTransform.GetLocation() + parentCore->GetActorLocation());
	SetActorRotation(savedDetachTransform.Rotator());
	
	RemoveVelocity();

	// Casting to work around the protected override of this function.
	Cast<APickupableMaster>(parentCore)->RemoveVelocity();
}

void ABalloon::ResetBalloon(const int empty)
{
	mesh->SetHiddenInGame(false);
	string->bAttachStart = true;
	string->AttachToComponent(mesh, FAttachmentTransformRules::KeepWorldTransform);
	string->SetRelativeLocation({0,0,50});
	SetActorTransform(resetTransform);
	
	if(!parentCore) return;

	SetSelected(false);
}

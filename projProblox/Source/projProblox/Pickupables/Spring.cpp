// Created by Dean Atkinson-Walker 2024


#include "Spring.h"

#include "Cores/CubeCore.h"

ASpring::ASpring()
{
	spring = CreateDefaultSubobject<UPhysicsConstraintComponent>("Actual Spring");
	spring->SetupAttachment(objMesh);

	springEnd = CreateDefaultSubobject<UStaticMeshComponent>("End");
	springEnd->SetupAttachment(objMesh);

	spring->SetConstrainedComponents(springEnd, "", 0, "");
}

void ASpring::Ability(float deltaTime)
{
	Super::Ability(deltaTime);
	spring->SetActive(IsValid(parentCore));
	if(!wrld) return;
	// if(!isAttached) return;

	// const FVector start = springEnd->GetComponentLocation();
	// const FVector direction = springEnd->GetForwardVector(); 
	// const float length = 100 * objMesh->GetRelativeScale3D().Z;
	//
	// FHitResult hit;
	// FCollisionQueryParams collisionParams;
	// collisionParams.AddIgnoredActor(this);
	// collisionParams.AddIgnoredActor(parentCore);
	//
	// DrawDebugLine(wrld, start, start + direction * length, FColor::Red);
	// if(!wrld->LineTraceSingleByChannel(hit, start, start + direction * length, ECC_Visibility, collisionParams)) return;
	//
	// DrawDebugPoint(wrld, hit.ImpactPoint, 10, FColor::Green, false, .2f);
	// objMesh->AddForce(hit.Normal * GetSpringEnergy(start, hit.Location) * GetMass());
}

float ASpring::GetSpringEnergy(const FVector& start, const FVector& end) const
{
	const float change = (end - start).Length();
	return .5f * springConstant * (change * change);
}

EOperations ASpring::SetSelected(const bool value)
{
	selected = value;

	// Only use continuous collisions while selected (to prevent objects from going through objects).
	objMesh->SetUseCCD(selected);
	
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
	
	AttachToActor(parentCore, attachRules, attachedSocket);
	spring->SetConstrainedComponents(springEnd, "", parentCore->GetMesh(), attachedSocket);

	// Using the silhouette's location/rotation to set the actual transform.
	UseSilhouetteTransform();
	ResetGhost();

	parentCore->AddAttachment(this, attachedSocket);
	isAttached = true;
	
	return {EOperations::Attach};
}

void ASpring::Attach()
{
	
}

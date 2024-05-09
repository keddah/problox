// Created by Dean Atkinson-Walker 2024


#include "Spring.h"

#include "Cores/CubeCore.h"

ASpring::ASpring()
{
	springConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>("Actual Spring");
	springConstraint->SetupAttachment(objMesh);

	springEnd = CreateDefaultSubobject<UStaticMeshComponent>("End");
	springEnd->SetupAttachment(objMesh);
	springEnd->SetSimulatePhysics(true);

	springConstraint->SetConstrainedComponents(springEnd, "", objMesh, "");

	springConstraint->SetLinearXLimit(LCM_Limited, compressionAmount);
	springConstraint->SetLinearYLimit(LCM_Limited, compressionAmount);
	springConstraint->SetLinearZLimit(LCM_Limited, compressionAmount);

	springConstraint->SetAngularSwing1Limit(ACM_Limited, 30);
	springConstraint->SetAngularSwing2Limit(ACM_Limited, 30);
	springConstraint->SetAngularTwistLimit(ACM_Limited, 30);

	springConstraint->SetAngularDriveMode(EAngularDriveMode::TwistAndSwing);
}

void ASpring::Ability(float deltaTime)
{
	Super::Ability(deltaTime);

	if(!(selected || groupSelected)) return;

	// springStart->SetWorldLocation(springStart->GetComponentLocation() - GetActorLocation());
	// springEnd->SetWorldLocation(springEnd->GetComponentLocation() - GetActorLocation());
	
	// spring->SetActive(IsValid(parentCore));
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

void ASpring::ToggleGravity() const
{
	// Does the same for objMesh... Also calls RemoveVelocity
	Super::ToggleGravity();

	springEnd->SetEnableGravity(!selected);
	SetParentDominates(selected);
}

void ASpring::ToggleGravity(bool gravityOn)
{
	Super::ToggleGravity(gravityOn);

	springEnd->SetEnableGravity(gravityOn);
	SetParentDominates(!gravityOn);
}

void ASpring::RemoveVelocity() const
{
	Super::RemoveVelocity();

	springEnd->SetPhysicsLinearVelocity(FVector::ZeroVector);
	springEnd->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
}

float ASpring::GetSpringEnergy(const FVector& startPos, const FVector& endPos) const
{
	const float change = (endPos - startPos).Length();
	return .5f * springConstant * (change * change);
}

void ASpring::Attach()
{
	
}

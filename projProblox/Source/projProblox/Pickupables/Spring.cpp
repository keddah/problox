// Created by Dean Atkinson-Walker 2024


#include "Spring.h"

#include "Cores/CubeCore.h"

ASpring::ASpring()
{
	start = CreateDefaultSubobject<USceneComponent>("Start");
	start->SetupAttachment(objMesh);
	
	end = CreateDefaultSubobject<UStaticMeshComponent>("End");
	end->SetupAttachment(objMesh);
	end->SetSimulatePhysics(false);
}

void ASpring::Ability(float deltaTime)
{
	Super::Ability(deltaTime);
	
	if(!wrld)
	{
		Print("Bad world ~ Spring", 5)
		return;
	}
	// if(!isAttached) return;

	const FVector startPos = start->GetComponentLocation();
	const FVector direction = start->GetForwardVector(); 
	const FVector endPos = startPos + direction * springLength;
	
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);
	collisionParams.AddIgnoredActor(parentCore);
	
	DrawDebugLine(wrld, startPos, endPos, FColor::Red);
	wrld->LineTraceSingleByChannel(springHit, startPos, endPos, ECC_Visibility, collisionParams);

	pickupCollider->SetWorldLocation(end->GetComponentLocation());

	if(!springHit.bBlockingHit)
	{
		springLength = FMath::Lerp(springLength, minSpringLength, compressionSpeed * deltaTime);
		springLength = FMath::Clamp(springLength, 0, maxSpringLength);
		end->SetWorldLocation(endPos);
		return;
	}
	springLength = FVector::Distance(springHit.Location, start->GetComponentLocation()) + 10;
	end->SetWorldLocation(springHit.Location.GetClampedToSize(minSpringLength, maxSpringLength));
	
	DrawDebugPoint(wrld, springHit.ImpactPoint, 10, FColor::Green, false, .2f);

	const FVector velocity = (GetActorLocation() - GetVelocity()) / deltaTime;
	DrawDebugLine(wrld, springHit.Location, springHit.Location + springHit.ImpactNormal * 200, FColor::Cyan);

	objMesh->AddForce(springHit.ImpactNormal * GetSpringEnergy(startPos, springHit.Location, velocity) * GetMass());
}

void ASpring::ToggleGravity() const
{
	// Does the same for objMesh... Also calls RemoveVelocity
	Super::ToggleGravity();

	end->SetEnableGravity(!selected);
}

void ASpring::ToggleGravity(bool gravityOn)
{
	Super::ToggleGravity(gravityOn);

	end->SetEnableGravity(gravityOn);
}

void ASpring::RemoveVelocity() const
{
	Super::RemoveVelocity();

	end->SetPhysicsLinearVelocity(FVector::ZeroVector);
	end->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
}

float ASpring::GetSpringEnergy(const FVector& startPos, const FVector& endPos, const FVector& velocity) const
{
	const float change = (endPos - startPos).Length();

	// Damping is proportional to velocity
	const float dampingForce = damping * velocity.Length();

	// Spring energy with damping
	const float springEnergy = 0.5f * springConstant * change * change;

	// Damping energy
	const float dampingEnergy = dampingForce * change;

	return springEnergy + dampingEnergy;
}

void ASpring::Attach()
{
	
}

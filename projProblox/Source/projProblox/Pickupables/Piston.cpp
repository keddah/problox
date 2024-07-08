/**************************************************************************************************************
* Glider - Code
* 
* The code file for one of the pickupable objects.
* PROBLEMS:
* Doesn't work consistently
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/

#include "Piston.h"
#include "Cores/CubeCore.h"

APiston::APiston()
{
	flatHead = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Push Pad"));
	flatHead->SetupAttachment(mesh);
	flatHead->SetUseCCD(true);

	uiName = "Piston";
}

void APiston::Ability(const float deltaTime)
{
	Super::Ability(deltaTime);

	if(!parentCore) return;
	if(!parentCore->GetMesh()->IsSimulatingPhysics()) return;
	flatHead->SetCollisionResponseToAllChannels(moving? ECR_Block : ECR_Overlap);

	const FVector targetPos = active? FVector::UpVector * pushExtent : FVector::ZeroVector;
	const FVector relativePos = flatHead->GetRelativeLocation();

	FHitResult hit;
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);
	collisionParams.AddIgnoredActor(parentCore);

	// The center of the core...
	const FVector start = parentCore->GetActorLocation();
	const FVector end = flatHead->GetComponentLocation() + flatHead->GetUpVector() * 10 / flatHead->GetRelativeScale3D().Z; 
	flatHead->SetRelativeLocation(UKismetMathLibrary::VLerp(relativePos, targetPos, pushSpeed * deltaTime));

	// If the target position hasn't been met and the relative position is towards the middle of the movement.
	moving = !Approximately(relativePos.Length(), targetPos.Length(), 2);

	wrld->LineTraceSingleByChannel(hit, start, end, ECC_Visibility, collisionParams);
	
	if(!hit.bBlockingHit) return;

	if(!wrld || !moving || !canPush) return;

	// So that it doesn't happen every frame there's a ray collision.
	canPush = false;

	const FVector pushDir = parentCore->GetMesh()->GetSocketRotation(attachedSocket).Vector();
	
	// Push the other thing
	UPrimitiveComponent* comp = hit.GetComponent();
	if(comp->IsSimulatingPhysics())
	{
		// Print("pushing something else", 5)
		const FVector outputForce = pushDir * pushForce * 100 * comp->CalculateMass();
		comp->AddForceAtLocation(outputForce, hit.Location);
		return;
	}

	// Push self
	// Print("pushing self", 5)
	const FVector outputForce = pushDir * selfPropelForce * -1000 * sqrt(parentCore->GetMass());
	mesh->AddForceAtLocation(outputForce, hit.Location);
}

void APiston::SetAbilityActive(const bool value)
{
	Super::SetAbilityActive(value);
	mesh->SetHiddenInGame(!active);

	// So that you can't push yourself by activating whilst the piston is fully extended..
	canPush = flatHead->GetRelativeLocation().Length() < 20;
}

void APiston::SetShowMesh(const bool enable) const
{
	mesh->SetHiddenInGame(!enable);
	flatHead->SetHiddenInGame(!enable);
}

void APiston::Detach(bool push)
{
	ResetGhost();
	
	if(!parentCore)
	{
		Print("Couldn't detach... parent was invalid..", 4)
		return;
	}

	SetAbilityActive(false);

	SetHideOutlineMesh(true);
	RemoveVelocity();
	
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	if(push && parentCore)
	{
		const FVector launchDir = UKismetMathLibrary::GetForwardVector(parentCore->GetMesh()->GetSocketRotation(attachedSocket));
		const float launchForce = GetMass();
		constexpr float maxVelocity = 1000;

		SetShowMesh(true);
		ReEnablePhysics(); // The only change
		AddVelocity(launchDir * std::min(launchForce, maxVelocity));
	}
	
	if(parentCore) parentCore->RemoveAttachment(attachedSocket);
	silhouette->SetupAttachment(mesh);
	
	if(parentCore)
	{
		// Only play the detach sound if there was a parent core
		if(soundPlayer) soundPlayer->PlayDetach();
		else Print("Sfx manager is invalid.....", 5)
	}

	ToggleGravity(true);
	parentCore = nullptr;
	isAttached = false;
}

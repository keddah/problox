/**************************************************************************************************************
* Piston - Code (UNUSED) 
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
}

void APiston::Ability(const float deltaTime)
{
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
// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeCore.h"
#include "Wheel.h"


ACubeCore::ACubeCore()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	pivot = CreateDefaultSubobject<USceneComponent>(TEXT("Center"));
	pivot->AttachToComponent(objMesh, FAttachmentTransformRules::KeepRelativeTransform);

	thingHomer = CreateDefaultSubobject<UBoxComponent>("Bigger Collider");
	thingHomer->SetupAttachment(objMesh);
	thingCollector = CreateDefaultSubobject<UBoxComponent>("Smaller Collider");
	thingCollector->SetupAttachment(objMesh);
	
	placeRange = 50;
}

void ACubeCore::BeginPlay()
{
	Super::BeginPlay();
	
	// Create a socket info for each cube (also inherited to connectors)
	// Need to create one for each cube otherwise the information would be shared/overrided.
	socketInfo = NewObject<UCubeSocketInfo>();
	
	AdjustRange();
}

void ACubeCore::RemoveAttachment(const FName& socket)
{
	Super::RemoveAttachment(socket);

	socketInfo->RemoveAttachment(socket);
	GravitySelection();
}

void ACubeCore::SetAbilityActive(bool value)
{
	for (const auto& obj : socketInfo->GetAttachments()) obj->SetAbilityActive(value);
}

void ACubeCore::DetachAll()
{
	for(const auto& obj : socketInfo->GetAttachments())
	{
		obj->Detach();
		const FVector launchDir = UKismetMathLibrary::GetForwardVector(objMesh->GetSocketRotation(obj->GetAttachedSocket()));
		const float launchForce = obj->GetMass();
		obj->GravitySelection();
		obj->AddVelocity(launchDir * launchForce);
	}

	socketInfo->ClearAttachments();
}

void ACubeCore::SetSelected(const bool value)
{
	selected = value;
	GravitySelection();

	// Make the wheel ignore collisions and not ... fly away
	for(const auto& obj : socketInfo->GetAttachments())
	{
		if(obj->IsA<AWheel>()) Cast<AWheel>(obj)->SetParentDominates(true);
	}
	
	if(selected) return;

	// Make the wheel go back to normal when it's unselected.
	for(const auto& obj : socketInfo->GetAttachments())
	{
		if(obj->IsA<AWheel>()) Cast<AWheel>(obj)->SetParentDominates(false);
	}
	
	if(!IsValid(hitObj)) return;

	hitObj->ResetRotation();

	UStaticMeshComponent* hitMesh = hitObj->GetMesh();
	const FVector forwardVec = UKismetMathLibrary::GetForwardVector(objMesh->GetSocketRotation(attachedSocket));
	const FRotator rot = UKismetMathLibrary::MakeRotFromZ(forwardVec);

	// Rotate to match the socket rotation
	hitMesh->SetWorldRotation(rot);

	// Syncing the socket info
	AddAttachment(hitObj, attachedSocket);
	hitObj->SetAttachedSocket(attachedSocket);

	// Since the wheel uses physics constraints instead of normal attachments
	if(!hitObj->IsA<AWheel>()) hitObj->AttachToActor(this, attachRules, attachedSocket);
	else Cast<AWheel>(hitObj)->Attach(this, true);

	// Remove the reference to the hit object so that this part of SetSelected doesn't get called
	hitObj = 0;
}

float ACubeCore::GetMass() const
{
	float mass = objMesh->GetMass();

	for (const auto& obj : socketInfo->GetAttachments())
	{
		mass += obj->GetMass();
	}

	return mass;
}

void ACubeCore::Placement()
{
	if(!selected) return;
	if(ObjectInSocket("Down")) return;

	const UWorld* wrld = GetWorld();
	
	FHitResult hit;
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);
	collisionParams.MobilityType = EQueryMobilityType::Any;
	collisionParams.bDebugQuery = true;

	const FVector direction = objMesh->GetComponentRotation().RotateVector(placeDir);
	
	// Debug Draw
	const FVector start = pivot->GetComponentLocation();
	// DrawDebugLine(wrld, start, start + direction * placeRange, FColor::Red, false, 5);	
	wrld->LineTraceSingleByChannel(hit, start, start + direction * placeRange, ECC_Visibility, collisionParams);

	AActor* hitActor = hit.GetActor();
	if(!hit.bBlockingHit)
	{
		hitObj = 0;
		return;
	}

	// DrawDebugPoint(wrld, hit.ImpactPoint, 10, FColor::Green, false, 5);
	
	if(!hitActor)
	{
		hitObj = 0;
		return;
	}
	
	// If the cast was unsuccessful....
	if(APickupableMaster* obj = Cast<APickupableMaster>(hitActor)) hitObj = obj;
	else hitObj = 0;
	if(!IsValid(hitObj)) return;

	attachedSocket = "Down";
	hitObj->SetCore(this);
	hitObj->SetAttachedSocket(attachedSocket);
}

void ACubeCore::ResetRotation(bool resetVelocity)
{
	Super::ResetRotation(resetVelocity);

	if(!resetVelocity) return;

	for(const auto& obj : socketInfo->GetAttachments()) obj->RemoveVelocity();
}

void ACubeCore::AddAttachment(APickupableMaster* attachment, const FName& socket)
{
	Super::AddAttachment(attachment, socket);

	socketInfo->AddAttachment(attachment, socket);
	GravitySelection();

}

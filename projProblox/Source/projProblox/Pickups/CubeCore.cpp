// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeCore.h"

ACubeCore::ACubeCore()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	pivot = CreateDefaultSubobject<USceneComponent>(TEXT("Center"));
	pivot->AttachToComponent(objMesh, FAttachmentTransformRules::KeepRelativeTransform);

	placeRange = 50;

}

void ACubeCore::BeginPlay()
{
	Super::BeginPlay();
	AdjustRange();
}

void ACubeCore::RemoveAttachment(FName socket)
{
	Super::RemoveAttachment(socket);

	socketInfo->RemoveAttachment(socket);
}

void ACubeCore::SetAbilityActive(bool value)
{
	for (const auto& obj : socketInfo->GetAttachments()) obj->SetAbilityActive(value);
}

void ACubeCore::SetSelected(const bool value)
{
	selected = value;

	if(selected)
	{
		if(!hitObj) return;

		RemoveAttachment(attachedSocket);
		hitObj = nullptr;
		return;
	}

	if(!hitObj) return;

	hitObj->ResetRotation();

	const FRotator socketRotation = objMesh->GetSocketRotation(attachedSocket);
	const FVector socketDirection = FRotationMatrix(socketRotation).GetScaledAxis(EAxis::Z);

	UStaticMeshComponent* hitMesh = hitObj->GetMesh();
	
	// Rotate to match the socket rotation
	hitMesh->SetWorldRotation(socketDirection.Rotation());

	const FAttachmentTransformRules rules {EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, true};
	
	objMesh->AttachToComponent(hitObj->GetMesh(), rules, attachedSocket);
	AddAttachment(hitObj, attachedSocket);
	hitObj->SetAttachedSocket(attachedSocket);
}

float ACubeCore::GetMass() const
{
	float mass = Super::GetMass();

	for (const auto& obj : socketInfo->GetAttachments())
	{
		mass += obj->GetMass();
	}

	return mass;
}

void ACubeCore::Placement()
{
	GravitySelection();
	
	if(ObjectInSocket("Down"))
	{
		hitObj = nullptr;
		return;
	}
	
	if(!selected) return;
	
	const UWorld* wrld = GetWorld();
	
	FHitResult hit;
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);
	collisionParams.MobilityType = EQueryMobilityType::Any;
	collisionParams.bDebugQuery = true;

	const FVector direction = objMesh->GetComponentRotation().RotateVector(placeDir);
	
	// Debug Draw
	const FVector start = pivot->GetComponentLocation();
	DrawDebugLine(wrld, start, start + direction * placeRange, FColor::Red, false, 5);	
	wrld->LineTraceSingleByChannel(hit, start, start + direction * placeRange, ECC_Visibility, collisionParams);

	AActor* hitActor = hit.GetActor();
	if(!hitActor) return;
	
	// If the cast was unsuccessful....
	hitObj = Cast<APickupableMaster>(hitActor);
	if(!hitObj) return;
	
	attachedSocket = "Down";
	hitObj->SetCore(this);
	hitObj->SetAttachedSocket(attachedSocket);
}

void ACubeCore::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// for (auto& info : GetAttachedObjects(true))
	// {
	// 	if(info) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, info->GetName());
	// }
}

void ACubeCore::AddAttachment(APickupableMaster* attachment, FName socket)
{
	Super::AddAttachment(attachment, socket);

	socketInfo->AddAttachment(attachment, socket);
}

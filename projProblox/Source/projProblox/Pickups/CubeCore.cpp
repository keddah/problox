// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeCore.h"

ACubeCore::ACubeCore()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	pivot = CreateDefaultSubobject<USceneComponent>(TEXT("Center"));
	pivot->AttachToComponent(objMesh, FAttachmentTransformRules::KeepRelativeTransform);
}

void ACubeCore::BeginPlay()
{
	Super::BeginPlay();
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
		objMesh->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
		hitObj = nullptr;
		return;
	}

	if(!hitObj) return;

	hitObj->ResetRotation();

	const FRotator socketRotation = objMesh->GetSocketRotation(attachedSocket);
	const FVector socketDirection = FRotationMatrix(socketRotation).GetScaledAxis(EAxis::Z);

	// Rotate to match the socket rotation
	objMesh->SetWorldRotation(socketDirection.Rotation());

	const FAttachmentTransformRules rules {EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, true};

	hitObj->AttachToComponent(objMesh, rules, attachedSocket);
	AddAttachment(hitObj, attachedSocket);
	hitObj->SetAttachedSocket(attachedSocket);
}

void ACubeCore::Placement()
{
	GravitySelection();
	
	if(!selected) return;
	if(ObjectInSocket("Down"))
	{
		hitObj = nullptr;
		return;
	}
	
	const UWorld* wrld = GetWorld();
	
	FHitResult hit;
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);
	// collisionParams.AddIgnoredComponent(objMesh);
	// collisionParams.AddIgnoredComponent(collider);
	collisionParams.MobilityType = EQueryMobilityType::Any;
	collisionParams.bDebugQuery = true;

	const FVector direction = objMesh->GetComponentRotation().RotateVector(placeDir);
	
	// Debug Draw
	DrawDebugLine(wrld, pivot->GetComponentLocation(), objMesh->GetComponentLocation() + direction * placeRange, FColor::Red, false, 5);	
	wrld->LineTraceSingleByChannel(hit, pivot->GetComponentLocation(), direction * placeRange, ECC_Visibility, collisionParams);

	AActor* hitActor = hit.GetActor();
	if(!hitActor) return;
	
	hitObj = Cast<APickupableMaster>(hitActor);
	if(hitObj) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, hitObj->GetName());
	
	// If the cast was unsuccessful....
	if(!hitObj)
	{
		// Delete or set as null??
		hitObj = nullptr;
		// delete hitObj;
		return;
	}
	
	attachedSocket = "Down";
	hitObj->SetCore(this);
}

void ACubeCore::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACubeCore::AddAttachment(APickupableMaster* attachment, FName socket)
{
	Super::AddAttachment(attachment, socket);
}

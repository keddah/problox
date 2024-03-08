// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupableMaster.h"

#include "CubeCore.h"

// Sets default values
APickupableMaster::APickupableMaster()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	scene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	
	objMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	objMesh->AttachToComponent(scene, FAttachmentTransformRules::KeepRelativeTransform);
	objMesh->SetSimulatePhysics(true);
	
	collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
	collider->AttachToComponent(objMesh, FAttachmentTransformRules::KeepRelativeTransform);

	defaultRot = objMesh->GetRelativeRotation();

	scene->SetAutoActivate(true);
}

// Called when the game starts or when spawned
void APickupableMaster::BeginPlay()
{
	Super::BeginPlay();
	
}

void APickupableMaster::Placement()
{
	GravitySelection();
	
	if(!selected) return;
	
	const UWorld* wrld = GetWorld();
	
	FHitResult hit;
	const FVector direction = objMesh->GetComponentRotation().RotateVector(placeDir);
	
	// Debug Draw
	DrawDebugLine(wrld, objMesh->GetComponentLocation(), direction * placeRange, FColor::Red, false, 5);	
	wrld->LineTraceSingleByChannel(hit, objMesh->GetComponentLocation(), direction * placeRange, ECC_Visibility, FCollisionQueryParams::DefaultQueryParam);
	
	if(!hit.bBlockingHit) return;
	
	objCore = Cast<ACubeCore>(hit.GetActor());
	
	// If the cast was unsuccessful....
	if(!objCore)
	{
		// Delete or set as null??
		objCore = nullptr;
		// delete objCore;
		return;
	}
	
	// objCore has been set to the hit actor.
	const UStaticMeshComponent* coreMesh = objCore->GetMesh();
	
	float shortestDistance = 9999999;
	FName closestSocket = "None";
	
	for(const auto& socket: coreMesh->GetAllSocketNames())
	{
		if(objCore->ObjectInSocket(socket)) continue;
	
		const float distance = FVector::Distance(coreMesh->GetSocketLocation(socket), objMesh->GetComponentLocation());
		if(distance < shortestDistance)
		{
			shortestDistance = distance;
			closestSocket = socket;
		}
	}
	
	attachedSocket = closestSocket;
}

void APickupableMaster::Ability()
{
}

void APickupableMaster::ResetRotation(const bool resetVelocity)
{
	objMesh->SetRelativeRotation(defaultRot);

	if(!resetVelocity) return;

	objMesh->SetAllPhysicsLinearVelocity({});
	objMesh->SetAllPhysicsAngularVelocityInRadians({});
}

// Called every frame
void APickupableMaster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Ability();
	Placement();
}

void APickupableMaster::SetSelected(const bool value)
{
	selected = value;

	if(selected)
	{
		if(!objCore) return;

		objCore->RemoveAttachment(attachedSocket);
		objMesh->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
		active = false;
		return;
	}

	if(!objCore) return;

	ResetRotation();

	UStaticMeshComponent* coreMesh = objCore->GetMesh();
	const FRotator socketRotation = coreMesh->GetSocketRotation(attachedSocket);
	FVector socketDirection;
	
	if(placeDir.X != 0) socketDirection = FRotationMatrix(socketRotation).GetScaledAxis(EAxis::X);
	else if(placeDir.Y != 0) socketDirection = FRotationMatrix(socketRotation).GetScaledAxis(EAxis::Y);
	else if(placeDir.Z != 0) socketDirection = FRotationMatrix(socketRotation).GetScaledAxis(EAxis::Z);

	// Rotate to match the socket rotation
	objMesh->SetWorldRotation(socketDirection.Rotation());

	const FAttachmentTransformRules rules {EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, true};

	objMesh->AttachToComponent(coreMesh, rules, attachedSocket);
	objCore->AddAttachment(this, attachedSocket);
}


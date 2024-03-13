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
	objMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	objMesh->SetGenerateOverlapEvents(true);
	
	
	collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
	collider->AttachToComponent(objMesh, FAttachmentTransformRules::KeepRelativeTransform);
	collider->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	collider->SetCollisionResponseToChannel(ECC_Camera, ECR_Block);
	collider->AddRelativeLocation({0,0,50});
	
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

	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);
	collisionParams.MobilityType = EQueryMobilityType::Any;
	
	// Debug Draw
	const FVector start = objMesh->GetComponentLocation();
	DrawDebugLine(wrld, start, start + direction * placeRange, FColor::Red, false, 5);	
	wrld->LineTraceSingleByChannel(hit, start, start + direction * placeRange, ECC_Camera, collisionParams);

	if(!hit.bBlockingHit)
	{
		objCore = 0;
		return;
	}
	
	if(ACubeCore* core = Cast<ACubeCore>(hit.GetActor())) objCore = core;
	else objCore = nullptr;
	if(!IsValid(objCore)) return;
	
	// objCore has been set to the hit actor.
	const UStaticMeshComponent* coreMesh = objCore->GetMesh();
	
	float shortestDistance = 9999999;
	FName closestSocket = "None";

	for(int i = 0; i < 2; i++)
	{
		for(const auto& socket: coreMesh->GetAllSocketNames())
		{
			if(objCore) if(objCore->ObjectInSocket(socket)) continue;
			
			const float distance = FVector::Distance(coreMesh->GetSocketLocation(socket), hit.ImpactPoint);
			if(distance < shortestDistance)
			{
				shortestDistance = distance;
				closestSocket = socket;
			}
		}
	}
	
	attachedSocket = closestSocket;
}

void APickupableMaster::Ability()
{
}

void APickupableMaster::AddAttachment(APickupableMaster* attachment, const FName& socket)
{
	attachedSocket = socket;
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

void APickupableMaster::RotateMesh(const FRotator& rotation)
{
	if(!selected) return;
	
	FRotator dirRot;
	if(placeDir.X != 0) dirRot = UKismetMathLibrary::MakeRotFromX(placeDir);
	else if(placeDir.Y != 0) dirRot = UKismetMathLibrary::MakeRotFromY(placeDir);
	else if(placeDir.Z != 0) dirRot = UKismetMathLibrary::MakeRotFromZ(placeDir);
	objMesh->AddRelativeRotation(rotation);
}

void APickupableMaster::SetSelected(const bool value)
{
	selected = value;

	if(selected)
	{
		if(!IsValid(objCore)) return;

		objCore->RemoveAttachment(attachedSocket);
		objMesh->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
		active = false;
		isAttached = false;
		return;
	}

	if(!IsValid(objCore)) return;

	ResetRotation();

	UStaticMeshComponent* coreMesh = objCore->GetMesh();
	const FVector forwardVec = UKismetMathLibrary::GetForwardVector(coreMesh->GetSocketRotation(attachedSocket));

	FRotator rot;
	if(placeDir.X != 0) rot = UKismetMathLibrary::MakeRotFromX(forwardVec);
	else if(placeDir.Y != 0) rot = UKismetMathLibrary::MakeRotFromY(forwardVec);
	else if(placeDir.Z != 0) rot = UKismetMathLibrary::MakeRotFromZ(forwardVec);

	// Rotate to match the socket rotation
	objMesh->SetWorldRotation(rot);
	
	objMesh->AttachToComponent(coreMesh, attachRules, attachedSocket);
	objCore->AddAttachment(this, attachedSocket);
	isAttached = true;
}


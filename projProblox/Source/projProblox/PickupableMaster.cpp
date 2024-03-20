// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupableMaster.h"

#include "CubeCore.h"
#include "Thing.h"

// Sets default values
APickupableMaster::APickupableMaster()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	objMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	objMesh->SetSimulatePhysics(true);
	objMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	objMesh->SetGenerateOverlapEvents(true);
	// objMesh->SetNotifyRigidBodyCollision(true);
	
	collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
	collider->AttachToComponent(objMesh, FAttachmentTransformRules::KeepRelativeTransform);
	collider->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	collider->SetCollisionResponseToChannel(ECC_Camera, ECR_Block);
	collider->AddRelativeLocation({0,0,50});
	
	defaultRot = objMesh->GetRelativeRotation();
}

// Called when the game starts or when spawned
void APickupableMaster::BeginPlay()
{
	Super::BeginPlay();
}

void APickupableMaster::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	if(!IsValid(objCore)) return;
	// if(!IsValid(OtherActor)) return;

	// Successful cast???
	if(Cast<AThing>(OtherActor)) objCore->AddThing(OtherActor);
}

void APickupableMaster::Placement()
{
	if(!selected) return;
	
	const UWorld* wrld = GetWorld();
	
	FHitResult hit;
	const FVector direction = GetActorRotation().RotateVector(placeDir);

	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);
	collisionParams.MobilityType = EQueryMobilityType::Any;
	
	// Debug Draw
	const FVector start = GetActorLocation();
	DrawDebugLine(wrld, start, start + direction * placeRange, FColor::Red, false, 5);	
	wrld->LineTraceSingleByChannel(hit, start, start + direction * placeRange, ECC_Camera, collisionParams);

	if(!hit.bBlockingHit)
	{
		objCore = 0;
		return;
	}

	DrawDebugPoint(wrld, hit.ImpactPoint, 10, FColor::Green, false, 5);
	
	if(ACubeCore* core = Cast<ACubeCore>(hit.GetActor())) objCore = core;
	else objCore = nullptr;
	if(!IsValid(objCore)) return;
	
	// objCore has been set to the hit actor.
	const UStaticMeshComponent* coreMesh = objCore->GetMesh();
	
	float shortestDistance = 9999;
	FName closestSocket = "None";

	for(int i = 0; i < 2; i++)
	{
		for(const auto& socket: coreMesh->GetAllSocketNames())
		{
			if(objCore) if(objCore->ObjectInSocket(socket)) continue;
			
			const float distance = FVector::Distance(coreMesh->GetSocketLocation(socket), hit.ImpactPoint);

			// Don't allow the attachment if the socket is out of range.
			if(distance > placeRange) continue;
			
			if(distance < shortestDistance)
			{
				shortestDistance = distance;
				closestSocket = socket;
			}
		}
	}

	if(closestSocket != NAME_None) attachedSocket = closestSocket;

	// FRotator rot = NormalizeRotation(GetActorRotation());
	// Print(FString::FromInt(rot.Roll) + ", " + FString::FromInt(rot.Pitch) + ", " + FString::FromInt(rot.Yaw))
}

void APickupableMaster::AddAttachment(APickupableMaster* attachment, const FName& socket)
{
	attachedSocket = socket;
}

void APickupableMaster::ResetRotation(const bool resetVelocity)
{
	SetActorRotation(defaultRot);
	if(resetVelocity) RemoveVelocity();
}

void APickupableMaster::RemoveVelocity() const
{
	objMesh->SetAllPhysicsLinearVelocity({});
	objMesh->SetAllPhysicsAngularVelocityInRadians({});
}

void APickupableMaster::Detach()
{
	if(!IsValid(objCore)) return;

	objCore->RemoveAttachment(attachedSocket);
	objMesh->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	active = false;
	isAttached = false;
}

// Called every frame
void APickupableMaster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Ability();
	Placement();
}

void APickupableMaster::RotateVert(const float axis)
{
	if(vertAxis.X != 0) AddActorLocalRotation({0,0, axis * rotSpeed});
	else if(vertAxis.Y != 0) AddActorLocalRotation({axis * rotSpeed, 0, 0});
	else if(vertAxis.Z != 0) AddActorLocalRotation({0, axis * rotSpeed, 0});
}

void APickupableMaster::RotateHori(const float axis)
{
	if(horiAxis.X != 0) AddActorWorldRotation({0,0, axis * rotSpeed});
	else if(horiAxis.Y != 0) AddActorWorldRotation({axis * rotSpeed, 0, 0});
	else if(horiAxis.Z != 0) AddActorWorldRotation({0, axis * rotSpeed, 0});
}

void APickupableMaster::SnapRotateMesh(const bool hori, const FString keypress)
{
	const float turn = keypress == "Q" || keypress == "R"? -90 : 90;
		
	if(hori)
	{
		if(horiAxis.X != 0) AddActorWorldRotation({0,0, turn});
		else if(horiAxis.Y != 0) AddActorWorldRotation({turn, 0, 0});
		else if(horiAxis.Z != 0) AddActorWorldRotation({0, turn, 0});
		return;
	}

	if(vertAxis.X != 0) AddActorLocalRotation({0,0, turn});
	else if(vertAxis.Y != 0) AddActorLocalRotation({turn, 0, 0});
	else if(vertAxis.Z != 0) AddActorLocalRotation({0, turn, 0});
}

void APickupableMaster::SetSelected(const bool value)
{
	selected = value;
	GravitySelection();

	if(selected)
	{
		Detach();
		return;
	}

	if(!IsValid(objCore)) return;
	if(attachedSocket == NAME_None) return;

	const UStaticMeshComponent* coreMesh = objCore->GetMesh();
	const FVector forwardVec = UKismetMathLibrary::GetForwardVector(coreMesh->GetSocketRotation(attachedSocket));

	FRotator rot;
	if(placeDir.X != 0) rot = UKismetMathLibrary::MakeRotFromX(forwardVec);
	else if(placeDir.Y != 0) rot = UKismetMathLibrary::MakeRotFromY(forwardVec);
	else if(placeDir.Z != 0) rot = UKismetMathLibrary::MakeRotFromZ(forwardVec);

	const FRotator savedRot = RoundRotation(GetActorRotation());
	
	// Rotate to match the socket rotation
	SetActorRotation(rot);

	// Do this but just around the forward axis of the socket...
	if(placeDir.X != 0) AddActorWorldRotation(FRotator(0,0,savedRot.Roll));
	else if(placeDir.Y != 0) AddActorWorldRotation(FRotator(savedRot.Pitch,0,0));
	else if(placeDir.Z != 0) AddActorWorldRotation(FRotator(0, savedRot.Yaw, 0));
	
	AttachToActor(objCore, attachRules, attachedSocket);
	objCore->AddAttachment(this, attachedSocket);
	isAttached = true;
}


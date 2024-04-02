// Fill out your copyright notice in the Description page of Project Settings.


#include "Thing.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
AThing::AThing()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	body = CreateDefaultSubobject<UStaticMeshComponent>("Bottom");
	body->SetRelativeScale3D({.7f, .7f,.7f});
	body->SetSimulatePhysics(true);
}

// Called when the game starts or when spawned
void AThing::BeginPlay()
{
	Super::BeginPlay();

	core = Cast<ACubeCore>(UGameplayStatics::GetActorOfClass(GetWorld(), ACubeCore::StaticClass()));
	core->onRangeExceeded.AddDynamic(this, &AThing::DeactivateHoming);
}

// Called every frame
void AThing::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Drag();
	GoHome();
}

void AThing::Drag() const
{
	const FVector velocity = body->GetComponentVelocity();
	const FVector drag = sqrt(velocity.Length()) * velocity * -.1f;  
	body->AddForce(drag);
}

void AThing::GoHome() const
{
	if(safe) return;
	if(!isHoming) return;

	const FVector thisPos = GetActorLocation();
	const FVector corePos = core->GetActorLocation();
	
	const FVector direction = corePos - thisPos;
	const float squareDist = FVector::DistSquared(corePos, thisPos);
	
	body->AddForce(direction * (attractionForce * 1000) / squareDist);
}
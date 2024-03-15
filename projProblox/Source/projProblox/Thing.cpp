// Fill out your copyright notice in the Description page of Project Settings.


#include "Thing.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
AThing::AThing()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	head = CreateDefaultSubobject<UStaticMeshComponent>("Top");
	body = CreateDefaultSubobject<UStaticMeshComponent>("Bottom");

	head->SetupAttachment(body);

	body->SetRelativeScale3D({.7f, .7f,.7f});
	head->SetRelativeScale3D({.5f,.5f,.5f});
	head->AddRelativeLocation({0,0,80});
	
	body->SetSimulatePhysics(true);
}

// Called when the game starts or when spawned
void AThing::BeginPlay()
{
	Super::BeginPlay();

	core = Cast<ACubeCore>(UGameplayStatics::GetActorOfClass(GetWorld(), ACubeCore::StaticClass()));

	if(!IsValid(core)) GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Cyan, "Couldn't get core...");
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
	if(!isHoming) return;

	const FVector corePos = core->GetCenterPos();
	const FVector direction = corePos - GetActorLocation();

	body->AddForce(direction * moveSpeed);
}

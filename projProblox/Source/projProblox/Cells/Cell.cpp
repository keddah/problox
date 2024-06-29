/**************************************************************************************************************
* Cell - Code
* 
* The code file for the base cell. Gives functionality to the homing function and adds delegates at the start of the game.
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/

#include "Cell.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
ACell::ACell()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	body = CreateDefaultSubobject<UStaticMeshComponent>("Bottom");
	body->SetRelativeScale3D({.7f, .7f,.7f});
	body->SetSimulatePhysics(true);
	RootComponent = body;

	bAsyncPhysicsTickEnabled = true;
}

// Called when the game starts or when spawned
void ACell::BeginPlay()
{
	Super::BeginPlay();

	wrld = GetWorld();

	core = Cast<ACubeCore>(UGameplayStatics::GetActorOfClass(wrld, ACubeCore::StaticClass()));
	// if(core) core->onRangeExceeded.AddDynamic(this, &ACell::DeactivateHoming);
}

void ACell::AsyncPhysicsTickActor(float DeltaTime, float SimTime)
{
	Super::AsyncPhysicsTickActor(DeltaTime, SimTime); //Add this if you want it to work in Blueprints, this should be at the bottom, after your c++ code
	ReceiveAsyncPhysicsTick(DeltaTime, SimTime);

	GoHome();
}

void ACell::GoHome() const
{
	if(safe) return;
	if(!isHoming) return;

	const FVector thisPos = GetActorLocation();
	const FVector corePos = core->GetActorLocation();
	
	const FVector direction = corePos - thisPos;
	const float squareDist = FVector::DistSquared(corePos, thisPos);
	
	if(IsValid(body) && squareDist != 0) body->AddForce(direction * (attractionForce * 10000) / squareDist);
	else{}
}

void ACell::SetDormant(const bool dormant)
{
	if(safe) return;
	
	// Enable/disable physics and hide/show actor
	body->SetSimulatePhysics(!dormant);
	SetActorHiddenInGame(dormant);
}


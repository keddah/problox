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

	hitBox = CreateDefaultSubobject<USphereComponent>("Collision Box");
	hitBox->SetupAttachment(body);
	hitBox->SetRelativeScale3D({.05f,.05f,.05f});
	hitBox->SetSphereRadius(100);
	
	bAsyncPhysicsTickEnabled = true;
}

// Called when the game starts or when spawned
void ACell::BeginPlay()
{
	Super::BeginPlay();

	wrld = GetWorld();

	core = Cast<ACubeCore>(UGameplayStatics::GetActorOfClass(wrld, ACubeCore::StaticClass()));
	if(!core) Print("Couldnt get core ~ cell", 5)
	// if(core) core->onRangeExceeded.AddDynamic(this, &ACell::DeactivateHoming);
}

void ACell::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	// Doesn't work as intended when done in asyncTick
	thisPos = GetActorLocation();
	if(core) corePos = core->GetActorLocation();
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
	if(!core) return;
	if(!body->IsSimulatingPhysics()) return;

	const FVector direction = corePos - thisPos;
	const float squareDist = FVector::DistSquared(corePos, thisPos);
	
	body->AddForce(direction * (attractionForce * 10000) / squareDist);
}

void ACell::SetDormant(const bool dormant)
{
	if(safe) return;
	
	// Enable/disable physics and hide/show actor
	body->SetSimulatePhysics(!dormant);
	SetActorHiddenInGame(dormant);
}


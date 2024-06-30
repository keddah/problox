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
	bAsyncPhysicsTickEnabled = false;

	body = CreateDefaultSubobject<UStaticMeshComponent>("Bottom");
	body->SetRelativeScale3D({.7f, .7f,.7f});
	body->SetSimulatePhysics(true);
	RootComponent = body;

	hitBox = CreateDefaultSubobject<USphereComponent>("Collision Box");
	hitBox->SetupAttachment(body);
	hitBox->SetRelativeScale3D({.05f,.05f,.05f});
	hitBox->SetSphereRadius(100);
	
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
	if(safe) return;
	GoHome();

	Super::Tick(DeltaSeconds);
}

void ACell::GoHome() const
{
	if(!core) return;
	if(!body) return;
	if(!body->IsSimulatingPhysics()) return;
	if(!isHoming) return;

	const FVector corePos = core->GetActorLocation();
	const FVector thisPos = GetActorLocation();
	
	const FVector direction = corePos - thisPos;
	const float squareDist = FVector::DistSquared(corePos, thisPos);
	
	if(squareDist != 0) body->AddForce(direction * (attractionForce * 10000) / squareDist);
}

void ACell::SetDormant(const bool dormant)
{
	if(safe) return;

	if(dormant) isHoming = false;
	
	// Enable/disable physics and hide/show actor
	body->SetSimulatePhysics(!dormant);
	SetActorHiddenInGame(dormant);
}


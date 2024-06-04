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
}

// Called when the game starts or when spawned
void ACell::BeginPlay()
{
	Super::BeginPlay();

	core = Cast<ACubeCore>(UGameplayStatics::GetActorOfClass(GetWorld(), ACubeCore::StaticClass()));
	if(core) core->onRangeExceeded.AddDynamic(this, &ACell::DeactivateHoming);
}

// Called every frame
void ACell::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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
	
	body->AddForce(direction * (attractionForce * 10000) / squareDist);
}
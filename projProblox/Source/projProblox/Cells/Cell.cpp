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
	body->SetRelativeScale3D({.85f, .85f,.85f});
	body->SetSimulatePhysics(true);
	RootComponent = body;

	if(GEngine) body->SetMassOverrideInKg("", .01f);

	hitBox = CreateDefaultSubobject<USphereComponent>("Collision Box");
	hitBox->SetupAttachment(body);
	hitBox->SetRelativeScale3D({.05f,.05f,.05f});
	hitBox->SetSphereRadius(100);

	fx = CreateDefaultSubobject<UNiagaraComponent>("Effects Player");
	fx->SetupAttachment(body);

	fx->SetAutoActivate(false);
}

// Called when the game starts or when spawned
void ACell::BeginPlay()
{
	Super::BeginPlay();

	core = Cast<ACubeCore>(UGameplayStatics::GetActorOfClass(GetWorld(), ACubeCore::StaticClass()));
	if(!core) Print("Couldnt get core ~ cell", 5)
}

void ACell::Tick(float DeltaSeconds)
{
	// Don't do anything if already collected
	if(safe) return;
	GoHome();

	Super::Tick(DeltaSeconds);
}

void ACell::GoHome() const
{
	if(!core || !body) return;
	if(!body->IsSimulatingPhysics()) return;
	if(!isHoming) return;

	const FVector corePos = core->GetActorLocation();
	const FVector thisPos = GetActorLocation();
	
	const FVector direction = (corePos - thisPos).GetSafeNormal();
	body->AddForce(direction * attractionForce);
}

void ACell::Teleport(const FVector& pos)
{
	fx->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	if(fx->GetFXSystemAsset()) fx->ActivateSystem();
	else Print("No vfx given..", 4)
	
	// Shrink so that more can fit in the collector
	body->SetRelativeScale3D({.25f,.25f,.25f});

	// Remove its velocity
	body->SetPhysicsLinearVelocity({});

	SetActorLocation(pos);
	safe = true;

	// Stop doing ticks.
	PrimaryActorTick.bCanEverTick = false;
	bAsyncPhysicsTickEnabled = false;
}

void ACell::SetDormant(const bool dormant)
{
	if(dormant) isHoming = false;

	PrimaryActorTick.bCanEverTick = !dormant;
	SetActorEnableCollision(!dormant);
	SetActorHiddenInGame(dormant);

	// ACCESSING "body" WHEN LOADING LEVELS SOMETIMES CAUSES EXCEPTION ERRORS
	// Enable/disable physics and hide/show actor
	if(body) body->SetSimulatePhysics(!dormant);
}


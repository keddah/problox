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
	bAlwaysRelevant = true;
	bRelevantForLevelBounds = false;
	
	body = CreateDefaultSubobject<UStaticMeshComponent>("Bottom");
	body->SetRelativeScale3D({.85f, .85f,.85f});
	body->SetSimulatePhysics(true);
	body->SetUseCCD(true)
	;
	if(IsValid(GEngine)) body->SetMassOverrideInKg("", .01f);

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
	if(!IsValid(core)) Print("Couldnt get core ~ cell", 5)
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
	if(!IsValid(core) || !IsValid(body)) return;
	if(!body->IsSimulatingPhysics()) return;
	if(!isHoming) return;

	const FVector corePos = core->GetActorLocation();
	const FVector thisPos = GetActorLocation();
	
	const FVector direction = (corePos - thisPos).GetSafeNormal();
	body->AddForce(direction * attractionForce);
}

// The cells will be destroyed the next time the player leaves the level so there aren't any hiccups (+ so the vfx work)
void ACell::Kill()
{
	safe = true;

	fx->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	if(fx->GetFXSystemAsset()) fx->ActivateSystem();
	else Print("No vfx given..", 4)

	if(IsValid(body)) body->DestroyComponent();

	FTimerHandle handle;
	GetWorld()->GetTimerManager().SetTimer(handle, [this]{ Destroy();} , 1, false);
}

void ACell::SetDormant(const bool dormant)
{
	if(safe) return;
	if(!IsValid(this)) return;
	if(!this->IsValidLowLevel()) return;
	
	
	PrimaryActorTick.bCanEverTick = !dormant;
	SetActorEnableCollision(!dormant);
	SetActorHiddenInGame(dormant);
	isHoming = false;

	body->SetSimulatePhysics(!dormant);
}


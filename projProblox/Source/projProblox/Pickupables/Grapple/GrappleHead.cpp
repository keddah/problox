/**************************************************************************************************************
* Grapple Head - Code
* 
* Creates all of the components that the grapple head blueprint needs as well as its variables. 
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/



#include "GrappleHead.h"

// Sets default values
AGrappleHead::AGrappleHead()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Hook"));
	
	collider = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collision"));
	collider->SetupAttachment(mesh);
}

void AGrappleHead::BeginPlay()
{
	Super::BeginPlay();
}
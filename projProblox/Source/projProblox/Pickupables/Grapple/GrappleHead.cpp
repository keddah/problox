/**************************************************************************************************************
* Grapple Head - Code
* 
* Creates all the components that the grapple head blueprint needs.
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "GrappleHead.h"

// Sets default values
AGrappleHead::AGrappleHead()
{
	PrimaryActorTick.bCanEverTick = false;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Hook"));
	
	collider = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collision"));
	collider->SetupAttachment(mesh);
}
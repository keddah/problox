/**************************************************************************************************************
* Grapple Head - Header
* 
* Declares all the components that the grapple head blueprint needs as well as its variables. 
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "GrappleHead.generated.h"

UCLASS()
class PROJPROBLOX_API AGrappleHead : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	float cancelDistance = 500;

	
public:
	AGrappleHead();
	UStaticMeshComponent* GetMesh() const { return mesh; }

	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* mesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USphereComponent* collider;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float launchForce = 3;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float pullSpeed = 9;
};

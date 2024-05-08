// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "Hoverer.generated.h"

class HoverPoint : public AActor
{
	class SubHover : public AActor
	{
	public:
		SubHover() {};

		TArray<FTransform> GetTransforms() const
		{
			return
		{
				lPoint->GetRelativeTransform(),
				rPoint->GetRelativeTransform(),
				uPoint->GetRelativeTransform(),
				dPoint->GetRelativeTransform()
			};
		}

		void Init(USceneComponent* parent)
		{
			if(!parent) return;
	
			lPoint = CreateDefaultSubobject<USceneComponent>("Left");
			rPoint = CreateDefaultSubobject<USceneComponent>("Right");
			uPoint = CreateDefaultSubobject<USceneComponent>("Up");
			dPoint = CreateDefaultSubobject<USceneComponent>("Down");
			lPoint->SetupAttachment(parent);
			rPoint->SetupAttachment(parent);
			uPoint->SetupAttachment(parent);
			dPoint->SetupAttachment(parent);
	
			lPoint->SetRelativeRotation({45, 90, 0});
			rPoint->SetRelativeRotation({45, -90, 0});
			uPoint->SetRelativeRotation({45, 0, 0});
			dPoint->SetRelativeRotation({45, 180, 0});
		}
		
	private:
		USceneComponent* lPoint;
		USceneComponent* rPoint;
		USceneComponent* uPoint;
		USceneComponent* dPoint;
	};

	USceneComponent* point;
	SubHover subPoints;

public:
	HoverPoint() {}

	void Init()
	{
		point = CreateDefaultSubobject<USceneComponent>("Center");
		// point->SetupAttachment(mainMesh);

		subPoints.Init(point);
	}
		

	FVector GetPosition() const { return point->GetComponentLocation(); }
	TArray<FTransform> GetTransforms() const
	{
		TArray<FTransform> out = { point->GetRelativeTransform() };
		out.Append(subPoints.GetTransforms());
		return out;
	}
	
	const SubHover& GetSubHovers() const { return subPoints; }
};


UCLASS()
class PROJPROBLOX_API AHoverer : public APickupableMaster
{
	GENERATED_BODY()

	AHoverer();
	virtual void BeginPlay() override;
	
	virtual void Ability(float deltaTime) override;
	virtual void SetAbilityActive(const bool value) override;
	
	UPROPERTY(EditDefaultsOnly)
	USceneComponent* topLeft;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* topRight;

	UPROPERTY(EditDefaultsOnly)
   	USceneComponent* bottomLeft;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* bottomRight;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* sideUp;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* sideDown;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* sideLeft;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* sideRight;

	UPROPERTY(EditDefaultsOnly)
	float hoverDistance = 250;

	UPROPERTY(EditDefaultsOnly, meta = (ClampMin = 0, ToolTip = "How strong the falloff for the hover strength is (relative to the distance to the floor)."))
	float distanceMultiplier = .1f;

	UPROPERTY(EditDefaultsOnly)
	float hoverStrength = 30;
};
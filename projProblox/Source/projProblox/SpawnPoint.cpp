// Created by Dean Atkinson-Walker 2024


#include "SpawnPoint.h"

#include "Pickupables/Cores/Connectors/CubeConnector.h"

// Sets default values
ASpawnPoint::ASpawnPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	defaultScene = CreateDefaultSubobject<USceneComponent>("Default Scene Root");
	unlockTrigger = CreateDefaultSubobject<UBoxComponent>("Unlock Trigger");
	unlockTrigger->SetupAttachment(defaultScene);

	direction = CreateDefaultSubobject<UArrowComponent>("Direction Indicator");
	direction->SetupAttachment(defaultScene);
}


void ASpawnPoint::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	// Don't do anything if the point has already been unlocked
	if(unlocked) return;
	
	if(OtherActor->IsA<ACubeConnector>()) return;
	if(!Cast<ACubeCore>(OtherActor)) return;

	UnlockPoint();
}

UTexture* ASpawnPoint::CaptureScreenshot()
{
    // Create a SceneCaptureComponent2D
    USceneCaptureComponent2D* SceneCaptureComponent = NewObject<USceneCaptureComponent2D>(this);
    SceneCaptureComponent->SetupAttachment(RootComponent);
    SceneCaptureComponent->RegisterComponent();

    // Create a Render Target
    UTextureRenderTarget2D* RenderTarget = NewObject<UTextureRenderTarget2D>();
    RenderTarget->InitAutoFormat(600, 600);
    RenderTarget->UpdateResourceImmediate(true);

    // Assign the Render Target to the SceneCaptureComponent
    SceneCaptureComponent->TextureTarget = RenderTarget;
    SceneCaptureComponent->CaptureSource = SCS_FinalColorLDR;
    SceneCaptureComponent->bCaptureEveryFrame = false;
    SceneCaptureComponent->bCaptureOnMovement = false;
    SceneCaptureComponent->ShowFlags.SetDynamicShadows(true);
    SceneCaptureComponent->ShowFlags.SetAntiAliasing(false);

    FPostProcessSettings& PostProcessSettings = SceneCaptureComponent->PostProcessSettings;
    PostProcessSettings.bOverride_AutoExposureMethod = true;
    PostProcessSettings.AutoExposureMethod = AEM_MAX;
    PostProcessSettings.bOverride_AutoExposureBias = true;
    PostProcessSettings.AutoExposureBias = 10;

    // Capture the scene
    SceneCaptureComponent->CaptureScene();

    // Read the pixels from the Render Target
    TArray<FColor> OutBMP;
    FRenderTarget* RenderTargetResource = RenderTarget->GameThread_GetRenderTargetResource();
    RenderTargetResource->ReadPixels(OutBMP);

    // Create a new Texture2D
    UTexture2D* ScreenshotTexture = UTexture2D::CreateTransient(RenderTarget->SizeX, RenderTarget->SizeY, PF_B8G8R8A8);
    if (!ScreenshotTexture) return nullptr;

    // Lock the texture for editing
    FTexture2DMipMap& Mip = ScreenshotTexture->PlatformData->Mips[0];
    void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);

    // Copy the pixels to the texture
    FMemory::Memcpy(Data, OutBMP.GetData(), OutBMP.Num() * sizeof(FColor));

    // Unlock the texture
    Mip.BulkData.Unlock();
    ScreenshotTexture->UpdateResource();

    // Cleanup
    SceneCaptureComponent->DestroyComponent();
    RenderTarget->ConditionalBeginDestroy();

    return ScreenshotTexture;
}

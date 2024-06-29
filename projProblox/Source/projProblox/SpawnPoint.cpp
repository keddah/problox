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
    SceneCaptureComponent->ShowFlags.SetAntiAliasing(true);

    // Adjust Post-Processing Settings for Brightness
    FPostProcessSettings& PostProcessSettings = SceneCaptureComponent->PostProcessSettings;

	// Camera settings
	PostProcessSettings.bOverride_CameraShutterSpeed = true;
	PostProcessSettings.CameraShutterSpeed = 1/300;  
	PostProcessSettings.bOverride_CameraISO = true;
	PostProcessSettings.CameraISO = 8000;  

	// Auto exposure settings
	PostProcessSettings.bOverride_AutoExposureMethod = true;
	PostProcessSettings.AutoExposureMethod = EAutoExposureMethod::AEM_Histogram;
	PostProcessSettings.bOverride_AutoExposureBias = true;
	PostProcessSettings.AutoExposureBias = 3; 
	PostProcessSettings.bOverride_AutoExposureMaxBrightness = true; 
	PostProcessSettings.bOverride_AutoExposureMinBrightness = true; 
	PostProcessSettings.AutoExposureMaxBrightness = 20000; 
	PostProcessSettings.AutoExposureMinBrightness = 9000; 

	// Bloom settings
	PostProcessSettings.bOverride_BloomIntensity = true;
	PostProcessSettings.BloomIntensity = 0.3f;
	PostProcessSettings.bOverride_BloomThreshold = true;
	PostProcessSettings.BloomThreshold = -1.0f; 
	PostProcessSettings.bOverride_BloomSizeScale = true;
	PostProcessSettings.BloomSizeScale = 1.0f; 


	// Lens flare settings
	PostProcessSettings.bOverride_LensFlareIntensity = true;
	PostProcessSettings.LensFlareIntensity = 0.2f;  

	// Color grading settings
	PostProcessSettings.bOverride_FilmToe = true;
	PostProcessSettings.FilmToe = .1f;  
	PostProcessSettings.bOverride_FilmShoulder = true;
	PostProcessSettings.FilmShoulder = 0.9f;  
	PostProcessSettings.bOverride_FilmWhiteClip = true;
	PostProcessSettings.FilmWhiteClip = 1.0f;
	PostProcessSettings.bOverride_FilmBlackClip = true;
	PostProcessSettings.FilmBlackClip = 0.0f; 

	// Depth of field settings
	PostProcessSettings.bOverride_DepthOfFieldFstop = true;
	PostProcessSettings.DepthOfFieldFstop = 5.6f; 

	// Ambient occlusion settings
	PostProcessSettings.bOverride_AmbientOcclusionIntensity = true;
	PostProcessSettings.AmbientOcclusionIntensity = 0.9f;  
	PostProcessSettings.bOverride_AmbientOcclusionRadius = true;
	PostProcessSettings.AmbientOcclusionRadius = 250.0f; 

	// Motion blur settings
	PostProcessSettings.bOverride_MotionBlurAmount = true;
	PostProcessSettings.MotionBlurAmount = 0.3f;  
	PostProcessSettings.bOverride_MotionBlurMax = true;
	PostProcessSettings.MotionBlurMax = 0.3f; 

	// Screen space reflection settings
	PostProcessSettings.bOverride_ScreenSpaceReflectionIntensity = true;
	PostProcessSettings.ScreenSpaceReflectionIntensity = 100.0f; 
	PostProcessSettings.bOverride_ScreenSpaceReflectionQuality = true;
	PostProcessSettings.ScreenSpaceReflectionQuality = 100.0f;  
	PostProcessSettings.bOverride_ScreenSpaceReflectionMaxRoughness = true;
	PostProcessSettings.ScreenSpaceReflectionMaxRoughness = 0.5f; 

	
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


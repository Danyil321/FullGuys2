// Copyright 2023 Dmitry Karpukhin. All Rights Reserved.

#include "SkyCreatorActor.h"
#include "Components/SceneComponent.h"
#include "Components/BillboardComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/VolumetricCloudComponent.h"
#include "Components/SkyLightComponent.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/PostProcessComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Kismet/KismetMaterialLibrary.h"
#include "Kismet/KismetStringLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/Canvas.h"
#include "Net/UnrealNetwork.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Engine/World.h"

// Sets default values
ASkyCreator::ASkyCreator(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

	//Structure to hold one-time initialization
	struct FConstructorStatics
	{
		// Find Textures
		ConstructorHelpers::FObjectFinder<UTexture2D> BillboardIcon;
		ConstructorHelpers::FObjectFinder<UTexture2D> StarMapTexture;
		ConstructorHelpers::FObjectFinder<UTextureRenderTarget2D> OcclusionRT;
		ConstructorHelpers::FObjectFinder<UTextureRenderTarget2D> DistantOcclusionRT;
		ConstructorHelpers::FObjectFinder<UTextureRenderTarget2D> RainRipplesNormalRT;
		ConstructorHelpers::FObjectFinder<UTextureRenderTarget2D> LightningParametersRT;
		// Find Materials
		ConstructorHelpers::FObjectFinder<UMaterialInterface> VolumetricCloudMaterial;
		ConstructorHelpers::FObjectFinder<UMaterialInterface> VolumetricCloudDensitySampleMaterial;
		ConstructorHelpers::FObjectFinder<UMaterialInterface> SkySphereMaterial;
		ConstructorHelpers::FObjectFinder<UMaterialInterface> SunLightFunction;
		ConstructorHelpers::FObjectFinder<UMaterialInterface> MoonLightFunction;
		ConstructorHelpers::FObjectFinder<UMaterialInterface> PostProcessOcclusionDebug;
		// Find Niagara Systems
		ConstructorHelpers::FObjectFinder<UNiagaraSystem> WeatherFX;
		ConstructorHelpers::FObjectFinder<UNiagaraSystem> LightningStrikeSystem;
		ConstructorHelpers::FObjectFinder<UNiagaraSystem> RainRipplesFX;
		ConstructorHelpers::FObjectFinder<UNiagaraSystem> RainDropsFX;
		ConstructorHelpers::FObjectFinder<UNiagaraSystem> RainStreaksFX;
		ConstructorHelpers::FObjectFinder<UNiagaraSystem> RainSplatterFX;
		// Find misc
		ConstructorHelpers::FObjectFinder<UStaticMesh> Compass;
		ConstructorHelpers::FObjectFinder<UStaticMesh> SkySphere;
		ConstructorHelpers::FObjectFinder<USkyCreatorWeatherPreset> DefaultWeatherPreset;
		ConstructorHelpers::FObjectFinder<UMaterialParameterCollection> CommonMPC;
		ConstructorHelpers::FObjectFinder<UMaterialParameterCollection> VolumetricCloudsMPC;

		FConstructorStatics()
			: BillboardIcon(TEXT("Texture2D'/SkyCreatorPlugin/Textures/Icons/T_SkyCreator_BillboardIcon'"))
			, StarMapTexture(TEXT("Texture2D'/SkyCreatorPlugin/Textures/SkySphere/TC_SC_StarMap_4K'"))
			, OcclusionRT(TEXT("Texture2D'/SkyCreatorPlugin/Textures/Occlusion/RT_SC_OcclusionDepth'"))
			, DistantOcclusionRT(TEXT("Texture2D'/SkyCreatorPlugin/Textures/Occlusion/RT_SC_DistantOcclusionDepth'"))
			, RainRipplesNormalRT(TEXT("Texture2D'/SkyCreatorPlugin/Textures/WeatherMaterialFX/RT_SC_RainRipples_Normal'"))
			, LightningParametersRT(TEXT("Texture2D'/SkyCreatorPlugin/Textures/WeatherFX/RT_SC_LightningParameters'"))

			, VolumetricCloudMaterial(TEXT("MaterialInterface'/SkyCreatorPlugin/Materials/VolumetricClouds/M_SC_VolumetricClouds_MSAOC1_GC0_RMVS1.M_SC_VolumetricClouds_MSAOC1_GC0_RMVS1'"))
			, VolumetricCloudDensitySampleMaterial(TEXT("MaterialInterface'/SkyCreatorPlugin/Materials/VolumetricClouds/MI_SC_VolumetricCloud_DensitySample.MI_SC_VolumetricCloud_DensitySample'"))
			, SkySphereMaterial(TEXT("MaterialInterface'/SkyCreatorPlugin/Materials/SkySphere/MI_SC_SkySphere.MI_SC_SkySphere'"))
			, SunLightFunction(TEXT("MaterialInterface'/SkyCreatorPlugin/Materials/Common/M_SC_SunLightFunction.M_SC_SunLightFunction'"))
			, MoonLightFunction(TEXT("MaterialInterface'/SkyCreatorPlugin/Materials/Common/M_SC_MoonLightFunction.M_SC_MoonLightFunction'"))
			, PostProcessOcclusionDebug(TEXT("MaterialInterface'/SkyCreatorPlugin/Materials/Occlusion/PP_SC_OcclusionDebug.PP_SC_OcclusionDebug'"))
		
			, WeatherFX(TEXT("NiagaraSystem'/SkyCreatorPlugin/Effects/WeatherFX/SC_WeatherFX_System'"))
			, LightningStrikeSystem(TEXT("NiagaraSystem'/SkyCreatorPlugin/Effects/WeatherFX/SC_LightningFX_System'"))
			, RainRipplesFX(TEXT("NiagaraSystem'/SkyCreatorPlugin/Effects/MaterialFX/SC_RainRipplesFX_System'"))
			, RainDropsFX(TEXT("NiagaraSystem'/SkyCreatorPlugin/Effects/MaterialFX/SC_RainDropsFX_System'"))
			, RainStreaksFX(TEXT("NiagaraSystem'/SkyCreatorPlugin/Effects/MaterialFX/SC_RainStreaksFX_System'"))
			, RainSplatterFX(TEXT("NiagaraSystem'/SkyCreatorPlugin/Effects/MaterialFX/SC_RainSplatterFX_System'"))
		
			, Compass(TEXT("StaticMesh'/SkyCreatorPlugin/Meshes/SM_SC_Compass'"))
			, SkySphere(TEXT("StaticMesh'/SkyCreatorPlugin/Meshes/SM_SC_SkySphere'"))
			, DefaultWeatherPreset(TEXT("DataAsset'/SkyCreatorPlugin/WeatherPresets/Weather_Default'"))
			, CommonMPC(TEXT("MaterialParameterCollection'/SkyCreatorPlugin/Materials/Common/MPC_SC_Common'"))
			, VolumetricCloudsMPC(TEXT("MaterialParameterCollection'/SkyCreatorPlugin/Materials/VolumetricClouds/MPC_SC_VolumetricClouds'"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
//	PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	bReplicates = true;
	bAlwaysRelevant = true;
	NetUpdateFrequency = 100.0f;

	//Set default textures
	OcclusionRenderTarget = ConstructorStatics.OcclusionRT.Object;
	DistantOcclusionRenderTarget = ConstructorStatics.DistantOcclusionRT.Object;
	StarMapTexture = ConstructorStatics.StarMapTexture.Object;

	//Set default materials
	CurrentVolumetricCloudMaterial = ConstructorStatics.VolumetricCloudMaterial.Object;
	VolumetricCloudDensitySampleMaterial = ConstructorStatics.VolumetricCloudDensitySampleMaterial.Object;
	SkySphereMaterial = ConstructorStatics.SkySphereMaterial.Object;
	OcclusionDebugPostProcess = ConstructorStatics.PostProcessOcclusionDebug.Object;

	//Set default misc
	EditorWeatherPreset = ConstructorStatics.DefaultWeatherPreset.Object;
	CommonMPC = ConstructorStatics.CommonMPC.Object;
	VolumetricCloudsMPC = ConstructorStatics.VolumetricCloudsMPC.Object;
	LightningStrikeSystem = ConstructorStatics.LightningStrikeSystem.Object;

	//Set root
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
	Root->SetMobility(EComponentMobility::Type::Movable);
	RootComponent = Root;

#if WITH_EDITOR
	//Set billboard
	Billboard = CreateEditorOnlyDefaultSubobject<UBillboardComponent>(TEXT("Billboard Component"));
	if (Billboard)
	{
		Billboard->SetMobility(EComponentMobility::Type::Movable);
		Billboard->SetupAttachment(RootComponent);
		Billboard->Sprite = ConstructorStatics.BillboardIcon.Object;
		Billboard->bIsScreenSizeScaled = true;
		Billboard->ScreenSize = 0.001f;
		Billboard->SetRelativeLocation(FVector(0, 0, 100.0f));
	}

	Compass = CreateEditorOnlyDefaultSubobject<UStaticMeshComponent>(TEXT("Compass Mesh Component"));
	if (Compass)
	{
		Compass->SetMobility(EComponentMobility::Type::Movable);
		Compass->SetupAttachment(RootComponent);
		Compass->SetCollisionProfileName("NoCollision", false);
		Compass->SetStaticMesh(ConstructorStatics.Compass.Object);
		Compass->SetRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
		Compass->SetHiddenInGame(true);
		Compass->SetCastShadow(false);
		Compass->bCastStaticShadow = false;
	}
#endif

	SkyAtmosphere = CreateDefaultSubobject<USkyAtmosphereComponent>(TEXT("Sky Atmosphere Component"));
	if (SkyAtmosphere)
	{
		SkyAtmosphere->SetMobility(SkyAtmosphereMobility);
		SkyAtmosphere->SetupAttachment(RootComponent);
		SkyAtmosphere->AerialPerspectiveStartDepth = 0.01f;
	}

	VolumetricCloud = CreateDefaultSubobject<UVolumetricCloudComponent>(TEXT("Volumetric Cloud Component"));
	if (VolumetricCloud)
	{
		VolumetricCloud->SetMobility(EComponentMobility::Type::Movable);
		VolumetricCloud->SetupAttachment(RootComponent);
	}

	SkyLight = CreateDefaultSubobject<USkyLightComponent>(TEXT("Sky Light Component"));
	if (SkyLight)
	{
		SkyLight->SetMobility(SkyLightMobility);
		SkyLight->SetupAttachment(RootComponent);
	}

	SunLight = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("Sun Light Component"));
	if (SunLight)
	{
		SunLight->SetMobility(SunLightMobility);
		SunLight->SetupAttachment(RootComponent);
		SunLight->SetAtmosphereSunLight(true);
		SunLight->SetAtmosphereSunLightIndex(0);
		SunLight->bCastCloudShadows = true;
//		SunLight->bPerPixelAtmosphereTransmittance = true;
		SunLight->CloudShadowExtent = 25.0f;
//		SunLight->LightFunctionMaterial = ConstructorStatics.SunLightFunction.Object;
		SunLight->LightFunctionFadeDistance = 10000000.0f;
//		SunLight->DisabledBrightness = 1.0f;
		SunLight->ForwardShadingPriority = 1;
	}

	MoonLight = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("Moon Light Component"));
	if (MoonLight)
	{
		MoonLight->SetMobility(MoonLightMobility);
		MoonLight->SetupAttachment(RootComponent);
		MoonLight->SetAtmosphereSunLight(true);
		MoonLight->SetAtmosphereSunLightIndex(1);
		MoonLight->bCastCloudShadows = true;
//		MoonLight->bPerPixelAtmosphereTransmittance = true;
		MoonLight->CloudShadowExtent = 25.0f;
//		MoonLight->LightFunctionMaterial = ConstructorStatics.MoonLightFunction.Object;
		MoonLight->LightFunctionFadeDistance = 10000000.0f;
//		MoonLight->DisabledBrightness = 1.0f;
		MoonLight->ForwardShadingPriority = 0;
	}

	ExponentialHeightFog = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("Exponential Height Fog Component"));
	if (ExponentialHeightFog)
	{
		ExponentialHeightFog->SetMobility(EComponentMobility::Type::Movable);
		ExponentialHeightFog->SetupAttachment(RootComponent);

		if (bEnableExponentialHeightFog)
		{
			ExponentialHeightFog->SetVisibility(true);
			ExponentialHeightFog->SetHiddenInGame(false);
		}
		else 
		{
			ExponentialHeightFog->SetVisibility(false);
			ExponentialHeightFog->SetHiddenInGame(true);
		}
	}

	SkySphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sky Sphere Component"));
	if (SkySphere)
	{
		SkySphere->SetMobility(EComponentMobility::Type::Movable);
		SkySphere->SetupAttachment(RootComponent);
		SkySphere->SetCollisionProfileName("NoCollision", false);
		SkySphere->SetStaticMesh(ConstructorStatics.SkySphere.Object);
		SkySphere->SetCastShadow(false);
		SkySphere->SetRelativeScale3D(FVector(SkySphereRadius, SkySphereRadius, SkySphereRadius));
	}

	OcclusionCapture = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Occlusion Capture Component"));
	if (OcclusionCapture)
	{
		OcclusionCapture->SetupAttachment(RootComponent);
		//OcclusionCapture->AttachToComponent(RootComponent, FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
		OcclusionCapture->SetMobility(EComponentMobility::Type::Movable);
//		OcclusionCapture->SetWorldRotation(FRotator(-90.0f, 270.0f, 0.0f));
		OcclusionCapture->ProjectionType = ECameraProjectionMode::Orthographic;
		OcclusionCapture->CaptureSource = ESceneCaptureSource::SCS_SceneDepth;
		OcclusionCapture->bCaptureEveryFrame = false;
		OcclusionCapture->bCaptureOnMovement = false;
		OcclusionCapture->bAlwaysPersistRenderingState = true;
		OcclusionCapture->ProfilingEventName = FString(TEXT("Sky Creator Occlusion Capture"));
//		OcclusionCapture->AddOrUpdateBlendable(ConstructorStatics.PostProcessWorldHeight.Object);
		// General Show Flags
		OcclusionCapture->ShowFlags.AntiAliasing = false;
		//OcclusionCapture->ShowFlags.Atmosphere = true;
		OcclusionCapture->ShowFlags.Decals = false;
		OcclusionCapture->ShowFlags.Fog = false;
		OcclusionCapture->ShowFlags.Particles = false;
		OcclusionCapture->ShowFlags.SkeletalMeshes = false;
		// Advanced Show Flags
		OcclusionCapture->ShowFlags.DeferredLighting = false;
		OcclusionCapture->ShowFlags.InstancedFoliage = false;
//		OcclusionCapture->ShowFlags.InstancedStaticMeshes = true;
		OcclusionCapture->ShowFlags.InstancedGrass = false;
		OcclusionCapture->ShowFlags.Paper2DSprites = false;
		OcclusionCapture->ShowFlags.TextRender = false;
		OcclusionCapture->ShowFlags.TemporalAA = false;
		// Post Processing Show Flags
		OcclusionCapture->ShowFlags.Bloom = false;
		OcclusionCapture->ShowFlags.EyeAdaptation = false;
		OcclusionCapture->ShowFlags.MotionBlur = false;
		OcclusionCapture->ShowFlags.ToneCurve = false;
		// Light Types Show Flags
		OcclusionCapture->ShowFlags.SkyLighting = false;
		// Lighting Components Show Flags
		OcclusionCapture->ShowFlags.AmbientOcclusion = false;
		OcclusionCapture->ShowFlags.DynamicShadows = false;
		// Lighting Features Show Flags
		OcclusionCapture->ShowFlags.AmbientCubemap = false;
		OcclusionCapture->ShowFlags.DistanceFieldAO = false;
		OcclusionCapture->ShowFlags.LightFunctions = false;
		OcclusionCapture->ShowFlags.LightShafts = false;
		OcclusionCapture->ShowFlags.ReflectionEnvironment = false;
		OcclusionCapture->ShowFlags.ScreenSpaceReflections = false;
		OcclusionCapture->ShowFlags.TexturedLightProfiles = false;
		OcclusionCapture->ShowFlags.VolumetricFog = false;
		// Hidden Show Flags
		OcclusionCapture->ShowFlags.Game = false;
		OcclusionCapture->ShowFlags.Lighting = false;
		OcclusionCapture->ShowFlags.PostProcessing = false;
	}

		OcclusionCaptureDistant = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Occlusion Capture Distant Component"));
	if (OcclusionCaptureDistant)
	{
		OcclusionCaptureDistant->SetupAttachment(RootComponent);
		//OcclusionCaptureDistant->AttachToComponent(RootComponent, FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
		OcclusionCaptureDistant->SetMobility(EComponentMobility::Type::Movable);
//		OcclusionCaptureDistant->SetWorldRotation(FRotator(-90.0f, 270.0f, 0.0f));
		OcclusionCaptureDistant->ProjectionType = ECameraProjectionMode::Orthographic;
		OcclusionCaptureDistant->CaptureSource = ESceneCaptureSource::SCS_SceneDepth;
		OcclusionCaptureDistant->bCaptureEveryFrame = false;
		OcclusionCaptureDistant->bCaptureOnMovement = false;
		OcclusionCaptureDistant->bAlwaysPersistRenderingState = true;
		OcclusionCaptureDistant->ProfilingEventName = FString(TEXT("Sky Creator Occlusion Capture Distant"));
		// General Show Flags
		OcclusionCaptureDistant->ShowFlags.AntiAliasing = false;
		//OcclusionCaptureDistant->ShowFlags.Atmosphere = true;
		OcclusionCaptureDistant->ShowFlags.Decals = false;
		OcclusionCaptureDistant->ShowFlags.Fog = false;
		OcclusionCaptureDistant->ShowFlags.Particles = false;
		OcclusionCaptureDistant->ShowFlags.SkeletalMeshes = false;
		// Advanced Show Flags
		OcclusionCaptureDistant->ShowFlags.DeferredLighting = false;
		OcclusionCaptureDistant->ShowFlags.InstancedFoliage = false;
//		OcclusionCaptureDistant->ShowFlags.InstancedStaticMeshes = true;
		OcclusionCaptureDistant->ShowFlags.InstancedGrass = false;
		OcclusionCaptureDistant->ShowFlags.Paper2DSprites = false;
		OcclusionCaptureDistant->ShowFlags.TextRender = false;
		OcclusionCaptureDistant->ShowFlags.TemporalAA = false;
		// Post Processing Show Flags
		OcclusionCaptureDistant->ShowFlags.Bloom = false;
		OcclusionCaptureDistant->ShowFlags.EyeAdaptation = false;
		OcclusionCaptureDistant->ShowFlags.MotionBlur = false;
		OcclusionCaptureDistant->ShowFlags.ToneCurve = false;
		// Light Types Show Flags
		OcclusionCaptureDistant->ShowFlags.SkyLighting = false;
		// Lighting Components Show Flags
		OcclusionCaptureDistant->ShowFlags.AmbientOcclusion = false;
		OcclusionCaptureDistant->ShowFlags.DynamicShadows = false;
		// Lighting Features Show Flags
		OcclusionCaptureDistant->ShowFlags.AmbientCubemap = false;
		OcclusionCaptureDistant->ShowFlags.DistanceFieldAO = false;
		OcclusionCaptureDistant->ShowFlags.LightFunctions = false;
		OcclusionCaptureDistant->ShowFlags.LightShafts = false;
		OcclusionCaptureDistant->ShowFlags.ReflectionEnvironment = false;
		OcclusionCaptureDistant->ShowFlags.ScreenSpaceReflections = false;
		OcclusionCaptureDistant->ShowFlags.TexturedLightProfiles = false;
		OcclusionCaptureDistant->ShowFlags.VolumetricFog = false;
		// Hidden Show Flags
		OcclusionCaptureDistant->ShowFlags.Game = false;
		OcclusionCaptureDistant->ShowFlags.Lighting = false;
		OcclusionCaptureDistant->ShowFlags.PostProcessing = false;
	}
	
	WeatherFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Weather FX Component"));
	if (WeatherFX)
	{
		WeatherFX->SetupAttachment(RootComponent);
		WeatherFX->SetAsset(ConstructorStatics.WeatherFX.Object);
//		WeatherFX->BoundsScale = SkySphereRadius;
	}

	MaterialFX = CreateDefaultSubobject<USceneComponent>(TEXT("Material FX Root Component"));
	if (MaterialFX)
	{
		MaterialFX->SetupAttachment(RootComponent);
	}
	
	RainRipplesFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Rain Ripples FX Component"));
	if (RainRipplesFX)
	{
		RainRipplesFX->SetupAttachment(MaterialFX);
		RainRipplesFX->SetAsset(ConstructorStatics.RainRipplesFX.Object);
	}

	RainDropsFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Rain Drops FX Component"));
	if (RainDropsFX)
	{
		RainDropsFX->SetupAttachment(MaterialFX);
		RainDropsFX->SetAsset(ConstructorStatics.RainDropsFX.Object);
	}

	RainStreaksFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Rain Streaks FX Component"));
	if (RainStreaksFX)
	{
		RainStreaksFX->SetupAttachment(MaterialFX);
		RainStreaksFX->SetAsset(ConstructorStatics.RainStreaksFX.Object);
	}

	RainSplatterFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Rain Splatter FX Component"));
	if (RainSplatterFX)
	{
		RainSplatterFX->SetupAttachment(MaterialFX);
		RainSplatterFX->SetAsset(ConstructorStatics.RainSplatterFX.Object);
	}
	
	LightningsParametersRT = ConstructorStatics.LightningParametersRT.Object;

	PostProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("Post Process Component"));
	if (PostProcess)
	{
		PostProcess->SetMobility(EComponentMobility::Type::Movable);
		PostProcess->SetupAttachment(RootComponent);
		PostProcess->Priority = PostProcessPriority;
		PostProcess->AddOrUpdateBlendable(OcclusionDebugPostProcess, 0.0f);
		//PostProcess->BlendWeight = bEnableOcclusionDebugView;
		PostProcess->Settings.bOverride_BloomIntensity = true;
		PostProcess->Settings.bOverride_BloomThreshold = true;
		PostProcess->Settings.bOverride_BloomSizeScale = true;
		PostProcess->Settings.bOverride_AutoExposureMethod = true;
		PostProcess->Settings.bOverride_AutoExposureLowPercent = true;
		PostProcess->Settings.bOverride_AutoExposureHighPercent = true;
		PostProcess->Settings.bOverride_AutoExposureMinBrightness = true;
		PostProcess->Settings.bOverride_AutoExposureMaxBrightness = true;
		PostProcess->Settings.bOverride_AutoExposureSpeedUp = true;
		PostProcess->Settings.bOverride_AutoExposureSpeedDown = true;
		PostProcess->Settings.bOverride_AutoExposureBias = true;
		PostProcess->Settings.bOverride_AutoExposureBiasCurve = true;
		PostProcess->Settings.bOverride_AutoExposureApplyPhysicalCameraExposure = true;
		PostProcess->Settings.bOverride_AutoExposureMeterMask = true;
		PostProcess->Settings.bOverride_HistogramLogMin = true;
		PostProcess->Settings.bOverride_HistogramLogMax = true;
		PostProcess->Settings.bOverride_AutoExposureCalibrationConstant_DEPRECATED = true;
		PostProcess->Settings.bOverride_AutoExposureApplyPhysicalCameraExposure = true;

		PostProcess->Settings.BloomSizeScale = 16.0f;

		// next value might get overwritten by r.DefaultFeature.AutoExposure
		static const auto VarDefaultAutoExposureExtendDefaultLuminanceRange = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("r.DefaultFeature.AutoExposure.ExtendDefaultLuminanceRange"));
		if (VarDefaultAutoExposureExtendDefaultLuminanceRange->GetValueOnAnyThread() != 0)
		{
			bExtendDefaultLuminanceRange = true;
		}
		else
		{
			bExtendDefaultLuminanceRange = false;
		}
	}

	if (LightningsParametersRT)
	{
		const int32 Size = LightningsParametersRT->SizeX;
		LightningParameters.Init( { FLinearColor(0, 0, 0, 1000), FLinearColor(0, 0, 0, 1000) }, Size);
	}
	
}

// Called when the game starts or when spawned
void ASkyCreator::BeginPlay()
{
	Super::BeginPlay();

	CaptureOcclusion(CameraLocationSnapped);
	SetMPCSettings();
	SetWeatherFXStaticSettings();
	SetWeatherSettings(WeatherSettings);
}

// Called every frame
void ASkyCreator::Tick(float DeltaTime)
{
	const UWorld* World = GetWorld();

	if (World)
	{
		if (World->WorldType == EWorldType::Editor)
		{
#if WITH_EDITOR
			EditorTick(DeltaTime);
#endif
		}
		else
		{
			Super::Tick(DeltaTime);
		}

		// if in Game and if not a server
/*		if (World->HasBegunPlay() && !UKismetSystemLibrary::IsDedicatedServer(this))
		{
			//if (bEnableRainRipplesSolver) RipplesSolverPropagation(DeltaTime);
			if (bEnableOcclusionCapture) CheckOcclusion();
		}
		// if in Editor
		else if (!World->HasBegunPlay())
		{
			//if (bEnableRainRipplesSolver) RipplesSolverPropagation(DeltaTime);
			if (bEnableOcclusionCapture) CheckOcclusion();
		}*/
	}

	if (USkyCreatorFunctionLibrary::IsApplicationForegroundNow())
	{
		// Client-side only effects
		if (!UKismetSystemLibrary::IsDedicatedServer(this))
		{
			CameraLocation = GetCurrentCameraPosition();
			if (bEnableOcclusionCapture)
			{
				CheckOcclusion();
			}

			if (bEnableDistantOcclusionCapture)
			{
				CheckDistantOcclusion();
			}

			RealtimeVolumetricCloudWind(DeltaTime);
		}

		// Run cloud wind only on server
		if (HasAuthority())
		{
//			RealtimeVolumetricCloudWind(DeltaTime);
		}

		// Setting up Timer Handle for Lightning intervals
		if (WeatherSettings.WeatherFXSettings.EnableLightnings)
		{
			if (!GetWorldTimerManager().IsTimerActive(LightningIntervalTimerHandle) && USkyCreatorFunctionLibrary::IsApplicationForegroundNow())
			{
				CurrentLightningInterval = UKismetMathLibrary::RandomFloatInRange(WeatherSettings.WeatherFXSettings.LightningSpawnIntervalMin, WeatherSettings.WeatherFXSettings.LightningSpawnIntervalMax);
				GetWorldTimerManager().SetTimer(LightningIntervalTimerHandle, this, &ASkyCreator::MakeLightningStrike, CurrentLightningInterval, false);
				//UKismetSystemLibrary::PrintString(this, "Setting Timer", true, false, FLinearColor::White, World->DeltaTimeSeconds);
			}
		}
		else
		{
			if (GetWorldTimerManager().TimerExists(LightningIntervalTimerHandle))
			{
				GetWorldTimerManager().ClearTimer(LightningIntervalTimerHandle);
				//UKismetSystemLibrary::PrintString(this, "Clearing Timer", true, false, FLinearColor::White, World->DeltaTimeSeconds);
			}
		}

		// Setting up Timer Handle for Lightning Flash Fade
		if (!GetWorldTimerManager().IsTimerActive(LightningFlashFadeTimerHandle) && USkyCreatorFunctionLibrary::IsApplicationForegroundNow())
		{
			GetWorldTimerManager().SetTimer(LightningFlashFadeTimerHandle, this, &ASkyCreator::LightningFlashFade, LightningFlashFadeDelta, false);
			//UKismetSystemLibrary::PrintString(this, "Setting Timer", true, false, FLinearColor::White, World->DeltaTimeSeconds);
		}
		else
		{
			//GEngine->AddOnScreenDebugMessage(-1, World->GetDeltaSeconds(), FColor::White, FString::Printf(TEXT("Time Remaining: %f"), GetWorldTimerManager().GetTimerRemaining(LightningIntervalTimerHandle)));
		}

		if (RainRipplesFX)
		{
			USkyCreatorFunctionLibrary::AdvanceNiagaraSimulation(RainRipplesFX, bPauseFXSimulations, DeltaTime, RainRipplesDeltaAccumulator, RainRipplesUpdateRate);
		}

		if (RainDropsFX)
		{
			USkyCreatorFunctionLibrary::AdvanceNiagaraSimulation(RainDropsFX, bPauseFXSimulations, DeltaTime, RainDropsDeltaAccumulator, RainDropsUpdateRate);
		}

		if (RainStreaksFX)
		{
			USkyCreatorFunctionLibrary::AdvanceNiagaraSimulation(RainStreaksFX, bPauseFXSimulations, DeltaTime, RainStreaksDeltaAccumulator, RainStreaksUpdateRate);
		}

		if (RainSplatterFX)
		{
			USkyCreatorFunctionLibrary::AdvanceNiagaraSimulation(RainSplatterFX, bPauseFXSimulations, DeltaTime, RainSplatterDeltaAccumulator, RainSplatterUpdateRate);
		}
		
		if (WeatherFX)
		{
			WeatherFX->SetVariableFloat("Global Time Dilation", UGameplayStatics::GetGlobalTimeDilation(this));
		}
	}
}

void ASkyCreator::SelectVolumetricCloudMaterial()
{
	if (bGroundContribution)
	{
		if (bRayMarchVolumeShadow)
		{
			switch (MultiScatteringApproximationOctaveCount)
			{
				case 0: 
				{
					CurrentVolumetricCloudMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/SkyCreatorPlugin/Materials/VolumetricClouds/M_SC_VolumetricClouds_MSAOC0_GC1_RMVS1.M_SC_VolumetricClouds_MSAOC0_GC1_RMVS1'"));
					break;
				}
				case 1: 
				{
					CurrentVolumetricCloudMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/SkyCreatorPlugin/Materials/VolumetricClouds/M_SC_VolumetricClouds_MSAOC1_GC1_RMVS1.M_SC_VolumetricClouds_MSAOC1_GC1_RMVS1'"));
					break;
				}
				case 2: 
				{
					CurrentVolumetricCloudMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/SkyCreatorPlugin/Materials/VolumetricClouds/M_SC_VolumetricClouds_MSAOC2_GC1_RMVS1.M_SC_VolumetricClouds_MSAOC2_GC1_RMVS1'"));
					break;
				}
				default:
				{
					CurrentVolumetricCloudMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/SkyCreatorPlugin/Materials/VolumetricClouds/M_SC_VolumetricClouds_MSAOC0_GC1_RMVS1.M_SC_VolumetricClouds_MSAOC0_GC1_RMVS1'"));
					break;
				}
			}
		}
		else 
		{
			switch (MultiScatteringApproximationOctaveCount)
			{
				case 0: 
				{
					CurrentVolumetricCloudMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/SkyCreatorPlugin/Materials/VolumetricClouds/M_SC_VolumetricClouds_MSAOC0_GC1_RMVS0.M_SC_VolumetricClouds_MSAOC0_GC1_RMVS0'"));
					break;
				}
				case 1: 
				{
					CurrentVolumetricCloudMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/SkyCreatorPlugin/Materials/VolumetricClouds/M_SC_VolumetricClouds_MSAOC1_GC1_RMVS0.M_SC_VolumetricClouds_MSAOC1_GC1_RMVS0'"));
					break;
				}
				case 2: 
				{
					CurrentVolumetricCloudMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/SkyCreatorPlugin/Materials/VolumetricClouds/M_SC_VolumetricClouds_MSAOC2_GC1_RMVS0.M_SC_VolumetricClouds_MSAOC2_GC1_RMVS0'"));
					break;
				}
				default: 
				{
					CurrentVolumetricCloudMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/SkyCreatorPlugin/Materials/VolumetricClouds/M_SC_VolumetricClouds_MSAOC0_GC1_RMVS0.M_SC_VolumetricClouds_MSAOC0_GC1_RMVS0'"));
					break;
				}
			}
		}
	}

	else if (!bGroundContribution)
	{
		if (bRayMarchVolumeShadow)
		{
			switch (MultiScatteringApproximationOctaveCount)
			{
				case 0: 
				{
					CurrentVolumetricCloudMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/SkyCreatorPlugin/Materials/VolumetricClouds/M_SC_VolumetricClouds_MSAOC0_GC0_RMVS1.M_SC_VolumetricClouds_MSAOC0_GC0_RMVS1'"));
					break;
				}
				case 1: 
				{
					CurrentVolumetricCloudMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/SkyCreatorPlugin/Materials/VolumetricClouds/M_SC_VolumetricClouds_MSAOC1_GC0_RMVS1.M_SC_VolumetricClouds_MSAOC1_GC0_RMVS1'"));
					break;
				}
				case 2: 
				{
					CurrentVolumetricCloudMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/SkyCreatorPlugin/Materials/VolumetricClouds/M_SC_VolumetricClouds_MSAOC2_GC0_RMVS1.M_SC_VolumetricClouds_MSAOC2_GC0_RMVS1'"));
					break;
				}
				default: 
				{
					CurrentVolumetricCloudMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/SkyCreatorPlugin/Materials/VolumetricClouds/M_SC_VolumetricClouds_MSAOC0_GC0_RMVS1.M_SC_VolumetricClouds_MSAOC0_GC0_RMVS1'"));
					break;
				}
			}
		}
		else 
		{
			switch (MultiScatteringApproximationOctaveCount)
			{
				case 0: 
				{
					CurrentVolumetricCloudMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/SkyCreatorPlugin/Materials/VolumetricClouds/M_SC_VolumetricClouds_MSAOC0_GC0_RMVS0.M_SC_VolumetricClouds_MSAOC0_GC0_RMVS0'"));
					break;
				}
				case 1: 
				{
					CurrentVolumetricCloudMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/SkyCreatorPlugin/Materials/VolumetricClouds/M_SC_VolumetricClouds_MSAOC1_GC0_RMVS0.M_SC_VolumetricClouds_MSAOC1_GC0_RMVS0'"));
					break;
				}
				case 2: 
				{
					CurrentVolumetricCloudMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/SkyCreatorPlugin/Materials/VolumetricClouds/M_SC_VolumetricClouds_MSAOC2_GC0_RMVS0.M_SC_VolumetricClouds_MSAOC2_GC0_RMVS0'"));
					break;
				}
				default: 
				{
					CurrentVolumetricCloudMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/SkyCreatorPlugin/Materials/VolumetricClouds/M_SC_VolumetricClouds_MSAOC0_GC0_RMVS0.M_SC_VolumetricClouds_MSAOC0_GC0_RMVS0'"));
					break;
				}
			}
		}
	}
}

bool ASkyCreator::ShouldTickIfViewportsOnly() const
{
	if (GetWorld() != nullptr && GetWorld()->WorldType == EWorldType::Editor && bIsEditorTickEnabled)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void ASkyCreator::RealtimeVolumetricCloudWind(const float DeltaTime)
{
	if (bEnableWind)
	{
		// Increment cloud map UV offset by DeltaTime each tick
		CloudWindOffset = CloudWindOffset + ((DeltaTime * WeatherSettings.WindSettings.CloudWindSpeed) * FVector(UKismetMathLibrary::DegSin(WeatherSettings.WindSettings.CloudWindDirection), UKismetMathLibrary::DegCos(WeatherSettings.WindSettings.CloudWindDirection), 0));
		CloudWindSkewDirection = FVector(UKismetMathLibrary::DegSin(WeatherSettings.WindSettings.CloudWindDirection), UKismetMathLibrary::DegCos(WeatherSettings.WindSettings.CloudWindDirection), 0);
		//HighCloudWindOffset = HighCloudWindOffset + ((DeltaTime * WeatherSettings.WindSettings.HighCloudWindSpeed) * FVector(UKismetMathLibrary::DegSin(WeatherSettings.WindSettings.HighCloudWindDirection), UKismetMathLibrary::DegCos(WeatherSettings.WindSettings.HighCloudWindDirection), 0));
		CloudNoiseShapeWindOffset = CloudNoiseShapeWindOffset + ((DeltaTime * WeatherSettings.WindSettings.CloudNoiseShapeWindSpeedHorizontal) * FVector(UKismetMathLibrary::DegSin(WeatherSettings.WindSettings.CloudNoiseShapeWindDirection), UKismetMathLibrary::DegCos(WeatherSettings.WindSettings.CloudNoiseShapeWindDirection), 0));
		CloudNoiseDetailWindOffset.Z = CloudNoiseDetailWindOffset.Z + ((DeltaTime * (WeatherSettings.WindSettings.CloudNoiseDetailWindSpeedVertical * -1.0f)));

		float VolumetricWindWindSpeedVertical = 0.0f;
		if (WeatherSettings.WeatherFXSettings.RainAmount > WeatherSettings.WeatherFXSettings.SnowAmount)
		{
			VolumetricWindWindSpeedVertical = WeatherSettings.WeatherFXSettings.RainGravity / 100.0f;
		}
		else if (WeatherSettings.WeatherFXSettings.RainAmount < WeatherSettings.WeatherFXSettings.SnowAmount)
		{
			VolumetricWindWindSpeedVertical = WeatherSettings.WeatherFXSettings.SnowGravity / 100.0f;
		}
		else if (WeatherSettings.WeatherFXSettings.RainAmount == 0.0f && WeatherSettings.WeatherFXSettings.SnowAmount == 0.0f)
		{
			VolumetricWindWindSpeedVertical = 0.0f;
		}
		VolumetricWindWindOffset = VolumetricWindWindOffset + ((DeltaTime * WeatherSettings.WindSettings.WindSpeed / 100.0f) * FVector(UKismetMathLibrary::DegSin(WeatherSettings.WindSettings.WindDirection), UKismetMathLibrary::DegCos(WeatherSettings.WindSettings.WindDirection), 0));
		VolumetricWindWindOffset.Z = VolumetricWindWindOffset.Z + DeltaTime * (FMath::Lerp(WeatherSettings.WeatherFXSettings.VolumetricWindGravity, VolumetricWindWindSpeedVertical, WeatherSettings.WeatherFXSettings.VolumetricWindPrecipitationGravityWeight) * -1.0f);

		float VolumetricMistWindSpeedVertical = 0.0f;
		if (WeatherSettings.WeatherFXSettings.RainAmount > WeatherSettings.WeatherFXSettings.SnowAmount)
		{
			VolumetricMistWindSpeedVertical = WeatherSettings.WeatherFXSettings.RainGravity / 100.0f;
		}
		else if (WeatherSettings.WeatherFXSettings.RainAmount < WeatherSettings.WeatherFXSettings.SnowAmount)
		{
			VolumetricMistWindSpeedVertical = WeatherSettings.WeatherFXSettings.SnowGravity / 100.0f;
		}
		else if (WeatherSettings.WeatherFXSettings.RainAmount == 0.0f && WeatherSettings.WeatherFXSettings.SnowAmount == 0.0f)
		{
			VolumetricMistWindSpeedVertical = 0.0f;
		}
		VolumetricMistWindOffset = VolumetricMistWindOffset + ((DeltaTime * WeatherSettings.WindSettings.WindSpeed / 100.0f) * FVector(UKismetMathLibrary::DegSin(WeatherSettings.WindSettings.WindDirection), UKismetMathLibrary::DegCos(WeatherSettings.WindSettings.WindDirection), 0));
		VolumetricMistWindOffset.Z = VolumetricMistWindOffset.Z + DeltaTime * (FMath::Lerp(WeatherSettings.WeatherFXSettings.VolumetricMistGravity, VolumetricMistWindSpeedVertical, WeatherSettings.WeatherFXSettings.VolumetricMistPrecipitationGravityWeight) * -1.0f);
		
		// Keeps cloud map UV offset in 0-1 range
		CloudWindOffset = FVector(FMath::Fmod(CloudWindOffset.X, CloudMapScale * 100.0f), FMath::Fmod(CloudWindOffset.Y, CloudMapScale * 100.0f), 0);
		//HighCloudWindOffset = FVector(FMath::Fmod(HighCloudWindOffset.X, HighCloudMapScale * 100.0f), FMath::Fmod(HighCloudWindOffset.Y, HighCloudMapScale * 100.0f), 0);
		CloudNoiseShapeWindOffset = FVector(FMath::Fmod(CloudNoiseShapeWindOffset.X, NoiseShapeScale * 100.0f), FMath::Fmod(CloudNoiseShapeWindOffset.Y, NoiseShapeScale * 100.0f), 0.0f);
		CloudNoiseDetailWindOffset = FVector(0.0f, 0.0f, FMath::Fmod(CloudNoiseDetailWindOffset.Z, NoiseDetailScale * 100.0f));

		VolumetricWindWindOffset = FVector(FMath::Fmod(VolumetricWindWindOffset.X, VolumetricWindScale * 0.01f), FMath::Fmod(VolumetricWindWindOffset.Y, VolumetricWindScale * 0.01f), FMath::Fmod(VolumetricWindWindOffset.Z, VolumetricWindScale * 0.01f));
		VolumetricMistWindOffset = FVector(FMath::Fmod(VolumetricMistWindOffset.X, VolumetricMistScale * 0.01f), FMath::Fmod(VolumetricMistWindOffset.Y, VolumetricMistScale * 0.01f), FMath::Fmod(VolumetricMistWindOffset.Z, VolumetricMistScale * 0.01f));
	}
	else
	{

		CloudWindSkewDirection = FVector(0, 0, 0);
		CloudWindSkewForce = 0.0f;
		CloudWindOffset = FVector(0, 0, 0);
		CloudNoiseShapeWindOffset = FVector(0, 0, 0);
		CloudNoiseDetailWindOffset = FVector(0, 0, 0);
		//HighCloudWindOffset = FVector(0, 0, 0);
		VolumetricWindWindOffset = FVector(0, 0, 0);
		VolumetricMistWindOffset = FVector(0, 0, 0);
	}

	if (VolumetricCloudsMPC)
	{
		UKismetMaterialLibrary::SetVectorParameterValue(this, VolumetricCloudsMPC, "Cloud Map Wind Offset", FLinearColor(CloudWindOffset));
		UKismetMaterialLibrary::SetVectorParameterValue(this, VolumetricCloudsMPC, "Cloud Map Wind Skew Direction", FLinearColor(CloudWindSkewDirection));
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Cloud Map Wind Skew Force", CloudWindSkewForce);
		UKismetMaterialLibrary::SetVectorParameterValue(this, VolumetricCloudsMPC, "Noise Shape Wind Offset", FLinearColor(CloudNoiseShapeWindOffset));
		UKismetMaterialLibrary::SetVectorParameterValue(this, VolumetricCloudsMPC, "Noise Detail Wind Offset", FLinearColor(CloudNoiseDetailWindOffset));
	}
	if (CommonMPC)
	{
		UKismetMaterialLibrary::SetVectorParameterValue(this, CommonMPC, "Volumetric Precipitation Fog Wind Offset", FLinearColor(VolumetricWindWindOffset));
		UKismetMaterialLibrary::SetVectorParameterValue(this, CommonMPC, "Volumetric Mist Wind Offset", FLinearColor(VolumetricMistWindOffset));
	}
}

FVector ASkyCreator::GetCurrentCameraPosition() const
{
	FVector Result;
	const UWorld* World = GetWorld();

	if (World)
	{
		if (World->HasBegunPlay() && HasAuthority() == false /*!UKismetSystemLibrary::IsDedicatedServer(this) && !UKismetSystemLibrary::IsServer(this)*/)
		{
			const APlayerCameraManager* CameraManager = World->GetFirstPlayerController()->PlayerCameraManager;
			if (CameraManager)
			{
				Result = CameraManager->GetCameraLocation();
			}
		}
		else 
		{
/*			if (GCurrentLevelEditingViewportClient)
			{
				const FViewportCameraTransform& ViewTransform = GCurrentLevelEditingViewportClient->GetViewTransform();
				Result = ViewTransform.GetLocation();
			}*/
			auto ViewLocations = World->ViewLocationsRenderedLastFrame;
			if (ViewLocations.Num() == 0)
			{
				return FVector::Zero();
			}

			Result = ViewLocations[0];
		}	
	}
	
//	if (GEngine)
//	{
//		GEngine->AddOnScreenDebugMessage(-1, -1, FColor::White, FString::Printf(TEXT("Camera Pos: %s"), *Result.ToString()));
//	}

	return Result;
}
/*
ULightComponent* ASkyCreator::SelectSceneComponent(ULightComponent* BuiltInComponent, bool UseExternalActor, const AActor* ExternalActor) const
{
	ULightComponent* SelectedComponent = nullptr;
	
	if (UseExternalActor && ExternalActor != nullptr)
	{
		SelectedComponent = ExternalActor->GetLight
	}
}
*/
FVector ASkyCreator::GetLastLightningPosition()
{
	return LastLightningPosition;
}

float ASkyCreator::GetCloudDensityAtPosition(FVector Position)
{
	float Density = 0.0f;

	if (VolumetricCloudsMPC && VolumetricCloudDensitySampleMID && VolumetricCloudDensitySampleRT)
	{
		UKismetRenderingLibrary::ClearRenderTarget2D(this, VolumetricCloudDensitySampleRT, FLinearColor(0, 0, 0, 1));
		UKismetMaterialLibrary::SetVectorParameterValue(this, VolumetricCloudsMPC, "Cloud Density Sample Position", FLinearColor(Position));
		UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, VolumetricCloudDensitySampleRT, VolumetricCloudDensitySampleMID);
		const FLinearColor CurrentColor = UKismetRenderingLibrary::ReadRenderTargetRawPixel(this, VolumetricCloudDensitySampleRT, 0, 0); // this is slow
		Density = CurrentColor.R;
	}

	return Density;
}

bool ASkyCreator::FindLightningPosition(FVector Position, FVector& OutPosition)
{
	bool Result = false;
	
	FVector Position2D = FVector::ZeroVector;
	FVector ResultPosition = FVector::ZeroVector;

	if (bSampleCloudDensity)
	{
		for (int i = 0; i < LightningMaxSamples; i++)
		{
			Position2D = UKismetMathLibrary::RandomUnitVector() * UKismetMathLibrary::RandomFloatInRange(USkyCreatorFunctionLibrary::KilometersToCentimeters(LightningSpawnInnerRadius), USkyCreatorFunctionLibrary::KilometersToCentimeters(LightningSpawnOuterRadius)) + Position;
			ResultPosition = FVector(Position2D.X, Position2D.Y, UKismetMathLibrary::RandomFloatInRange(USkyCreatorFunctionLibrary::KilometersToCentimeters(LayerBottomAltitude), USkyCreatorFunctionLibrary::KilometersToCentimeters(LayerBottomAltitude + LayerHeight * 0.3f)));
			const float CurrentCloudDensity = GetCloudDensityAtPosition(ResultPosition);
//			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::White, FString::Printf(TEXT("Cloud Sample Position: %s"), *ResultPosition.ToString()));
			const float DensityThreshold = 0.01f;
			
			if (CurrentCloudDensity >= DensityThreshold)
			{
				Result = true;
				//UKismetSystemLibrary::DrawDebugPoint(WorldContextObject, ResultPosition, 100.f, FLinearColor::Green, 1.0f);
				OutPosition = ResultPosition;
				break;
			}
			else
			{
				Result = false;
				//UKismetSystemLibrary::DrawDebugPoint(WorldContextObject, ResultPosition, 50.f, FLinearColor::Red, 1.0f);
			}
		}
	}
	else
	{
		Position2D = UKismetMathLibrary::RandomUnitVector() * UKismetMathLibrary::RandomFloatInRange(USkyCreatorFunctionLibrary::KilometersToCentimeters(LightningSpawnInnerRadius), USkyCreatorFunctionLibrary::KilometersToCentimeters(LightningSpawnOuterRadius)) + Position;
		ResultPosition = FVector(Position2D.X, Position2D.Y, UKismetMathLibrary::RandomFloatInRange(USkyCreatorFunctionLibrary::KilometersToCentimeters(LayerBottomAltitude), USkyCreatorFunctionLibrary::KilometersToCentimeters(LayerBottomAltitude + LayerHeight * 0.3f)));
		Result = true;
		OutPosition = ResultPosition;
	}

	return Result;
}

void ASkyCreator::CheckOcclusion()
{
	// Snapped Camera Position to avoid pixel bleeding
	CameraLocationSnapped = UKismetMathLibrary::Vector_SnappedToGrid(CameraLocation + FVector(0, 0, OcclusionCaptureHeight), OcclusionCaptureStepSize);

	if (bOcclusionCaptureRealtimeUpdate)
	{
		// Realtime Update
		CaptureOcclusion(CameraLocationSnapped);
	}
	else
	{
		// Capture based on max distance with last position
		if (UKismetMathLibrary::Vector_Distance(CameraLocationSnapped, OcclusionCurrentLocation) >= OcclusionCaptureStepDistance)
		{
			CaptureOcclusion(CameraLocationSnapped);
//			UE_LOG(LogTemp, Warning, TEXT("Capture happened at CameraLocation = %s"), *CameraLocation.ToString());
		}
	}

	if (WeatherFX)
	{
		//WeatherFX->SetVariableVec3("Occlusion Current Location", OcclusionCurrentLocation);
		WeatherFX->SetVariablePosition("Occlusion Current Position", OcclusionCurrentLocation);
	}
}

void ASkyCreator::CaptureOcclusion(FVector CaptureLocation)
{
	OcclusionCurrentLocation = CaptureLocation;
	OcclusionCapture->SetWorldLocation(OcclusionCurrentLocation);
	OcclusionCapture->SetWorldRotation(FRotator(-90.0f, 270.0f, 0.0f));
	if (CommonMPC)
	{
		UKismetMaterialLibrary::SetVectorParameterValue(this, CommonMPC, "Occlusion Capture Position", FLinearColor(OcclusionCapture->GetComponentLocation() - FVector(OcclusionCaptureWidth / 2, OcclusionCaptureWidth / 2, 0)));
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Occlusion Capture Height", OcclusionCapture->GetComponentLocation().Z);
	}
	OcclusionCapture->CaptureSceneDeferred();
}

void ASkyCreator::CheckDistantOcclusion()
{
	// Snapped Camera Position to avoid pixel bleeding
	DistantCameraLocationSnapped = UKismetMathLibrary::Vector_SnappedToGrid(CameraLocation + FVector(0, 0, OcclusionCaptureHeight), DistantOcclusionCaptureStepSize);

	if (bDistantOcclusionCaptureRealtimeUpdate)
	{
		// Realtime Update
		CaptureDistantOcclusion(DistantCameraLocationSnapped);
	}
	else
	{
		// Capture based on max distance with last position
		if (UKismetMathLibrary::Vector_Distance(DistantCameraLocationSnapped, DistantOcclusionCurrentLocation) >= DistantOcclusionCaptureStepDistance)
		{
			CaptureDistantOcclusion(DistantCameraLocationSnapped);
//			UE_LOG(LogTemp, Warning, TEXT("Distant Capture happened at CameraLocation = %s"), *CameraLocation.ToString());
		}
	}
}

void ASkyCreator::CaptureDistantOcclusion(FVector CaptureLocation)
{
	DistantOcclusionCurrentLocation = CaptureLocation;
	OcclusionCaptureDistant->SetWorldLocation(DistantOcclusionCurrentLocation);
	OcclusionCaptureDistant->SetWorldRotation(FRotator(-90.0f, 270.0f, 0.0f));
	if (CommonMPC)
	{
		UKismetMaterialLibrary::SetVectorParameterValue(this, CommonMPC, "Distant Occlusion Capture Position", FLinearColor(OcclusionCaptureDistant->GetComponentLocation() - FVector(DistantOcclusionCaptureWidth / 2, DistantOcclusionCaptureWidth / 2, 0)));
	}
	OcclusionCaptureDistant->CaptureSceneDeferred();
}

void ASkyCreator::WriteLightningParameters(FVector InLightningPosition, float InLightningRadius, FLinearColor InLightningColor)
{
	if (LightningsParametersRT)
	{

		if (LightningCurrentIndex != LightningsParametersRT->SizeX - 1)
		{
			LightningCurrentIndex++;
		}
		else
		{
			LightningCurrentIndex = 0;
		}

		LightningParameters[LightningCurrentIndex] = { FLinearColor(InLightningPosition.X, InLightningPosition.Y, InLightningPosition.Z, InLightningRadius) , InLightningColor };

		UCanvas* Canvas = nullptr;
		FVector2D CanvasSize = FVector2D(0, 0);
		FDrawToRenderTargetContext Context;
		UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(this, LightningsParametersRT, Canvas, CanvasSize, Context);

		// Write Lightning Position
	//	Canvas->K2_DrawTexture(nullptr, FVector2D(UKismetMathLibrary::Conv_IntToFloat(LightningCurrentIndex), 0), FVector2D(1, 1), FVector2D(0, 0), FVector2D(1, 1), LightningParameters[LightningCurrentIndex].Position, BLEND_Opaque);
		Canvas->K2_DrawTexture(nullptr, FVector2D(LightningCurrentIndex, 0), FVector2D(1, 1), FVector2D(0, 0), FVector2D(1, 1), LightningParameters[LightningCurrentIndex].Position, BLEND_Opaque);
		// Write Lightning Color
	//	Canvas->K2_DrawTexture(nullptr, FVector2D(UKismetMathLibrary::Conv_IntToFloat(LightningCurrentIndex), 1), FVector2D(1, 1), FVector2D(0, 0), FVector2D(1, 1), LightningParameters[LightningCurrentIndex].Color, BLEND_Opaque);
		Canvas->K2_DrawTexture(nullptr, FVector2D(LightningCurrentIndex, 1), FVector2D(1, 1), FVector2D(0, 0), FVector2D(1, 1), LightningParameters[LightningCurrentIndex].Color, BLEND_Opaque);

		UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(this, Context);
	}
}

void ASkyCreator::LightningFlashFade()
{
	if (GetWorldTimerManager().TimerExists(LightningFlashFadeTimerHandle))
	{
		GetWorldTimerManager().ClearTimer(LightningFlashFadeTimerHandle);
		if (LightningsParametersRT)
		{
			UCanvas* Canvas = nullptr;
			FVector2D CanvasSize = FVector2D(0, 0);
			FDrawToRenderTargetContext Context;
			UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(this, LightningsParametersRT, Canvas, CanvasSize, Context);
			// Write Fade
			Canvas->K2_DrawTexture(nullptr, FVector2D(0, 1), FVector2D(32, 1), FVector2D(0, 0), FVector2D(1, 1), FLinearColor(0, 0, 0, LightningFlashFadeSpeed), BLEND_Translucent);
			UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(this, Context);
		}
	}
}

void ASkyCreator::SpawnLightningStrike(FVector LightningPosition)
{
	const FVector LightningBoltEndPosition = UKismetMathLibrary::RandomUnitVectorInConeInDegrees(FVector(0, 0, -1), LightningRandomDegreeInConeMax) * UKismetMathLibrary::RandomFloatInRange(USkyCreatorFunctionLibrary::KilometersToCentimeters(WeatherSettings.WeatherFXSettings.LightningBoltLengthMin), USkyCreatorFunctionLibrary::KilometersToCentimeters(WeatherSettings.WeatherFXSettings.LightningBoltLengthMax));

	const FLinearColor CurrentLightningColor = FLinearColor(
		UKismetMathLibrary::RandomFloatInRange(WeatherSettings.WeatherFXSettings.LightningColorMin.R, WeatherSettings.WeatherFXSettings.LightningColorMax.R),
		UKismetMathLibrary::RandomFloatInRange(WeatherSettings.WeatherFXSettings.LightningColorMin.G, WeatherSettings.WeatherFXSettings.LightningColorMax.G),
		UKismetMathLibrary::RandomFloatInRange(WeatherSettings.WeatherFXSettings.LightningColorMin.B, WeatherSettings.WeatherFXSettings.LightningColorMax.B),
		UKismetMathLibrary::RandomFloatInRange(WeatherSettings.WeatherFXSettings.LightningColorMin.A, WeatherSettings.WeatherFXSettings.LightningColorMax.A));

	const float CurrentLightningBoltSpawnChance = UKismetMathLibrary::RandomFloatInRange(0.0f, 100.0f);

	//UE_LOG(LogTemp, Warning, TEXT("CurrentLightningSpawnChance: %f"), CurrentLightningSpawnChance);

	if (CurrentLightningBoltSpawnChance <= WeatherSettings.WeatherFXSettings.LightningBoltSpawnChance)
	{
		// Find and Spawn Lightning System
//		UNiagaraSystem* LightningStrikeSystem = LoadObject<UNiagaraSystem>(nullptr, TEXT("NiagaraSystem'/SkyCreatorPlugin/Effects/WeatherFX/SC_LightningFX_System.SC_LightningFX_System'"));

		if (LightningStrikeSystem)
		{
			UNiagaraComponent* LightningStrikeComponent = UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, LightningStrikeSystem, LightningPosition, FRotator(0, 0, 0), FVector(1, 1, 1), EAttachLocation::Type::KeepRelativeOffset, true);

			if (LightningStrikeComponent)
			{
				LightningStrikeComponent->SetVariableVec3("LightningBoltEndPosition", LightningBoltEndPosition);
				LightningStrikeComponent->SetVariableLinearColor("LightningColor", CurrentLightningColor * LightningBoltEmissiveScale);
				LightningStrikeComponent->SetVariableFloat("LightningLifetime", WeatherSettings.WeatherFXSettings.LightningLifetime);

				LightningStrikeComponent->SetVariableFloat("LightningBoltWidthMin", WeatherSettings.WeatherFXSettings.LightningBoltWidthMin);
				LightningStrikeComponent->SetVariableFloat("LightningBoltWidthMax", WeatherSettings.WeatherFXSettings.LightningBoltWidthMax);
				LightningStrikeComponent->SetVariableFloat("LightningBoltCurveFrequency", WeatherSettings.WeatherFXSettings.LightningBoltCurveFrequency);
				LightningStrikeComponent->SetVariableFloat("LightningBoltCurveStrengthMin", WeatherSettings.WeatherFXSettings.LightningBoltCurveStrengthMin);
				LightningStrikeComponent->SetVariableFloat("LightningBoltCurveStrengthMax", WeatherSettings.WeatherFXSettings.LightningBoltCurveStrengthMax);
				LightningStrikeComponent->SetVariableFloat("LightningBoltJitterStrength", WeatherSettings.WeatherFXSettings.LightningBoltJitterStrength);

				LightningStrikeComponent->SetVariableFloat("LightningBranchSpawnChance", WeatherSettings.WeatherFXSettings.LightningBranchSpawnChance);
				LightningStrikeComponent->SetVariableFloat("LightningBranchScaleMin", WeatherSettings.WeatherFXSettings.LightningBranchScaleMin);
				LightningStrikeComponent->SetVariableFloat("LightningBranchScaleMax", WeatherSettings.WeatherFXSettings.LightningBranchScaleMax);
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Unable to load Lightning System asset!"));
		}
	}

	const float LightningFlashRadius = LightningBoltEndPosition.Size();

	WriteLightningParameters(LightningPosition, LightningFlashRadius * LightningFlashRadiusScale, CurrentLightningColor * LightningFlashEmissiveScale);

	LastLightningPosition = LightningPosition;

	OnLightningStrike.Broadcast(LightningPosition);
}

void ASkyCreator::MakeLightningStrike()
{
	if (GetWorldTimerManager().TimerExists(LightningIntervalTimerHandle))
	{
		GetWorldTimerManager().ClearTimer(LightningIntervalTimerHandle);
		//GEngine->AddOnScreenDebugMessage(-1, 0.25f, FColor::Red, FString::Printf(TEXT("Lightning Strike!!!")));
		//bool FoundLightningPosition = USkyCreatorFunctionLibrary::FindLightningPosition(this, bSampleCloudDensity, LightningMaxSamples, VolumetricCloudsMPC, VolumetricCloudDensitySampleMID, VolumetricCloudDensitySampleRT, GetCurrentCameraPosition(), LightningSpawnInnerRadius, LightningSpawnOuterRadius, LayerBottomAltitude, LayerBottomAltitude + LayerHeight * 0.3f, 0.01f, LightningPosition);
		FVector LightningPosition;
		const bool FoundLightningPosition = FindLightningPosition(GetCurrentCameraPosition(), LightningPosition);
		if (FoundLightningPosition)
		{
			SpawnLightningStrike(LightningPosition);
		}
	}
}

void ASkyCreator::SetComponentsSettings()
{
	if (SkyAtmosphere)
	{
		SkyAtmosphere->TransformMode = PositionMode;
		SkyAtmosphere->BottomRadius = PlanetRadius;
		SkyAtmosphere->AtmosphereHeight = AtmosphereHeight;
		SkyAtmosphere->AerialPespectiveViewDistanceScale = AerialPespectiveViewDistanceScale;
		SkyAtmosphere->TraceSampleCountScale = TraceSampleCountScale;

		static const auto VarAerialPerspectiveLUTWidth = IConsoleManager::Get().FindTConsoleVariableDataFloat(TEXT("r.SkyAtmosphere.AerialPerspectiveLUT.Width"));
		const float VarAerialPerspectiveLUTWidthValue = VarAerialPerspectiveLUTWidth->GetValueOnAnyThread();

		if (VarAerialPerspectiveLUTWidthValue != GodRaysResolution)
		{
			USkyCreatorFunctionLibrary::SetConsoleCommandFloat(this, "r.SkyAtmosphere.AerialPerspectiveLUT.Width ", GodRaysResolution);
		}
	}

	if (VolumetricCloud)
	{
		VolumetricCloud->SetLayerBottomAltitude(LayerBottomAltitude);
		VolumetricCloud->SetLayerHeight(LayerHeight);
		VolumetricCloud->SetTracingStartMaxDistance(TracingStartMaxDistance);
		VolumetricCloud->SetTracingMaxDistance(TracingMaxDistance);
		VolumetricCloud->SetShadowTracingDistance(ShadowTracingDistance);
		VolumetricCloud->SetStopTracingTransmittanceThreshold(TransmittanceThreshold);
		VolumetricCloud->SetbUsePerSampleAtmosphericLightTransmittance(bPerSampleAtmosphericLightTransmittance);

		static const auto VarVolumetricRenderTarget = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("r.VolumetricRenderTarget"));
		const bool bVarVolumetricRenderTarget = UKismetMathLibrary::Conv_IntToBool(VarVolumetricRenderTarget->GetValueOnAnyThread());

		if (bVarVolumetricRenderTarget != !bCinematicQuality)
		{
			USkyCreatorFunctionLibrary::SetConsoleCommandInt(this, "r.VolumetricRenderTarget ", !bCinematicQuality);
		}

		static const auto VarVolumetricRenderTargetMode = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("r.VolumetricRenderTarget.Mode"));
		const int32 VarVolumetricRenderTargetModeValue = VarVolumetricRenderTargetMode->GetValueOnAnyThread();

		if (VarVolumetricRenderTargetModeValue != RenderMode)
		{
			USkyCreatorFunctionLibrary::SetConsoleCommandInt(this, "r.VolumetricRenderTarget.Mode ", RenderMode);
		}

		static const auto VarHighQualityAerialPerspective = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("r.VolumetricCloud.HighQualityAerialPerspective"));
		const bool bVarHighQualityAerialPerspectiveValue = UKismetMathLibrary::Conv_IntToBool(VarHighQualityAerialPerspective->GetValueOnAnyThread());

		if (bVarHighQualityAerialPerspectiveValue != bHighQualityAerialPerspective)
		{
			USkyCreatorFunctionLibrary::SetConsoleCommandInt(this, "r.VolumetricCloud.HighQualityAerialPerspective ", bHighQualityAerialPerspective);
		}

		static const auto VarCloudShadowSpatialFiltering = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("r.VolumetricCloud.ShadowMap.SpatialFiltering"));
		const bool bVarCloudShadowSpatialFilteringValue = UKismetMathLibrary::Conv_IntToBool(VarCloudShadowSpatialFiltering->GetValueOnAnyThread());

		if (bVarCloudShadowSpatialFilteringValue != bCloudShadowSpatialFiltering)
		{
			USkyCreatorFunctionLibrary::SetConsoleCommandInt(this, "r.VolumetricCloud.ShadowMap.SpatialFiltering ", bCloudShadowSpatialFiltering);
		}

		VolumetricCloud->SetViewSampleCountScale(ViewSampleCountScale);
		VolumetricCloud->SetShadowViewSampleCountScale(ShadowViewSampleCountScale);

#if ENGINE_MAJOR_VERSION == 4
		VolumetricCloud->SetReflectionSampleCountScale(ReflectionSampleCountScale);
		VolumetricCloud->SetShadowReflectionSampleCountScale(ShadowReflectionSampleCountScale);
#endif

#if ENGINE_MAJOR_VERSION == 5
		VolumetricCloud->SetReflectionViewSampleCountScale(ReflectionSampleCountScale);
		VolumetricCloud->SetShadowReflectionViewSampleCountScale(ShadowReflectionSampleCountScale);
#endif

		SelectVolumetricCloudMaterial();

		USkyCreatorFunctionLibrary::CreateAndAssignMID(this, CurrentVolumetricCloudMaterial, VolumetricCloudMID);

		if (VolumetricCloudMID)
		{
			VolumetricCloud->SetMaterial(VolumetricCloudMID);

			UTexture* NoiseShapeTexture = nullptr;
			UTexture* NoiseDetailTexture = nullptr;

			switch (NoiseShapeResolution)
			{
				case EVolumetricCloudNoiseShapeResolution::VolumetricCloudNoiseShapeResolution_64:
				{
					NoiseShapeTexture = LoadObject<UTexture>(nullptr, TEXT("Texture'/SkyCreatorPlugin/Textures/VolumetricClouds/VT_SC_CloudNoise_Shape_64.VT_SC_CloudNoise_Shape_64'"));
					break;
				}
				case EVolumetricCloudNoiseShapeResolution::VolumetricCloudNoiseShapeResolution_128:
				{
					NoiseShapeTexture = LoadObject<UTexture>(nullptr, TEXT("Texture'/SkyCreatorPlugin/Textures/VolumetricClouds/VT_SC_CloudNoise_Shape_128.VT_SC_CloudNoise_Shape_128'"));
					break;
				}
				case EVolumetricCloudNoiseShapeResolution::VolumetricCloudNoiseShapeResolution_256:
				{
					NoiseShapeTexture = LoadObject<UTexture>(nullptr, TEXT("Texture'/SkyCreatorPlugin/Textures/VolumetricClouds/VT_SC_CloudNoise_Shape_256.VT_SC_CloudNoise_Shape_256'"));
					break;
				}
				default:
				{
					NoiseShapeTexture = LoadObject<UTexture>(nullptr, TEXT("Texture'/SkyCreatorPlugin/Textures/VolumetricClouds/VT_SC_CloudNoise_Shape_128.VT_SC_CloudNoise_Shape_64'"));
					break;
				}
			}

			switch (NoiseDetailResolution)
			{
				case EVolumetricCloudNoiseDetailResolution::VolumetricCloudNoiseDetailResolution_32:
				{
					NoiseDetailTexture = LoadObject<UTexture>(nullptr, TEXT("Texture'/SkyCreatorPlugin/Textures/VolumetricClouds/VT_SC_CloudNoise_Detail_32.VT_SC_CloudNoise_Detail_32'"));
					break;
				}
				case EVolumetricCloudNoiseDetailResolution::VolumetricCloudNoiseDetailResolution_64:
				{
					NoiseDetailTexture = LoadObject<UTexture>(nullptr, TEXT("Texture'/SkyCreatorPlugin/Textures/VolumetricClouds/VT_SC_CloudNoise_Detail_64.VT_SC_CloudNoise_Detail_64'"));
					break;
				}
				default:
				{
					NoiseDetailTexture = LoadObject<UTexture>(nullptr, TEXT("Texture'/SkyCreatorPlugin/Textures/VolumetricClouds/VT_SC_CloudNoise_Detail_32.VT_SC_CloudNoise_Detail_32'"));
					break;
				}
			}

			if (NoiseShapeTexture)
			{
				VolumetricCloudMID->SetTextureParameterValue("NoiseShape_Texture", NoiseShapeTexture);
			}

			if (NoiseDetailTexture)
			{
				VolumetricCloudMID->SetTextureParameterValue("NoiseDetail_Texture", NoiseDetailTexture);
			}
		}

		if (!VolumetricCloudDensitySampleRT)
		{
			VolumetricCloudDensitySampleRT = UKismetRenderingLibrary::CreateRenderTarget2D(this, 1, 1, RTF_RGBA16f);
		}

		USkyCreatorFunctionLibrary::CreateAndAssignMID(this, VolumetricCloudDensitySampleMaterial, VolumetricCloudDensitySampleMID);
	}

	if (SkyLight)
	{
		SkyLight->SetMobility(SkyLightMobility);
		SkyLight->bRealTimeCapture = bRealTimeCapture;

		static const auto VarTimeSlicedRealTimeCapture = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("r.SkyLight.RealTimeReflectionCapture.TimeSlice"));
		const bool bVarTimeSlicedRealTimeCapture = UKismetMathLibrary::Conv_IntToBool(VarTimeSlicedRealTimeCapture->GetValueOnAnyThread());

		if (bVarTimeSlicedRealTimeCapture != bSkyLightCaptureTimeSlice)
		{
			USkyCreatorFunctionLibrary::SetConsoleCommandInt(this, "r.SkyLight.RealTimeReflectionCapture.TimeSlice ", bSkyLightCaptureTimeSlice);
		}

		SkyLight->bLowerHemisphereIsBlack = bLowerHemisphereIsSolidColor;
		//	SkyLight->LowerHemisphereColor = LowerHemisphereColor;
		SkyLight->bCloudAmbientOcclusion = bCloudAmbientOcclusion;
		SkyLight->CloudAmbientOcclusionExtent = CloudAmbientOcclusionExtent;
		SkyLight->CloudAmbientOcclusionMapResolutionScale = CloudAmbientOcclusionMapResolutionScale;
		SkyLight->CloudAmbientOcclusionApertureScale = CloudAmbientOcclusionApertureScale;
		SkyLight->SetCaptureIsDirty();
	}

	if (SunLight)
	{
		SunLight->SetMobility(SunLightMobility);
		if (bSunConstantIntensity)
		{
			SunLight->SetIntensity(SunIntensity);
		}
		SunLight->LightSourceAngle = SunDiskSize;
		SunLight->bUseTemperature = bSunUseTemperature;
		SunLight->AtmosphereSunDiskColorScale = SunAtmosphereDiskColorScale;
		SunLight->bPerPixelAtmosphereTransmittance = bSunPerPixelAtmosphereTransmittance;

		switch (SunCloudShadowType)
		{
		case 0:
			{
				SunLight->LightFunctionMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/SkyCreatorPlugin/Materials/Common/M_SC_SunLightFunction.M_SC_SunLightFunction'"));
				SunLight->bCastCloudShadows = true;
				break;
			}
		case 1:
			{
				SunLight->LightFunctionMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/SkyCreatorPlugin/Materials/Common/MI_SC_SunLightFunction_CloudShadows.MI_SC_SunLightFunction_CloudShadows'"));
				SunLight->bCastCloudShadows = false;
				break;
			}
		default:
			{
				SunLight->LightFunctionMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/SkyCreatorPlugin/Materials/Common/M_SC_SunLightFunction.M_SC_SunLightFunction'"));
				SunLight->bCastCloudShadows = true;
				break;
			}
		}
		
		SunLight->CloudShadowExtent = SunCloudShadowExtent;
		SunLight->CloudShadowMapResolutionScale = SunCloudShadowMapResolutionScale;
		SunLight->CloudShadowRaySampleCountScale = SunCloudShadowRaySampleCountScale;
		SunLight->MarkRenderStateDirty();
//		SunLight->DisabledBrightness = SunBrightness;
	}

	if (MoonLight)
	{
		MoonLight->SetMobility(MoonLightMobility);
		if (bMoonConstantIntensity)
		{
			MoonLight->SetIntensity(MoonIntensity);
		}
		MoonLight->LightSourceAngle = MoonDiskSize;
		MoonLight->bUseTemperature = bMoonUseTemperature;
		MoonLight->AtmosphereSunDiskColorScale = MoonAtmosphereDiskColorScale;
		MoonLight->bPerPixelAtmosphereTransmittance = bMoonPerPixelAtmosphereTransmittance;

		switch (MoonCloudShadowType)
		{
		case 0:
			{
				MoonLight->LightFunctionMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/SkyCreatorPlugin/Materials/Common/M_SC_MoonLightFunction.M_SC_MoonLightFunction'"));
				MoonLight->bCastCloudShadows = true;
				break;
			}
		case 1:
			{
				MoonLight->LightFunctionMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/SkyCreatorPlugin/Materials/Common/MI_SC_MoonLightFunction_CloudShadows.MI_SC_MoonLightFunction_CloudShadows'"));
				MoonLight->bCastCloudShadows = false;
				break;
			}
		default:
			{
				MoonLight->LightFunctionMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/SkyCreatorPlugin/Materials/Common/M_SC_MoonLightFunction.M_SC_MoonLightFunction'"));
				MoonLight->bCastCloudShadows = true;
				break;
			}
		}
		
		MoonLight->CloudShadowExtent = MoonCloudShadowExtent;
		MoonLight->CloudShadowMapResolutionScale = MoonCloudShadowMapResolutionScale;
		MoonLight->CloudShadowRaySampleCountScale = MoonCloudShadowRaySampleCountScale;
		MoonLight->MarkRenderStateDirty();
//		MoonLight->DisabledBrightness = MoonBrightness;
	}

	if (ExponentialHeightFog)
	{
		ExponentialHeightFog->SetMobility(ExponentialHeightFogMobility);
		ExponentialHeightFog->SetVolumetricFog(bEnableVolumetricFog);
		ExponentialHeightFog->SetRelativeLocation(FVector(0, 0, FogHeightOffset));
		ExponentialHeightFog->SecondFogData.FogHeightOffset = SecondFogHeightOffset;
		ExponentialHeightFog->SetVolumetricFogDistance(VolumetricFogViewDistance);

		if (bEnableExponentialHeightFog)
		{
			ExponentialHeightFog->SetVisibility(true);
			ExponentialHeightFog->SetHiddenInGame(false);
		}
		else
		{
			ExponentialHeightFog->SetVisibility(false);
			ExponentialHeightFog->SetHiddenInGame(true);
		}
	}

	if (SkySphere && SkySphereMaterial)
	{
		if (!SkySphereMID || (SkySphereMID->Parent != SkySphereMaterial))
		{
			SkySphereMID = UMaterialInstanceDynamic::Create(SkySphereMaterial, this);
		}

		SkySphere->SetMaterial(0, SkySphereMID);
		SkySphere->SetRelativeScale3D(FVector(SkySphereRadius, SkySphereRadius, SkySphereRadius));
		SkySphereMID->SetTextureParameterValue("StarMap_Texture", StarMapTexture);
	}

	if (OcclusionCapture && OcclusionRenderTarget)
	{
		OcclusionCapture->TextureTarget = OcclusionRenderTarget;
		OcclusionCapture->OrthoWidth = OcclusionCaptureWidth;
		OcclusionCaptureStepSize = OcclusionCaptureWidth / FMath::Max(OcclusionRenderTarget->SizeX, OcclusionRenderTarget->SizeY);
		CheckOcclusion();
	}

	if (OcclusionCaptureDistant && DistantOcclusionRenderTarget)
	{

		OcclusionCaptureDistant->TextureTarget = DistantOcclusionRenderTarget;
		OcclusionCaptureDistant->OrthoWidth = DistantOcclusionCaptureWidth;
		DistantOcclusionCaptureStepSize = DistantOcclusionCaptureWidth / FMath::Max(DistantOcclusionRenderTarget->SizeX, DistantOcclusionRenderTarget->SizeY);
		CheckDistantOcclusion();
	}

	if (WeatherFX)
	{
		WeatherFX->SetVariableFloat("Volumetric Mist Scale", VolumetricMistScale);
		WeatherFX->SetVariableFloat("Volumetric Mist Fade Hardness", VolumetricMistFadeHardness);
		WeatherFX->SetVariableFloat("Volumetric Mist View Distance", VolumetricMistViewDistance);
		
		WeatherFX->SetVariableFloat("Volumetric Wind Scale", VolumetricWindScale);
		WeatherFX->SetVariableFloat("Volumetric Wind Fade Hardness", VolumetricWindFadeHardness);
		WeatherFX->SetVariableFloat("Volumetric Wind View Distance", VolumetricWindViewDistance);
	}

	SetMPCSettings();

	SetWeatherFXStaticSettings();

	SetMaterialFXStaticSettings();

//	USkyCreatorFunctionLibrary::CreateAndAssignMID(this, RainRipplesPropagation, RainRipplesPropagationMID);
//	USkyCreatorFunctionLibrary::CreateAndAssignMID(this, RainRipplesNormal, RainRipplesNormalMID);

	LightningFlashFadeDelta = 1.f / LightningFlashFadeUpdateRate;
//	RainRipplesSolverDelta = 1.f / RainRipplesUpdateRate;

	if (LightningsParametersRT)
	{
		const int32 Size = LightningsParametersRT->SizeX;
		LightningParameters.Init({ FLinearColor(0, 0, 0, 1000), FLinearColor(0, 0, 0, 1000) }, Size);
	}

	if (PostProcess)
	{
		PostProcess->bEnabled = bUseExposureSettings;

		if (bUseExposureSettings)
		{
			PostProcess->Priority = PostProcessPriority;
//			PostProcess->BlendWeight = bEnableOcclusionDebugView;
			PostProcess->AddOrUpdateBlendable(OcclusionDebugPostProcess, bEnableOcclusionDebugView);
			PostProcess->Settings.AutoExposureMethod = ExposureMethod;
			PostProcess->Settings.AutoExposureLowPercent = ExposureLowPercent;
			PostProcess->Settings.AutoExposureHighPercent = ExposureHighPercent;
			PostProcess->Settings.AutoExposureSpeedUp = ExposureSpeedUp;
			PostProcess->Settings.AutoExposureSpeedDown = ExposureSpeedDown;
			//		Exposure->Settings.AutoExposureBias = ExposureSettings.Bias;
			PostProcess->Settings.AutoExposureBiasCurve = ExposureBiasCurve;
			PostProcess->Settings.AutoExposureMeterMask = ExposureMeterMask;
			//		Exposure->Settings.AutoExposureCalibrationConstant_DEPRECATED = ExposureSettings.CalibrationConstant;
			//		Exposure->Settings.AutoExposureApplyPhysicalCameraExposure = ExposureSettings.ApplyPhysicalCameraExposure;

			if (bExtendDefaultLuminanceRange)
			{
				PostProcess->Settings.AutoExposureMinBrightness = ExposureMinEV100;
				PostProcess->Settings.AutoExposureMaxBrightness = ExposureMaxEV100;
				PostProcess->Settings.HistogramLogMin = ExposureHistogramMinEV100;
				PostProcess->Settings.HistogramLogMax = ExposureHistogramMaxEV100;
			}
			else
			{
				PostProcess->Settings.AutoExposureMinBrightness = ExposureMinBrightness;
				PostProcess->Settings.AutoExposureMaxBrightness = ExposureMaxBrightness;
				PostProcess->Settings.HistogramLogMin = ExposureHistogramLogMin;
				PostProcess->Settings.HistogramLogMax = ExposureHistogramLogMax;
			}
		}
	}
}

void ASkyCreator::SetMPCSettings()
{
	switch (PositionMode)
	{
		case ESkyAtmosphereTransformMode::PlanetTopAtAbsoluteWorldOrigin:
		{
			PlanetTopPosition = FVector(0.0f, 0.0f, 0.0f);
			break;
		}
		case ESkyAtmosphereTransformMode::PlanetTopAtComponentTransform:
		{
			PlanetTopPosition = GetActorLocation() - SkyAtmosphere->GetRelativeLocation();
			break;
		}
		case ESkyAtmosphereTransformMode::PlanetCenterAtComponentTransform:
		{
			PlanetTopPosition = GetActorLocation() - SkyAtmosphere->GetRelativeLocation() + FVector(0.0f, 0.0f, USkyCreatorFunctionLibrary::KilometersToCentimeters(PlanetRadius));
			break;
		}
		default:
		{
			PlanetTopPosition = FVector(0.0f, 0.0f, 0.0f);
			break;
		}
	}

	LayerBottomAltitudePosition = PlanetTopPosition + FVector(0.0f, 0.0f, USkyCreatorFunctionLibrary::KilometersToCentimeters(VolumetricCloud->LayerBottomAltitude));
	LayerTopAltitudePosition = PlanetTopPosition + FVector(0.0f, 0.0f, USkyCreatorFunctionLibrary::KilometersToCentimeters(VolumetricCloud->LayerBottomAltitude + VolumetricCloud->LayerHeight));

	if (CommonMPC)
	{
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Occlusion Capture Width", OcclusionCaptureWidth);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Distant Occlusion Capture Width", DistantOcclusionCaptureWidth);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Occlusion Bias", OcclusionBias);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Occlusion Blur Samples", OcclusionBlurSamples);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Occlusion Blur Distance", OcclusionBlurDistance); // OcclusionBlurDistance / OcclusionCaptureWidth); // Blur Distance in world units
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Occlusion Mask Radius", (OcclusionCaptureWidth / 2) - OcclusionCaptureStepDistance);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Distant Occlusion Mask Radius", (DistantOcclusionCaptureWidth / 2) - DistantOcclusionCaptureStepDistance);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Occlusion Transition Hardness", OcclusionTransitionHardness);

		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Wetness Slope Angle", WetnessSlopeAngle);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Wetness Slope Smoothness", WetnessSlopeSmoothness);

		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Puddles Scale", PuddlesMaskScale);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Puddles Roughness", PuddlesRoughness);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Puddles Slope Angle", PuddlesSlopeAngle);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Puddles Slope Smoothness", PuddlesSlopeSmoothness);

		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Ripples Scale", RainRipplesScale);
//		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Ripples Max Density", RainRipplesMaxDensity);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Wind Ripples Scale", WindRipplesScale);
		
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Drops Scale", RainDropsScale);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Drops Slope Angle", RainDropsSlopeAngle);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Drops Slope Smoothness", RainDropsSlopeSmoothness);
		
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Streaks Scale", RainStreaksScale);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Streaks Slope Angle", RainStreaksSlopeAngle);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Streaks Slope Smoothness", RainStreaksSlopeSmoothness);
		
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Splatter Scale", RainSplatterScale);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Splatter Slope Angle", RainSplatterSlopeAngle);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Splatter Slope Smoothness", RainSplatterSlopeSmoothness);

		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Snow Mask Scale", SnowMaskScale);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Snow Scale", SnowScale);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Snow Roughness", SnowRoughness);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Snow Sparkles Scale", SnowSparklesScale);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Snow Sparkles Roughness", SnowSparklesRoughness);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Snow Slope Angle", SnowSlopeAngle);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Snow Slope Smoothness", SnowSlopeSmoothness);

		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Sky Atmosphere Planet Top", PlanetTopPosition.Z);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Volumetric Cloud Bottom Altitude", LayerBottomAltitudePosition.Z);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Volumetric Cloud Top Altitude", LayerTopAltitudePosition.Z);

		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Moon Angular Diameter", MoonDiskSize);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Moon Rotation", MoonRotation);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Moon Phase", MoonPhase);
		UKismetMaterialLibrary::SetVectorParameterValue(this, CommonMPC, "Star Map Rotation", FLinearColor(GetStarMapRotation().Vector()));
		UKismetMaterialLibrary::SetVectorParameterValue(this, CommonMPC, "Star Map Additional Rotation", FLinearColor(StarMapAdditionalRotation));

		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Night Intensity Transition Start Sun Angle", NightIntensityTransitionStartSunAngle);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Night Intensity Transition End Sun Angle", NightIntensityTransitionEndSunAngle);

		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Background Clouds Contrast", BackgroundCloudsContrast);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Background Clouds Reflection Scale", BackgroundCloudsReflectionScale);

		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Weather FX Height Cutoff", WeatherFXHeightCutoff);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Weather FX Cutoff Softness", WeatherFXCutoffSoftness);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Material FX Height Cutoff", MaterialFXHeightCutoff);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Material FX Cutoff Softness", MaterialFXCutoffSoftness);

		UKismetMaterialLibrary::SetVectorParameterValue(this, CommonMPC, "Sun Light Direction", FLinearColor(SunLight->GetComponentRotation().Vector() * -1.0f));
		UKismetMaterialLibrary::SetVectorParameterValue(this, CommonMPC, "Moon Light Direction", FLinearColor(MoonLight->GetComponentRotation().Vector() * -1.0f));

//		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Fog Density", MaterialFXCutoffSoftness);
//		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Fog Height Falloff", MaterialFXCutoffSoftness);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Fog Height", FogHeightOffset);

//		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Second Fog Density", MaterialFXCutoffSoftness);
//		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Second Fog Height Falloff", MaterialFXCutoffSoftness);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Second Fog Height", SecondFogHeightOffset);
	}

	if (VolumetricCloudsMPC)
	{
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Cloud Map Scale", CloudMapScale);
		UKismetMaterialLibrary::SetVectorParameterValue(this, VolumetricCloudsMPC, "Cloud Map Offset", FLinearColor(CloudMapOffset.X, CloudMapOffset.Y, 0));
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Coverage Variation Map Scale", CoverageVariationMapScale);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Lightning Flash Reflection Scale", LightningFlashEmissiveReflectionScale);
		UKismetMaterialLibrary::SetVectorParameterValue(this, VolumetricCloudsMPC, "Noise Shape Wind Offset", FLinearColor(CloudNoiseShapeWindOffset));

		VolumetricCloudMID->SetScalarParameterValue("NoiseShape_Scale", NoiseShapeScale);
		VolumetricCloudMID->SetScalarParameterValue("NoiseDetail_Scale", NoiseDetailScale);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Noise Shape Scale", NoiseShapeScale);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Noise Detail Scale", NoiseDetailScale);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Turbulence Scale", TurbulenceScale);

		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Sky Atmosphere Planet Top", PlanetTopPosition.Z);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Volumetric Cloud Bottom Altitude", LayerBottomAltitudePosition.Z);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Volumetric Cloud Top Altitude", LayerTopAltitudePosition.Z);
	}
}

void ASkyCreator::SetWeatherFXStaticSettings()
{
	if (WeatherFX)
	{
		if (WeatherFX->GetAsset() == nullptr)
		{
			WeatherFX->SetAsset(LoadObject<UNiagaraSystem>(nullptr, TEXT("NiagaraSystem'/SkyCreatorPlugin/Effects/WeatherFX/SC_WeatherFX_System.SC_WeatherFX_System'")));
		}

		switch (PrecipitationSpawnMode)
		{
		case 0:
			{
				WeatherFX->SetVariableBool("Precipitation CPU", true);
				WeatherFX->SetVariableBool("Precipitation GPU", true);
				break;
			}
		case 1:
			{
				WeatherFX->SetVariableBool("Precipitation CPU", true);
				WeatherFX->SetVariableBool("Precipitation GPU", false);
				break;
			}
		case 2:
			{
				WeatherFX->SetVariableBool("Precipitation CPU", false);
				WeatherFX->SetVariableBool("Precipitation GPU", true);
				break;
			}
		default:
			{
				WeatherFX->SetVariableBool("Precipitation CPU", true);
				WeatherFX->SetVariableBool("Precipitation GPU", true);
				break;
			}
		}

		WeatherFX->SetVariableFloat("Weather FX Height Cutoff", WeatherFXHeightCutoff);

		WeatherFX->SetVariableFloat("Precipitation Spawn Radius CPU", PrecipitationSpawnRadiusCPU);
		WeatherFX->SetVariableFloat("Precipitation Spawn Radius GPU", PrecipitationSpawnRadiusGPU);
//		WeatherFX->SetVariableFloat("Precipitation Depth Fade Distance", PrecipitationDepthFadeDistance);
//		WeatherFX->SetVariableFloat("Precipitation Camera Fade Distance", PrecipitationCameraFadeDistance);
//		WeatherFX->SetVariableFloat("Precipitation Camera Fade Offset", PrecipitationCameraFadeOffset);
		WeatherFX->SetVariableFloat("Precipitation Max View Distance", PrecipitationMaxViewDistance);
		WeatherFX->SetVariableFloat("Precipitation Vertical Check Distance", PrecipitationVerticalCheckDistance);
		WeatherFX->SetVariableInt("Precipitation Collision Channel", UKismetMathLibrary::Conv_ByteToInt(PrecipitationCollisionChannel));
		WeatherFX->SetVariableFloat("Cloud Bottom Altitude", LayerBottomAltitudePosition.Z);

		WeatherFX->SetVariableFloat("Rain Distance Scale Factor", RainDistanceScaleFactor);
		WeatherFX->SetVariableFloat("Rain Camera Velocity Alignment Scale", RainCameraMotionAlignmentScale);
		WeatherFX->SetVariableFloat("Rain Velocity Stretching Scale", RainVelocityElongationScale);
		WeatherFX->SetVariableFloat("Rain Velocity Fade", RainVelocityFade);
		WeatherFX->SetVariableFloat("Rain IOR", RainIndexOfRefraction);
//		WeatherFX->SetVariableFloat("Rain Mask Hardness", RainMaskHardness);
		WeatherFX->SetVariableFloat("Rain Depth Fade Distance", RainDepthFadeDistance);
		WeatherFX->SetVariableFloat("Rain Camera Fade Distance", RainCameraFadeDistance);
		WeatherFX->SetVariableFloat("Rain Camera Fade Offset", RainCameraFadeOffset);
		
		WeatherFX->SetVariableFloat("Rain Splash IOR", RainSplashIndexOfRefraction);
		WeatherFX->SetVariableBool("Rain Splash Volumetric", EnableRainSplashVolumetric);
		WeatherFX->SetVariableFloat("Rain Splash Depth Fade Distance", RainSplashDepthFadeDistance);
		WeatherFX->SetVariableFloat("Rain Splash Camera Fade Distance", RainSplashCameraFadeDistance);
		WeatherFX->SetVariableFloat("Rain Splash Camera Fade Offset", RainSplashCameraFadeOffset);

		WeatherFX->SetVariableFloat("Snow Distance Scale Factor", SnowDistanceScaleFactor);
		WeatherFX->SetVariableFloat("Snow Camera Velocity Alignment Scale", SnowCameraMotionAlignmentScale);
		WeatherFX->SetVariableFloat("Snow Velocity Stretching Scale", SnowVelocityElongationScale);
//		WeatherFX->SetVariableFloat("Snow Mask Hardness", SnowMaskHardness);
		WeatherFX->SetVariableFloat("Snow Depth Fade Distance", SnowDepthFadeDistance);
		WeatherFX->SetVariableFloat("Snow Camera Fade Distance", SnowCameraFadeDistance);
		WeatherFX->SetVariableFloat("Snow Camera Fade Offset", SnowCameraFadeOffset);

		WeatherFX->SetVariableFloat("Occlusion Width", OcclusionCaptureWidth);
		WeatherFX->SetVariableObject("Occlusion Texture", OcclusionRenderTarget);

		WeatherFX->SetVariableFloat("Rainbow Distance", RainbowDistance);
		WeatherFX->SetVariableFloat("Rainbow Depth Fade Distance", RainbowDepthFadeDistance);
	}
}

void ASkyCreator::SetMaterialFXStaticSettings()
{
	if (CommonMPC)
	{
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Occlusion Capture Width", OcclusionCaptureWidth);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Distant Occlusion Capture Width", DistantOcclusionCaptureWidth);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Occlusion Bias", OcclusionBias);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Occlusion Blur Samples", OcclusionBlurSamples);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Occlusion Blur Distance", OcclusionBlurDistance); //  OcclusionBlurDistance/OcclusionCaptureWidth); // Blur Distance in world units
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Occlusion Mask Radius", (OcclusionCaptureWidth/2) - OcclusionCaptureStepDistance);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Distant Occlusion Mask Radius", (DistantOcclusionCaptureWidth / 2) - DistantOcclusionCaptureStepDistance);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Occlusion Transition Hardness", OcclusionTransitionHardness);

		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Wetness Slope Angle", WetnessSlopeAngle);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Wetness Slope Smoothness", WetnessSlopeSmoothness);

		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Puddles Scale", PuddlesMaskScale);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Puddles Roughness", PuddlesRoughness);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Puddles Slope Angle", PuddlesSlopeAngle);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Puddles Slope Smoothness", PuddlesSlopeSmoothness);

		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Drops Scale", RainDropsScale);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Drops Slope Angle", RainDropsSlopeAngle);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Drops Slope Smoothness", RainDropsSlopeSmoothness);
		
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Streaks Scale", RainStreaksScale);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Streaks Slope Angle", RainStreaksSlopeAngle);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Streaks Slope Smoothness", RainStreaksSlopeSmoothness);
		
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Splatter Scale", RainSplatterScale);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Splatter Slope Angle", RainSplatterSlopeAngle);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Splatter Slope Smoothness", RainSplatterSlopeSmoothness);

		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Ripples Scale", RainRipplesScale);
//		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Ripples Max Density", RainRipplesMaxDensity);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Wind Ripples Scale", WindRipplesScale);

		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Snow Mask Scale", SnowMaskScale);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Snow Scale", SnowScale);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Snow Roughness", SnowRoughness);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Snow Sparkles Scale", SnowSparklesScale);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Snow Sparkles Roughness", SnowSparklesRoughness);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Snow Slope Angle", SnowSlopeAngle);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Snow Slope Smoothness", SnowSlopeSmoothness);
	}
}

void ASkyCreator::SetSkyAtmosphereSettings(FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettings)
{
	if (SkyAtmosphere)
	{ 
		WeatherSettings.SkyAtmosphereSettings = InSkyAtmosphereSettings;

		SkyAtmosphere->SetRayleighScatteringScale(WeatherSettings.SkyAtmosphereSettings.RayleighScatteringScale);
		SkyAtmosphere->SetRayleighScattering(WeatherSettings.SkyAtmosphereSettings.RayleighScattering);
		SkyAtmosphere->SetRayleighExponentialDistribution(WeatherSettings.SkyAtmosphereSettings.RayleighExponentialDistribution);
		SkyAtmosphere->SetMieScatteringScale(WeatherSettings.SkyAtmosphereSettings.MieScatteringScale);
		SkyAtmosphere->SetMieScattering(WeatherSettings.SkyAtmosphereSettings.MieScattering);
		SkyAtmosphere->SetMieAbsorptionScale(WeatherSettings.SkyAtmosphereSettings.MieAbsorptionScale);
		SkyAtmosphere->SetMieAbsorption(WeatherSettings.SkyAtmosphereSettings.MieAbsorption);
		SkyAtmosphere->SetMieAnisotropy(WeatherSettings.SkyAtmosphereSettings.MieAnisotropy);
		SkyAtmosphere->SetMieExponentialDistribution(WeatherSettings.SkyAtmosphereSettings.MieExponentialDistribution);
		SkyAtmosphere->SetOtherAbsorptionScale(WeatherSettings.SkyAtmosphereSettings.AbsorptionScale);
		SkyAtmosphere->SetOtherAbsorption(WeatherSettings.SkyAtmosphereSettings.Absorption);
		SkyAtmosphere->SetSkyLuminanceFactor(WeatherSettings.SkyAtmosphereSettings.SkyLuminanceFactor);
		SkyAtmosphere->GroundAlbedo = WeatherSettings.SkyAtmosphereSettings.GroundAlbedo.ToFColor(true);
		SkyAtmosphere->SetHeightFogContribution(WeatherSettings.SkyAtmosphereSettings.HeightFogContribution);
		SkyAtmosphere->MarkRenderStateDirty();
	}
}

void ASkyCreator::SetVolumetricCloudSettings(FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettings)
{
	if (VolumetricCloud && VolumetricCloudMID && VolumetricCloudsMPC)
	{
		WeatherSettings.VolumetricCloudSettings = InVolumetricCloudSettings;

		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Stratus Coverage", WeatherSettings.VolumetricCloudSettings.StratusCoverage);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Stratus Coverage Variation", WeatherSettings.VolumetricCloudSettings.StratusCoverageVariation);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Stratus Height Variation", WeatherSettings.VolumetricCloudSettings.StratusHeightVariation);

		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Stratocumulus Coverage", WeatherSettings.VolumetricCloudSettings.StratocumulusCoverage);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Stratocumulus Coverage Variation", WeatherSettings.VolumetricCloudSettings.StratocumulusCoverageVariation);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Stratocumulus Height Variation", WeatherSettings.VolumetricCloudSettings.StratocumulusHeightVariation);

		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Cumulus Coverage", WeatherSettings.VolumetricCloudSettings.CumulusCoverage);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Cumulus Coverage Variation", WeatherSettings.VolumetricCloudSettings.CumulusCoverageVariation);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Cumulus Height Variation", WeatherSettings.VolumetricCloudSettings.CumulusHeightVariation);

		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Cumulonimbus Coverage", WeatherSettings.VolumetricCloudSettings.CumulonimbusCoverage);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Cumulonimbus Anvil", WeatherSettings.VolumetricCloudSettings.CumulonimbusAnvil);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Cumulonimbus Height Variation", WeatherSettings.VolumetricCloudSettings.CumulonimbusHeightVariation);

		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Density Bottom", WeatherSettings.VolumetricCloudSettings.DensityBottom);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Density Middle", WeatherSettings.VolumetricCloudSettings.DensityMiddle);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Density Top", WeatherSettings.VolumetricCloudSettings.DensityTop);

		UKismetMaterialLibrary::SetVectorParameterValue(this, VolumetricCloudsMPC, "Albedo", WeatherSettings.VolumetricCloudSettings.Albedo);
		VolumetricCloud->SetGroundAlbedo(WeatherSettings.VolumetricCloudSettings.GroundAlbedo.ToFColor(true));
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Beer's Powder Intensity", WeatherSettings.VolumetricCloudSettings.BeersPowderIntensity);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Beer's Powder Depth", WeatherSettings.VolumetricCloudSettings.BeersPowderDepth);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Bottom Occlusion", WeatherSettings.VolumetricCloudSettings.BottomOcclusion);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Bottom Occlusion Height", WeatherSettings.VolumetricCloudSettings.BottomOcclusionHeight);
		UKismetMaterialLibrary::SetVectorParameterValue(this, VolumetricCloudsMPC, "Night Emissive", WeatherSettings.VolumetricCloudSettings.NightEmissive);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Phase G", WeatherSettings.VolumetricCloudSettings.PhaseG);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Phase G2", WeatherSettings.VolumetricCloudSettings.PhaseG2);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Phase Blend", WeatherSettings.VolumetricCloudSettings.PhaseBlend);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Multi Scattering Contribution", WeatherSettings.VolumetricCloudSettings.MultiScatteringContribution);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Multi Scattering Occlusion", WeatherSettings.VolumetricCloudSettings.MultiScatteringOcclusion);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Multi Scattering Eccentricity", WeatherSettings.VolumetricCloudSettings.MultiScatteringEccentricity);

		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Noise Shape Intensity A", WeatherSettings.VolumetricCloudSettings.NoiseShapeIntensityA);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Noise Shape Intensity B", WeatherSettings.VolumetricCloudSettings.NoiseShapeIntensityB);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Noise Shape Intensity C", WeatherSettings.VolumetricCloudSettings.NoiseShapeIntensityC);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Noise Shape Intensity D", WeatherSettings.VolumetricCloudSettings.NoiseShapeIntensityD);
//		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Noise Detail Intensity A", WeatherSettings.VolumetricCloudSettings.NoiseDetailIntensityA);
//		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Noise Detail Intensity B", WeatherSettings.VolumetricCloudSettings.NoiseDetailIntensityB);
//		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Noise Detail Intensity C", WeatherSettings.VolumetricCloudSettings.NoiseDetailIntensityC);
		UKismetMaterialLibrary::SetScalarParameterValue(this, VolumetricCloudsMPC, "Turbulence Intensity", WeatherSettings.VolumetricCloudSettings.TurbulenceIntensity);
	}
}

void ASkyCreator::SetBackgroundCloudSettings(FSkyCreatorBackgroundCloudSettings InBackgroundCloudSettings)
{
	if (SkySphere && CommonMPC)
	{
		WeatherSettings.BackgroundCloudSettings = InBackgroundCloudSettings;

		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Background Clouds Intensity", WeatherSettings.BackgroundCloudSettings.BackgroundCloudsIntensity);
		UKismetMaterialLibrary::SetVectorParameterValue(this, CommonMPC, "Background Clouds Color Tint", WeatherSettings.BackgroundCloudSettings.BackgroundCloudsColorTint);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Background Clouds Layer A", WeatherSettings.BackgroundCloudSettings.BackgroundCloudsLayerA);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Background Clouds Layer B", WeatherSettings.BackgroundCloudSettings.BackgroundCloudsLayerB);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Background Clouds Layer C", WeatherSettings.BackgroundCloudSettings.BackgroundCloudsLayerC);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Background Clouds Phase", WeatherSettings.BackgroundCloudSettings.BackgroundCloudsLightningPhase);
	}
}

void ASkyCreator::SetSkyLightSettings(FSkyCreatorSkyLightSettings InSkyLightSettings)
{
	if (SkyLight && CommonMPC)
	{
		WeatherSettings.SkyLightSettings = InSkyLightSettings;

		SkyLight->SetIntensity(WeatherSettings.SkyLightSettings.Intensity);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Sky Light Night Intensity", WeatherSettings.SkyLightSettings.NightIntensity);
		SkyLight->SetLightColor(WeatherSettings.SkyLightSettings.LightColor);
		SkyLight->SetLowerHemisphereColor(WeatherSettings.SkyLightSettings.LowerHemisphereColor);
		SkyLight->CloudAmbientOcclusionStrength = WeatherSettings.SkyLightSettings.CloudAmbientOcclusionStrength;
		SkyLight->MarkRenderStateDirty();
		//SkySphereMID->SetScalarParameterValue("SkyLight_DayIntensity", WeatherSettings.SkyLightSettings.DayIntensity);
		//SkySphereMID->SetScalarParameterValue("SkyLight_NightIntensity", WeatherSettings.SkyLightSettings.NightIntensity);
	}
}

void ASkyCreator::SetSunLightSettings(FSkyCreatorSunLightSettings InSunLightSettings)
{
	if (SunLight && CommonMPC)
	{
		WeatherSettings.SunLightSettings = InSunLightSettings;

		if (!bSunConstantIntensity)
		{
			SunLight->SetIntensity(WeatherSettings.SunLightSettings.Intensity);
		}

		if (bSunConstantAtmosphereDiskColorScale)
		{
			WeatherSettings.SunLightSettings.AtmosphereDiskColorScale = SunAtmosphereDiskColorScale;
		}
		
		//SunLight->SetIntensity(WeatherSettings.SunLightSettings.Intensity);
		SunLight->SetLightColor(WeatherSettings.SunLightSettings.LightColor);
		SunLight->SetTemperature(WeatherSettings.SunLightSettings.Temperature);
		SunLight->SetVolumetricScatteringIntensity(WeatherSettings.SunLightSettings.VolumetricScatteringIntensity);
		SunLight->AtmosphereSunDiskColorScale = WeatherSettings.SunLightSettings.AtmosphereDiskColorScale;
		SunLight->CloudScatteredLuminanceScale = WeatherSettings.SunLightSettings.CloudScatteredLuminanceScale;
		SunLight->CloudShadowStrength = WeatherSettings.SunLightSettings.CloudShadowStrength;
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Sun Cloud Shadow Strength", WeatherSettings.SunLightSettings.CloudShadowStrength);
		SunLight->CloudShadowOnAtmosphereStrength = WeatherSettings.SunLightSettings.CloudShadowOnAtmosphereStrength;
		SunLight->CloudShadowOnSurfaceStrength = WeatherSettings.SunLightSettings.CloudShadowOnSurfaceStrength;
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Sun Cloud Shadow On Surface Strength", WeatherSettings.SunLightSettings.CloudShadowOnSurfaceStrength);
		SunLight->MarkRenderStateDirty();
		UpdateSunMoonIntensity(TimeOfDay);
	}
}

void ASkyCreator::SetMoonLightSettings(FSkyCreatorMoonLightSettings InMoonLightSettings)
{
	if (MoonLight && CommonMPC)
	{
		WeatherSettings.MoonLightSettings = InMoonLightSettings;

		if (!bMoonConstantIntensity)
		{
			MoonLight->SetIntensity(WeatherSettings.MoonLightSettings.Intensity);
		}

		if (bMoonConstantAtmosphereDiskColorScale)
		{
			WeatherSettings.MoonLightSettings.AtmosphereDiskColorScale = MoonAtmosphereDiskColorScale;
		}

		//MoonLight->SetIntensity(WeatherSettings.MoonLightSettings.Intensity);
		MoonLight->SetLightColor(WeatherSettings.MoonLightSettings.LightColor);
		MoonLight->SetTemperature(WeatherSettings.MoonLightSettings.Temperature);
		MoonLight->SetVolumetricScatteringIntensity(WeatherSettings.MoonLightSettings.VolumetricScatteringIntensity);
		MoonLight->AtmosphereSunDiskColorScale = WeatherSettings.MoonLightSettings.AtmosphereDiskColorScale;
//		SkySphereMID->SetVectorParameterValue("Moon_Color", WeatherSettings.MoonLightSettings.AtmosphereDiskColorScale);
		MoonLight->CloudScatteredLuminanceScale = WeatherSettings.MoonLightSettings.CloudScatteredLuminanceScale;
		MoonLight->CloudShadowStrength = WeatherSettings.MoonLightSettings.CloudShadowStrength;
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Moon Cloud Shadow Strength", WeatherSettings.MoonLightSettings.CloudShadowStrength);
		MoonLight->CloudShadowOnAtmosphereStrength = WeatherSettings.MoonLightSettings.CloudShadowOnAtmosphereStrength;
		MoonLight->CloudShadowOnSurfaceStrength = WeatherSettings.MoonLightSettings.CloudShadowOnSurfaceStrength;
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Moon Cloud Shadow On Surface Strength", WeatherSettings.MoonLightSettings.CloudShadowOnSurfaceStrength);
		MoonLight->MarkRenderStateDirty();
		UKismetMaterialLibrary::SetVectorParameterValue(this, CommonMPC, "Moon Color", WeatherSettings.MoonLightSettings.AtmosphereDiskColorScale);
		UpdateSunMoonIntensity(TimeOfDay);
	}
}

void ASkyCreator::SetExponentialHeightFogSettings(FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettings)
{
	if (ExponentialHeightFog)
	{
		WeatherSettings.ExponentialHeightFogSettings = InExponentialHeightFogSettings;

		ExponentialHeightFog->SetFogDensity(WeatherSettings.ExponentialHeightFogSettings.FogDensity);
		ExponentialHeightFog->SetFogHeightFalloff(WeatherSettings.ExponentialHeightFogSettings.FogHeightFalloff);
		ExponentialHeightFog->SetFogInscatteringColor(WeatherSettings.ExponentialHeightFogSettings.FogInscatteringColor);
		ExponentialHeightFog->SetStartDistance(WeatherSettings.ExponentialHeightFogSettings.FogStartDistance);

		ExponentialHeightFog->SecondFogData.FogDensity = WeatherSettings.ExponentialHeightFogSettings.SecondFogDensity;
		ExponentialHeightFog->SecondFogData.FogHeightFalloff = WeatherSettings.ExponentialHeightFogSettings.SecondFogHeightFalloff;

		ExponentialHeightFog->SetDirectionalInscatteringExponent(WeatherSettings.ExponentialHeightFogSettings.DirectionalInscatteringExponent);
		ExponentialHeightFog->SetDirectionalInscatteringColor(WeatherSettings.ExponentialHeightFogSettings.DirectionalInscatteringColor);
		ExponentialHeightFog->SetDirectionalInscatteringStartDistance(WeatherSettings.ExponentialHeightFogSettings.DirectionalInscatteringStartDistance);

		ExponentialHeightFog->SetVolumetricFogScatteringDistribution(WeatherSettings.ExponentialHeightFogSettings.VolumetricFogScatteringDistribution);
		ExponentialHeightFog->SetVolumetricFogAlbedo(WeatherSettings.ExponentialHeightFogSettings.VolumetricFogAlbedo.ToFColor(true));
		ExponentialHeightFog->SetVolumetricFogEmissive(WeatherSettings.ExponentialHeightFogSettings.VolumetricFogEmissive);
		ExponentialHeightFog->SetVolumetricFogExtinctionScale(WeatherSettings.ExponentialHeightFogSettings.VolumetricFogExtinctionScale);
		ExponentialHeightFog->VolumetricFogStartDistance = WeatherSettings.ExponentialHeightFogSettings.VolumetricFogStartDistance;
		ExponentialHeightFog->VolumetricFogNearFadeInDistance = WeatherSettings.ExponentialHeightFogSettings.VolumetricFogNearFadeInDistance;
		ExponentialHeightFog->MarkRenderStateDirty();
	}

	if (CommonMPC)
	{
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Fog Density", WeatherSettings.ExponentialHeightFogSettings.FogDensity);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Fog Height Falloff", WeatherSettings.ExponentialHeightFogSettings.FogHeightFalloff);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Second Fog Density", WeatherSettings.ExponentialHeightFogSettings.SecondFogDensity);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Second Fog Height Falloff", WeatherSettings.ExponentialHeightFogSettings.SecondFogHeightFalloff);
	}
}

void ASkyCreator::SetStarMapSettings(FSkyCreatorStarMapSettings InStarMapSettings)
{
	if (SkySphere && CommonMPC)
	{
		WeatherSettings.StarMapSettings = InStarMapSettings;
		
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Star Map Intensity", WeatherSettings.StarMapSettings.StarMapIntensity);
		UKismetMaterialLibrary::SetVectorParameterValue(this, CommonMPC, "Star Map Color Tint", WeatherSettings.StarMapSettings.StarMapColorTint);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Star Map Twinkle Intensity", WeatherSettings.StarMapSettings.StarMapTwinkleIntensity);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Star Map Twinkle Saturation", WeatherSettings.StarMapSettings.StarMapTwinkleSaturation);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Star Map Twinkle Speed", WeatherSettings.StarMapSettings.StarMapTwinkleSpeed);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Star Map Horizon Threshold", WeatherSettings.StarMapSettings.StarMapHorizonThreshold);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Star Map Atmosphere Threshold", WeatherSettings.StarMapSettings.StarMapAtmosphereThreshold);
		UKismetMaterialLibrary::SetVectorParameterValue(this, CommonMPC, "Night Zenith Color", WeatherSettings.StarMapSettings.NightZenithColor); // Fake Night Atmosphere Zenith Color
		UKismetMaterialLibrary::SetVectorParameterValue(this, CommonMPC, "Night Horizon Color", WeatherSettings.StarMapSettings.NightHorizonColor); // Fake Night Atmosphere Horizon Color
	}
}

void ASkyCreator::SetWeatherFXSettings(FSkyCreatorWeatherFXSettings InWeatherFXSettings)
{
	if (WeatherFX)
	{
		WeatherSettings.WeatherFXSettings = InWeatherFXSettings;

		WeatherFX->SetVariableFloat("Rain Spawn Rate CPU", FMath::Lerp(0.0f, RainSpawnRateMaxCPU, WeatherSettings.WeatherFXSettings.RainAmount));
		WeatherFX->SetVariableFloat("Rain Spawn Rate GPU", FMath::Lerp(0.0f, RainSpawnRateMaxGPU, WeatherSettings.WeatherFXSettings.RainAmount));
		WeatherFX->SetVariableLinearColor("Rain Color", WeatherSettings.WeatherFXSettings.RainColor);
		WeatherFX->SetVariableFloat("Rain Gravity", WeatherSettings.WeatherFXSettings.RainGravity);
		WeatherFX->SetVariableFloat("Rain Lifetime Min", WeatherSettings.WeatherFXSettings.RainLifetimeMin);
		WeatherFX->SetVariableFloat("Rain Lifetime Max", WeatherSettings.WeatherFXSettings.RainLifetimeMax);
		WeatherFX->SetVariableFloat("Rain Size Min", WeatherSettings.WeatherFXSettings.RainSizeMin);
		WeatherFX->SetVariableFloat("Rain Size Max", WeatherSettings.WeatherFXSettings.RainSizeMax);
		WeatherFX->SetVariableFloat("Rain Mask Hardness", WeatherSettings.WeatherFXSettings.RainMaskHardness);

//		WeatherFX->SetVariableFloat("Rain Splash Spawn Rate", FMath::Lerp(0.0f, RainSplashSpawnRateMax, WeatherSettings.WeatherFXSettings.RainAmount));
		WeatherFX->SetVariableFloat("Rain Splash Spawn Rate GPU", FMath::Lerp(0.0f, RainSplashSpawnRateMaxGPU, WeatherSettings.WeatherFXSettings.RainAmount));
		WeatherFX->SetVariableLinearColor("Rain Splash Color", WeatherSettings.WeatherFXSettings.RainSplashColor);
		WeatherFX->SetVariableFloat("Rain Splash Lifetime Min", WeatherSettings.WeatherFXSettings.RainSplashLifetimeMin);
		WeatherFX->SetVariableFloat("Rain Splash Lifetime Max", WeatherSettings.WeatherFXSettings.RainSplashLifetimeMax);
		WeatherFX->SetVariableFloat("Rain Splash Min Size", WeatherSettings.WeatherFXSettings.RainSplashSizeMin);
		WeatherFX->SetVariableFloat("Rain Splash Max Size", WeatherSettings.WeatherFXSettings.RainSplashSizeMax);
		WeatherFX->SetVariableFloat("Rain Splash Volumetric Scale", WeatherSettings.WeatherFXSettings.RainSplashVolumetricScale);
		WeatherFX->SetVariableFloat("Rain Splash Volumetric Density", WeatherSettings.WeatherFXSettings.RainSplashVolumetricDensity);

		WeatherFX->SetVariableFloat("Snow Spawn Rate", FMath::Lerp(0.0f, SnowSpawnRateMaxCPU, WeatherSettings.WeatherFXSettings.SnowAmount));
		WeatherFX->SetVariableFloat("Snow Spawn Rate GPU", FMath::Lerp(0.0f, SnowSpawnRateMaxGPU, WeatherSettings.WeatherFXSettings.SnowAmount));
		WeatherFX->SetVariableLinearColor("Snow Color", WeatherSettings.WeatherFXSettings.SnowColor);
		WeatherFX->SetVariableFloat("Snow Type", WeatherSettings.WeatherFXSettings.SnowType);
		WeatherFX->SetVariableFloat("Snow Gravity", WeatherSettings.WeatherFXSettings.SnowGravity);
		WeatherFX->SetVariableFloat("Snow Turbulence", WeatherSettings.WeatherFXSettings.SnowTurbulence);
		WeatherFX->SetVariableFloat("Snow Lifetime Min", WeatherSettings.WeatherFXSettings.SnowLifetimeMin);
		WeatherFX->SetVariableFloat("Snow Lifetime Max", WeatherSettings.WeatherFXSettings.SnowLifetimeMax);
		WeatherFX->SetVariableFloat("Snow Size Min", WeatherSettings.WeatherFXSettings.SnowSizeMin);
		WeatherFX->SetVariableFloat("Snow Size Max", WeatherSettings.WeatherFXSettings.SnowSizeMax);
		WeatherFX->SetVariableFloat("Snow Mask Hardness", WeatherSettings.WeatherFXSettings.SnowMaskHardness);

		WeatherFX->SetVariableFloat("Rainbow Amount", WeatherSettings.WeatherFXSettings.RainbowAmount);
		WeatherFX->SetVariableLinearColor("Rainbow Color", WeatherSettings.WeatherFXSettings.RainbowColor);
		WeatherFX->SetVariableFloat("Rainbow Radius", WeatherSettings.WeatherFXSettings.RainbowRadius);
		WeatherFX->SetVariableFloat("Rainbow Thickness", WeatherSettings.WeatherFXSettings.RainbowThickness);
		WeatherFX->SetVariableLinearColor("Secondary Rainbow Color", WeatherSettings.WeatherFXSettings.SecondaryRainbowColor);
		WeatherFX->SetVariableFloat("Secondary Rainbow Radius", WeatherSettings.WeatherFXSettings.SecondaryRainbowRadius);
		WeatherFX->SetVariableFloat("Secondary Rainbow Thickness", WeatherSettings.WeatherFXSettings.SecondaryRainbowThickness);

		WeatherFX->SetVariableFloat("Volumetric Mist Amount", WeatherSettings.WeatherFXSettings.VolumetricMistAmount);
		WeatherFX->SetVariableFloat("Volumetric Mist Density", WeatherSettings.WeatherFXSettings.VolumetricMistDensity);
		WeatherFX->SetVariableLinearColor("Volumetric Mist Color", WeatherSettings.WeatherFXSettings.VolumetricMistColor);
		WeatherFX->SetVariableFloat("Volumetric Mist Fog Density Contribution", WeatherSettings.WeatherFXSettings.VolumetricMistFogDensityContribution);

		WeatherFX->SetVariableFloat("Volumetric Wind Amount", WeatherSettings.WeatherFXSettings.VolumetricWindAmount);
		WeatherFX->SetVariableFloat("Volumetric Wind Density", WeatherSettings.WeatherFXSettings.VolumetricWindDensity);
        WeatherFX->SetVariableLinearColor("Volumetric Wind Color", WeatherSettings.WeatherFXSettings.VolumetricWindColor);
        WeatherFX->SetVariableFloat("Volumetric Wind Fog Density Contribution", WeatherSettings.WeatherFXSettings.VolumetricWindFogDensityContribution);
	}
}

void ASkyCreator::SetMaterialFXSettings(FSkyCreatorMaterialFXSettings InMaterialFXSettings)
{
	if (CommonMPC)
	{
		WeatherSettings.MaterialFXSettings = InMaterialFXSettings;

		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Wetness Amount", WeatherSettings.MaterialFXSettings.WetnessAmount);
		UKismetMaterialLibrary::SetVectorParameterValue(this, CommonMPC, "Wetness Color", WeatherSettings.MaterialFXSettings.WetnessColor);

		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Puddles Amount", WeatherSettings.MaterialFXSettings.PuddlesAmount);
		UKismetMaterialLibrary::SetVectorParameterValue(this, CommonMPC, "Puddles Color", WeatherSettings.MaterialFXSettings.PuddlesColor);

//		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Ripples Amount", WeatherSettings.MaterialFXSettings.RainRipplesAmount);
//		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Ripples Intensity", WeatherSettings.MaterialFXSettings.RainRipplesIntensity);
//		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Ripples Force Min Radius", WeatherSettings.WeatherMaterialFXSettings.RainRipplesForceMinRadius);
//		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Ripples Force Max Radius", WeatherSettings.WeatherMaterialFXSettings.RainRipplesForceMaxRadius);
//		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Ripples Rings Number", WeatherSettings.WeatherMaterialFXSettings.RainRipplesRingsNumber);
//		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Ripples Rings Delay", WeatherSettings.WeatherMaterialFXSettings.RainRipplesRingsDelay);
//		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Rain Ripples Damping", WeatherSettings.MaterialFXSettings.RainRipplesDamping);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Wind Ripples Intensity", WeatherSettings.MaterialFXSettings.WindRipplesIntensity);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Wind Ripples Speed", WeatherSettings.MaterialFXSettings.WindRipplesSpeed);

		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Snow Amount", WeatherSettings.MaterialFXSettings.SnowAmount);
		UKismetMaterialLibrary::SetVectorParameterValue(this, CommonMPC, "Snow Color", WeatherSettings.MaterialFXSettings.SnowColor);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Snow Intensity", WeatherSettings.MaterialFXSettings.SnowIntensity);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Snow Sparkles Threshold", WeatherSettings.MaterialFXSettings.SnowSparklesThreshold);
	}
	if (RainRipplesFX)
	{
		RainRipplesFX->SetVariableFloat("Rain Ripples Amount", WeatherSettings.MaterialFXSettings.RainRipplesAmount);
		RainRipplesFX->SetVariableFloat("Rain Ripples Intensity", WeatherSettings.MaterialFXSettings.RainRipplesIntensity);
		RainRipplesFX->SetVariableFloat("Rain Ripples Size Min", WeatherSettings.MaterialFXSettings.RainRipplesSizeMin);
		RainRipplesFX->SetVariableFloat("Rain Ripples Size Max", WeatherSettings.MaterialFXSettings.RainRipplesSizeMax);
		RainRipplesFX->SetVariableFloat("Rain Ripples Damping", WeatherSettings.MaterialFXSettings.RainRipplesDamping);
	}
	if (RainDropsFX)
	{
		RainDropsFX->SetVariableFloat("Raindrop Amount", WeatherSettings.MaterialFXSettings.RainDropsAmount);
		RainDropsFX->SetVariableFloat("Raindrop Intensity", WeatherSettings.MaterialFXSettings.RainDropsIntensity);
		RainDropsFX->SetVariableFloat("Raindrop Scale Min", WeatherSettings.MaterialFXSettings.RainDropsScaleMin);
		RainDropsFX->SetVariableFloat("Raindrop Scale Max", WeatherSettings.MaterialFXSettings.RainDropsScaleMax);
		RainDropsFX->SetVariableFloat("Raindrop Fading Rate", WeatherSettings.MaterialFXSettings.RainDropsFadingRate);
	}
	if (RainStreaksFX)
	{
		RainStreaksFX->SetVariableFloat("Rain Streaks Amount", WeatherSettings.MaterialFXSettings.RainStreaksAmount);
		RainStreaksFX->SetVariableFloat("Rain Streaks Intensity", WeatherSettings.MaterialFXSettings.RainStreaksIntensity);
		RainStreaksFX->SetVariableFloat("Rain Streaks Size Min", WeatherSettings.MaterialFXSettings.RainStreaksSizeMin);
		RainStreaksFX->SetVariableFloat("Rain Streaks Size Max", WeatherSettings.MaterialFXSettings.RainStreaksSizeMax);
		RainStreaksFX->SetVariableFloat("Rain Streaks Fading Rate", WeatherSettings.MaterialFXSettings.RainStreaksFadingRate);
		RainStreaksFX->SetVariableFloat("Rain Streaks Trail Fading Rate", WeatherSettings.MaterialFXSettings.RainStreaksTrailFadingRate);
	}
	if (RainSplatterFX)
	{
		RainSplatterFX->SetVariableFloat("Rain Splatter Amount", WeatherSettings.MaterialFXSettings.RainSplatterAmount);
		//RainSplatterFX->SetVariableFloat("Rain Splatter Intensity", WeatherSettings.WeatherMaterialFXSettings.RainDropsIntensity);
		RainSplatterFX->SetVariableFloat("Rain Splatter Scale Min", WeatherSettings.MaterialFXSettings.RainSplatterScaleMin);
		RainSplatterFX->SetVariableFloat("Rain Splatter Scale Max", WeatherSettings.MaterialFXSettings.RainSplatterScaleMax);
		RainSplatterFX->SetVariableFloat("Rain Splatter Fading Rate", WeatherSettings.MaterialFXSettings.RainSplatterFadingRate);
	}
}

void ASkyCreator::SetWindSettings(FSkyCreatorWindSettings InWindSettings)
{
	if (VolumetricCloud && VolumetricCloudMID && WeatherFX)
	{
//		WeatherSettings.WindSettings = InWindSettings;

		// variable = statement ? true : false;
		WeatherSettings.WindSettings.CloudWindDirection = bOverride_EditorCloudWindDirection ? EditorCloudWindDirection : InWindSettings.CloudWindDirection;
		WeatherSettings.WindSettings.CloudWindSpeed = bOverride_EditorCloudWindSpeed ? EditorCloudWindSpeed : InWindSettings.CloudWindSpeed;
		WeatherSettings.WindSettings.CloudWindSkewAmount = bOverride_EditorCloudWindSkewAmount ? EditorCloudWindSkewAmount : InWindSettings.CloudWindSkewAmount;
		WeatherSettings.WindSettings.CloudNoiseShapeWindDirection = bOverride_EditorCloudNoiseShapeWindDirection ? EditorCloudNoiseShapeWindDirection : InWindSettings.CloudNoiseShapeWindDirection;
		WeatherSettings.WindSettings.CloudNoiseShapeWindSpeedHorizontal = bOverride_EditorCloudNoiseShapeWindSpeedHorizontal ? EditorCloudNoiseShapeWindSpeedHorizontal : InWindSettings.CloudNoiseShapeWindSpeedHorizontal;
		WeatherSettings.WindSettings.CloudNoiseDetailWindSpeedVertical = bOverride_EditorCloudNoiseDetailWindSpeedVertical ? EditorCloudNoiseDetailWindSpeedVertical : InWindSettings.CloudNoiseDetailWindSpeedVertical;

		WeatherSettings.WindSettings.WindDirection = bOverride_EditorWindDirection ? EditorWindDirection : InWindSettings.WindDirection;
		WeatherSettings.WindSettings.WindSpeed = bOverride_EditorWindSpeed ? EditorWindSpeed : InWindSettings.WindSpeed;

		WeatherFX->SetFloatParameter("Wind Direction", WeatherSettings.WindSettings.WindDirection);
		WeatherFX->SetFloatParameter("Wind Speed", WeatherSettings.WindSettings.WindSpeed);

		CloudWindSkewForce = WeatherSettings.WindSettings.CloudWindSkewAmount * (WeatherSettings.WindSettings.CloudWindSpeed / 100.0f);
	}
}

void ASkyCreator::SetWindIndependentSettings(FSkyCreatorWindSettings InWindSettings)
{
	/*
	if (VolumetricCloud && VolumetricCloudMID && WeatherFX)
	{
		if (bIndependentWindControl)
		{
			WeatherSettings.WindSettings = InWindSettings;

			WeatherFX->SetFloatParameter("Wind Direction", WeatherSettings.WindSettings.WindDirection);
			WeatherFX->SetFloatParameter("Wind Speed", WeatherSettings.WindSettings.WindSpeed);
		}
	}
	*/
	SetWindSettings(InWindSettings);
}

void ASkyCreator::SetPostProcessSettings(FSkyCreatorPostProcessSettings InPostProcessSettings)
{
	if (PostProcess)
	{
		WeatherSettings.PostProcessSettings = InPostProcessSettings;

		//PostProcess->Settings.BloomIntensity = WeatherSettings.PostProcessSettings.BloomIntensity;
		//PostProcess->Settings.BloomThreshold = WeatherSettings.PostProcessSettings.BloomThreshold;
		PostProcess->Settings.AutoExposureBias = WeatherSettings.PostProcessSettings.ExposureCompensation;
	}
}

void ASkyCreator::SetWeatherSettings(FSkyCreatorWeatherSettings InWeatherSettings)
{
	SetSkyAtmosphereSettings(InWeatherSettings.SkyAtmosphereSettings);
	SetVolumetricCloudSettings(InWeatherSettings.VolumetricCloudSettings);
	SetBackgroundCloudSettings(InWeatherSettings.BackgroundCloudSettings);
	SetSkyLightSettings(InWeatherSettings.SkyLightSettings);
	SetSunLightSettings(InWeatherSettings.SunLightSettings);
	SetMoonLightSettings(InWeatherSettings.MoonLightSettings);
	SetExponentialHeightFogSettings(InWeatherSettings.ExponentialHeightFogSettings);
	SetStarMapSettings(InWeatherSettings.StarMapSettings);
	SetWeatherFXSettings(InWeatherSettings.WeatherFXSettings);
	SetMaterialFXSettings(InWeatherSettings.MaterialFXSettings);
	SetWindSettings(InWeatherSettings.WindSettings);
	SetPostProcessSettings(InWeatherSettings.PostProcessSettings);
}

void ASkyCreator::LerpSkyAtmosphereSettings(FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsA, FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsB, float Alpha)
{
	if (SkyAtmosphere)
	{
		FSkyCreatorSkyAtmosphereSettings SkyAtmosphereSettings;

		SkyAtmosphereSettings.RayleighScatteringScale = FMath::Lerp(InSkyAtmosphereSettingsA.RayleighScatteringScale, InSkyAtmosphereSettingsB.RayleighScatteringScale, Alpha);
		SkyAtmosphereSettings.RayleighScattering = FMath::Lerp(InSkyAtmosphereSettingsA.RayleighScattering, InSkyAtmosphereSettingsB.RayleighScattering, Alpha);
		SkyAtmosphereSettings.RayleighExponentialDistribution = FMath::Lerp(InSkyAtmosphereSettingsA.RayleighExponentialDistribution, InSkyAtmosphereSettingsB.RayleighExponentialDistribution, Alpha);
		SkyAtmosphereSettings.MieScatteringScale = FMath::Lerp(InSkyAtmosphereSettingsA.MieScatteringScale, InSkyAtmosphereSettingsB.MieScatteringScale, Alpha);
		SkyAtmosphereSettings.MieScattering = FMath::Lerp(InSkyAtmosphereSettingsA.MieScattering, InSkyAtmosphereSettingsB.MieScattering, Alpha);
		SkyAtmosphereSettings.MieAbsorptionScale = FMath::Lerp(InSkyAtmosphereSettingsA.MieAbsorptionScale, InSkyAtmosphereSettingsB.MieAbsorptionScale, Alpha);
		SkyAtmosphereSettings.MieAbsorption = FMath::Lerp(InSkyAtmosphereSettingsA.MieAbsorption, InSkyAtmosphereSettingsB.MieAbsorption, Alpha);
		SkyAtmosphereSettings.MieAnisotropy = FMath::Lerp(InSkyAtmosphereSettingsA.MieAnisotropy, InSkyAtmosphereSettingsB.MieAnisotropy, Alpha);
		SkyAtmosphereSettings.MieExponentialDistribution = FMath::Lerp(InSkyAtmosphereSettingsA.MieExponentialDistribution, InSkyAtmosphereSettingsB.MieExponentialDistribution, Alpha);
		SkyAtmosphereSettings.AbsorptionScale = FMath::Lerp(InSkyAtmosphereSettingsA.AbsorptionScale, InSkyAtmosphereSettingsB.AbsorptionScale, Alpha);
		SkyAtmosphereSettings.Absorption = FMath::Lerp(InSkyAtmosphereSettingsA.Absorption, InSkyAtmosphereSettingsB.Absorption, Alpha);
		SkyAtmosphereSettings.SkyLuminanceFactor = FMath::Lerp(InSkyAtmosphereSettingsA.SkyLuminanceFactor, InSkyAtmosphereSettingsB.SkyLuminanceFactor, Alpha);
		SkyAtmosphereSettings.GroundAlbedo = FMath::Lerp(InSkyAtmosphereSettingsA.GroundAlbedo, InSkyAtmosphereSettingsB.GroundAlbedo, Alpha);
		SkyAtmosphereSettings.HeightFogContribution = FMath::Lerp(InSkyAtmosphereSettingsA.HeightFogContribution, InSkyAtmosphereSettingsB.HeightFogContribution, Alpha);

		SetSkyAtmosphereSettings(SkyAtmosphereSettings);
	}
}

void ASkyCreator::LerpVolumetricCloudSettings(FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsA, FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsB, float Alpha)
{
	if (VolumetricCloud && VolumetricCloudMID)
	{
		FSkyCreatorVolumetricCloudSettings VolumetricCloudSettings;

		VolumetricCloudSettings.StratusCoverage = FMath::Lerp(InVolumetricCloudSettingsA.StratusCoverage, InVolumetricCloudSettingsB.StratusCoverage, Alpha);
		VolumetricCloudSettings.StratusCoverageVariation = FMath::Lerp(InVolumetricCloudSettingsA.StratusCoverageVariation, InVolumetricCloudSettingsB.StratusCoverageVariation, Alpha);
		VolumetricCloudSettings.StratusHeightVariation = FMath::Lerp(InVolumetricCloudSettingsA.StratusHeightVariation, InVolumetricCloudSettingsB.StratusHeightVariation, Alpha);

		VolumetricCloudSettings.StratocumulusCoverage = FMath::Lerp(InVolumetricCloudSettingsA.StratocumulusCoverage, InVolumetricCloudSettingsB.StratocumulusCoverage, Alpha);
		VolumetricCloudSettings.StratocumulusCoverageVariation = FMath::Lerp(InVolumetricCloudSettingsA.StratocumulusCoverageVariation, InVolumetricCloudSettingsB.StratocumulusCoverageVariation, Alpha);
		VolumetricCloudSettings.StratocumulusHeightVariation = FMath::Lerp(InVolumetricCloudSettingsA.StratocumulusHeightVariation, InVolumetricCloudSettingsB.StratocumulusHeightVariation, Alpha);

		VolumetricCloudSettings.CumulusCoverage = FMath::Lerp(InVolumetricCloudSettingsA.CumulusCoverage, InVolumetricCloudSettingsB.CumulusCoverage, Alpha);
		VolumetricCloudSettings.CumulusCoverageVariation = FMath::Lerp(InVolumetricCloudSettingsA.CumulusCoverageVariation, InVolumetricCloudSettingsB.CumulusCoverageVariation, Alpha);
		VolumetricCloudSettings.CumulusHeightVariation = FMath::Lerp(InVolumetricCloudSettingsA.CumulusHeightVariation, InVolumetricCloudSettingsB.CumulusHeightVariation, Alpha);

		VolumetricCloudSettings.CumulonimbusCoverage = FMath::Lerp(InVolumetricCloudSettingsA.CumulonimbusCoverage, InVolumetricCloudSettingsB.CumulonimbusCoverage, Alpha);
		VolumetricCloudSettings.CumulonimbusAnvil = FMath::Lerp(InVolumetricCloudSettingsA.CumulonimbusAnvil, InVolumetricCloudSettingsB.CumulonimbusAnvil, Alpha);
		VolumetricCloudSettings.CumulonimbusHeightVariation = FMath::Lerp(InVolumetricCloudSettingsA.CumulonimbusHeightVariation, InVolumetricCloudSettingsB.CumulonimbusHeightVariation, Alpha);

		VolumetricCloudSettings.DensityBottom = FMath::Lerp(InVolumetricCloudSettingsA.DensityBottom, InVolumetricCloudSettingsB.DensityBottom, Alpha);
		VolumetricCloudSettings.DensityMiddle = FMath::Lerp(InVolumetricCloudSettingsA.DensityMiddle, InVolumetricCloudSettingsB.DensityMiddle, Alpha);
		VolumetricCloudSettings.DensityTop = FMath::Lerp(InVolumetricCloudSettingsA.DensityTop, InVolumetricCloudSettingsB.DensityTop, Alpha);

		VolumetricCloudSettings.Albedo = FMath::Lerp(InVolumetricCloudSettingsA.Albedo, InVolumetricCloudSettingsB.Albedo, Alpha);
		VolumetricCloudSettings.GroundAlbedo = FMath::Lerp(InVolumetricCloudSettingsA.GroundAlbedo, InVolumetricCloudSettingsB.GroundAlbedo, Alpha);
		VolumetricCloudSettings.BeersPowderIntensity = FMath::Lerp(InVolumetricCloudSettingsA.BeersPowderIntensity, InVolumetricCloudSettingsB.BeersPowderIntensity, Alpha);
		VolumetricCloudSettings.BeersPowderDepth = FMath::Lerp(InVolumetricCloudSettingsA.BeersPowderDepth, InVolumetricCloudSettingsB.BeersPowderDepth, Alpha);
		VolumetricCloudSettings.BottomOcclusion = FMath::Lerp(InVolumetricCloudSettingsA.BottomOcclusion, InVolumetricCloudSettingsB.BottomOcclusion, Alpha);
		VolumetricCloudSettings.BottomOcclusionHeight = FMath::Lerp(InVolumetricCloudSettingsA.BottomOcclusionHeight, InVolumetricCloudSettingsB.BottomOcclusionHeight, Alpha);
		VolumetricCloudSettings.NightEmissive = FMath::Lerp(InVolumetricCloudSettingsA.NightEmissive, InVolumetricCloudSettingsB.NightEmissive, Alpha);
		VolumetricCloudSettings.PhaseG = FMath::Lerp(InVolumetricCloudSettingsA.PhaseG, InVolumetricCloudSettingsB.PhaseG, Alpha);
		VolumetricCloudSettings.PhaseG2 = FMath::Lerp(InVolumetricCloudSettingsA.PhaseG2, InVolumetricCloudSettingsB.PhaseG2, Alpha);
		VolumetricCloudSettings.PhaseBlend = FMath::Lerp(InVolumetricCloudSettingsA.PhaseBlend, InVolumetricCloudSettingsB.PhaseBlend, Alpha);
		VolumetricCloudSettings.MultiScatteringContribution = FMath::Lerp(InVolumetricCloudSettingsA.MultiScatteringContribution, InVolumetricCloudSettingsB.MultiScatteringContribution, Alpha);
		VolumetricCloudSettings.MultiScatteringOcclusion = FMath::Lerp(InVolumetricCloudSettingsA.MultiScatteringOcclusion, InVolumetricCloudSettingsB.MultiScatteringOcclusion, Alpha);
		VolumetricCloudSettings.MultiScatteringEccentricity = FMath::Lerp(InVolumetricCloudSettingsA.MultiScatteringEccentricity, InVolumetricCloudSettingsB.MultiScatteringEccentricity, Alpha);

		VolumetricCloudSettings.NoiseShapeIntensityA = FMath::Lerp(InVolumetricCloudSettingsA.NoiseShapeIntensityA, InVolumetricCloudSettingsB.NoiseShapeIntensityA, Alpha);
		VolumetricCloudSettings.NoiseShapeIntensityB = FMath::Lerp(InVolumetricCloudSettingsA.NoiseShapeIntensityB, InVolumetricCloudSettingsB.NoiseShapeIntensityB, Alpha);
		VolumetricCloudSettings.NoiseShapeIntensityC = FMath::Lerp(InVolumetricCloudSettingsA.NoiseShapeIntensityC, InVolumetricCloudSettingsB.NoiseShapeIntensityC, Alpha);
		VolumetricCloudSettings.NoiseShapeIntensityD = FMath::Lerp(InVolumetricCloudSettingsA.NoiseShapeIntensityD, InVolumetricCloudSettingsB.NoiseShapeIntensityD, Alpha);
//		VolumetricCloudSettings.NoiseDetailIntensityA = FMath::Lerp(InVolumetricCloudSettingsA.NoiseDetailIntensityA, InVolumetricCloudSettingsB.NoiseDetailIntensityA, Alpha);
//		VolumetricCloudSettings.NoiseDetailIntensityB = FMath::Lerp(InVolumetricCloudSettingsA.NoiseDetailIntensityB, InVolumetricCloudSettingsB.NoiseDetailIntensityB, Alpha);
//		VolumetricCloudSettings.NoiseDetailIntensityC = FMath::Lerp(InVolumetricCloudSettingsA.NoiseDetailIntensityC, InVolumetricCloudSettingsB.NoiseDetailIntensityC, Alpha);
		VolumetricCloudSettings.TurbulenceIntensity = FMath::Lerp(InVolumetricCloudSettingsA.TurbulenceIntensity, InVolumetricCloudSettingsB.TurbulenceIntensity, Alpha);

		SetVolumetricCloudSettings(VolumetricCloudSettings);
	}
}

void ASkyCreator::LerpBackgroundCloudSettings(FSkyCreatorBackgroundCloudSettings InBackgroundCloudSettingsA, FSkyCreatorBackgroundCloudSettings InBackgroundCloudSettingsB, float Alpha)
{
	if (SkySphere)
	{
		FSkyCreatorBackgroundCloudSettings BackgroundCloudSettings;

		BackgroundCloudSettings.BackgroundCloudsIntensity = FMath::Lerp(InBackgroundCloudSettingsA.BackgroundCloudsIntensity, InBackgroundCloudSettingsB.BackgroundCloudsIntensity, Alpha);
		BackgroundCloudSettings.BackgroundCloudsColorTint = FMath::Lerp(InBackgroundCloudSettingsA.BackgroundCloudsColorTint, InBackgroundCloudSettingsB.BackgroundCloudsColorTint, Alpha);
		BackgroundCloudSettings.BackgroundCloudsLayerA = FMath::Lerp(InBackgroundCloudSettingsA.BackgroundCloudsLayerA, InBackgroundCloudSettingsB.BackgroundCloudsLayerA, Alpha);
		BackgroundCloudSettings.BackgroundCloudsLayerB = FMath::Lerp(InBackgroundCloudSettingsA.BackgroundCloudsLayerB, InBackgroundCloudSettingsB.BackgroundCloudsLayerB, Alpha);
		BackgroundCloudSettings.BackgroundCloudsLayerC = FMath::Lerp(InBackgroundCloudSettingsA.BackgroundCloudsLayerC, InBackgroundCloudSettingsB.BackgroundCloudsLayerC, Alpha);
		BackgroundCloudSettings.BackgroundCloudsLightningPhase = FMath::Lerp(InBackgroundCloudSettingsA.BackgroundCloudsLightningPhase, InBackgroundCloudSettingsB.BackgroundCloudsLightningPhase, Alpha);

		SetBackgroundCloudSettings(BackgroundCloudSettings);
	}
}

void ASkyCreator::LerpSkyLightSettings(FSkyCreatorSkyLightSettings InSkyLightSettingsA, FSkyCreatorSkyLightSettings InSkyLightSettingsB, float Alpha)
{
	if (SkyLight)
	{
		FSkyCreatorSkyLightSettings SkyLightSettings;

		SkyLightSettings.Intensity = FMath::Lerp(InSkyLightSettingsA.Intensity, InSkyLightSettingsB.Intensity, Alpha);
		SkyLightSettings.NightIntensity = FMath::Lerp(InSkyLightSettingsA.NightIntensity, InSkyLightSettingsB.NightIntensity, Alpha);
		SkyLightSettings.LightColor = FMath::Lerp(InSkyLightSettingsA.LightColor, InSkyLightSettingsB.LightColor, Alpha);
		SkyLightSettings.LowerHemisphereColor = FMath::Lerp(InSkyLightSettingsA.LowerHemisphereColor, InSkyLightSettingsB.LowerHemisphereColor, Alpha);
		SkyLightSettings.CloudAmbientOcclusionStrength = FMath::Lerp(InSkyLightSettingsA.CloudAmbientOcclusionStrength, InSkyLightSettingsB.CloudAmbientOcclusionStrength, Alpha);
		//SkyLightSettings.DayIntensity = FMath::Lerp(InSkyLightSettingsA.DayIntensity, InSkyLightSettingsB.DayIntensity, Alpha);
		
		SetSkyLightSettings(SkyLightSettings);
	}
}

void ASkyCreator::LerpSunLightSettings(FSkyCreatorSunLightSettings InSunLightSettingsA, FSkyCreatorSunLightSettings InSunLightSettingsB, float Alpha)
{
	if (SunLight)
	{
		FSkyCreatorSunLightSettings SunLightSettings;

		if (!bSunConstantIntensity) 
		{
			SunLightSettings.Intensity = FMath::Lerp(InSunLightSettingsA.Intensity, InSunLightSettingsB.Intensity, Alpha);
		}
		SunLightSettings.LightColor = FMath::Lerp(InSunLightSettingsA.LightColor, InSunLightSettingsB.LightColor, Alpha);
		SunLightSettings.Temperature = FMath::Lerp(InSunLightSettingsA.Temperature, InSunLightSettingsB.Temperature, Alpha);
		SunLightSettings.VolumetricScatteringIntensity = FMath::Lerp(InSunLightSettingsA.VolumetricScatteringIntensity, InSunLightSettingsB.VolumetricScatteringIntensity, Alpha);
		SunLightSettings.AtmosphereDiskColorScale = FMath::Lerp(InSunLightSettingsA.AtmosphereDiskColorScale, InSunLightSettingsB.AtmosphereDiskColorScale, Alpha);
		SunLightSettings.CloudScatteredLuminanceScale = FMath::Lerp(InSunLightSettingsA.CloudScatteredLuminanceScale, InSunLightSettingsB.CloudScatteredLuminanceScale, Alpha);
		SunLightSettings.CloudShadowStrength = FMath::Lerp(InSunLightSettingsA.CloudShadowStrength, InSunLightSettingsB.CloudShadowStrength, Alpha);
		SunLightSettings.CloudShadowOnAtmosphereStrength = FMath::Lerp(InSunLightSettingsA.CloudShadowOnAtmosphereStrength, InSunLightSettingsB.CloudShadowOnAtmosphereStrength, Alpha);
		SunLightSettings.CloudShadowOnSurfaceStrength = FMath::Lerp(InSunLightSettingsA.CloudShadowOnSurfaceStrength, InSunLightSettingsB.CloudShadowOnSurfaceStrength, Alpha);

		SetSunLightSettings(SunLightSettings);
	}
}

void ASkyCreator::LerpMoonLightSettings(FSkyCreatorMoonLightSettings InMoonLightSettingsA, FSkyCreatorMoonLightSettings InMoonLightSettingsB, float Alpha)
{
	if (MoonLight)
	{
		FSkyCreatorMoonLightSettings MoonLightSettings;

		if (!bMoonConstantIntensity) 
		{
			MoonLightSettings.Intensity = FMath::Lerp(InMoonLightSettingsA.Intensity, InMoonLightSettingsB.Intensity, Alpha);
		}
		MoonLightSettings.LightColor = FMath::Lerp(InMoonLightSettingsA.LightColor, InMoonLightSettingsB.LightColor, Alpha);
		MoonLightSettings.Temperature = FMath::Lerp(InMoonLightSettingsA.Temperature, InMoonLightSettingsB.Temperature, Alpha);
		MoonLightSettings.VolumetricScatteringIntensity = FMath::Lerp(InMoonLightSettingsA.VolumetricScatteringIntensity, InMoonLightSettingsB.VolumetricScatteringIntensity, Alpha);
		MoonLightSettings.AtmosphereDiskColorScale = FMath::Lerp(InMoonLightSettingsA.AtmosphereDiskColorScale, InMoonLightSettingsB.AtmosphereDiskColorScale, Alpha);
		MoonLightSettings.CloudScatteredLuminanceScale = FMath::Lerp(InMoonLightSettingsA.CloudScatteredLuminanceScale, InMoonLightSettingsB.CloudScatteredLuminanceScale, Alpha);
		MoonLightSettings.CloudShadowStrength = FMath::Lerp(InMoonLightSettingsA.CloudShadowStrength, InMoonLightSettingsB.CloudShadowStrength, Alpha);
		MoonLightSettings.CloudShadowOnAtmosphereStrength = FMath::Lerp(InMoonLightSettingsA.CloudShadowOnAtmosphereStrength, InMoonLightSettingsB.CloudShadowOnAtmosphereStrength, Alpha);
		MoonLightSettings.CloudShadowOnSurfaceStrength = FMath::Lerp(InMoonLightSettingsA.CloudShadowOnSurfaceStrength, InMoonLightSettingsB.CloudShadowOnSurfaceStrength, Alpha);

		SetMoonLightSettings(MoonLightSettings);
	}
}

void ASkyCreator::LerpExponentialHeightFogSettings(FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsA, FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsB, float Alpha)
{
	if (ExponentialHeightFog)
	{
		FSkyCreatorExponentialHeightFogSettings ExponentialHeightFogSettings;

		ExponentialHeightFogSettings.FogDensity = FMath::Lerp(InExponentialHeightFogSettingsA.FogDensity, InExponentialHeightFogSettingsB.FogDensity, Alpha);
		ExponentialHeightFogSettings.FogHeightFalloff = FMath::Lerp(InExponentialHeightFogSettingsA.FogHeightFalloff, InExponentialHeightFogSettingsB.FogHeightFalloff, Alpha);
		ExponentialHeightFogSettings.FogInscatteringColor = FMath::Lerp(InExponentialHeightFogSettingsA.FogInscatteringColor, InExponentialHeightFogSettingsB.FogInscatteringColor, Alpha);
		ExponentialHeightFogSettings.FogStartDistance = FMath::Lerp(InExponentialHeightFogSettingsA.FogStartDistance, InExponentialHeightFogSettingsB.FogStartDistance, Alpha);

		ExponentialHeightFogSettings.SecondFogDensity = FMath::Lerp(InExponentialHeightFogSettingsA.SecondFogDensity, InExponentialHeightFogSettingsB.SecondFogDensity, Alpha);
		ExponentialHeightFogSettings.SecondFogHeightFalloff = FMath::Lerp(InExponentialHeightFogSettingsA.SecondFogHeightFalloff, InExponentialHeightFogSettingsB.SecondFogHeightFalloff, Alpha);

		ExponentialHeightFogSettings.DirectionalInscatteringExponent = FMath::Lerp(InExponentialHeightFogSettingsA.DirectionalInscatteringExponent, InExponentialHeightFogSettingsB.DirectionalInscatteringExponent, Alpha);
		ExponentialHeightFogSettings.DirectionalInscatteringColor = FMath::Lerp(InExponentialHeightFogSettingsA.DirectionalInscatteringColor, InExponentialHeightFogSettingsB.DirectionalInscatteringColor, Alpha);
		ExponentialHeightFogSettings.DirectionalInscatteringStartDistance = FMath::Lerp(InExponentialHeightFogSettingsA.DirectionalInscatteringStartDistance, InExponentialHeightFogSettingsB.DirectionalInscatteringStartDistance, Alpha);

		ExponentialHeightFogSettings.VolumetricFogScatteringDistribution = FMath::Lerp(InExponentialHeightFogSettingsA.VolumetricFogScatteringDistribution, InExponentialHeightFogSettingsB.VolumetricFogScatteringDistribution, Alpha);
		ExponentialHeightFogSettings.VolumetricFogAlbedo = UKismetMathLibrary::Conv_LinearColorToColor(FMath::Lerp(InExponentialHeightFogSettingsA.VolumetricFogAlbedo, InExponentialHeightFogSettingsB.VolumetricFogAlbedo, Alpha));
		ExponentialHeightFogSettings.VolumetricFogEmissive = FMath::Lerp(InExponentialHeightFogSettingsA.VolumetricFogEmissive, InExponentialHeightFogSettingsB.VolumetricFogEmissive, Alpha);
		ExponentialHeightFogSettings.VolumetricFogExtinctionScale = FMath::Lerp(InExponentialHeightFogSettingsA.VolumetricFogExtinctionScale, InExponentialHeightFogSettingsB.VolumetricFogExtinctionScale, Alpha);
		ExponentialHeightFogSettings.VolumetricFogStartDistance = FMath::Lerp(InExponentialHeightFogSettingsA.VolumetricFogStartDistance, InExponentialHeightFogSettingsB.VolumetricFogStartDistance, Alpha);
		ExponentialHeightFogSettings.VolumetricFogNearFadeInDistance = FMath::Lerp(InExponentialHeightFogSettingsA.VolumetricFogNearFadeInDistance, InExponentialHeightFogSettingsB.VolumetricFogNearFadeInDistance, Alpha);

		SetExponentialHeightFogSettings(ExponentialHeightFogSettings);
	}
}

void ASkyCreator::LerpStarMapSettings(FSkyCreatorStarMapSettings InStarMapSettingsA, FSkyCreatorStarMapSettings InStarMapSettingsB, float Alpha)
{
	if (SkySphere)
	{
		FSkyCreatorStarMapSettings StarMapSettings;

		StarMapSettings.StarMapIntensity = FMath::Lerp(InStarMapSettingsA.StarMapIntensity, InStarMapSettingsB.StarMapIntensity, Alpha);
		StarMapSettings.StarMapColorTint = FMath::Lerp(InStarMapSettingsA.StarMapColorTint, InStarMapSettingsB.StarMapColorTint, Alpha);
		StarMapSettings.StarMapTwinkleIntensity = FMath::Lerp(InStarMapSettingsA.StarMapTwinkleIntensity, InStarMapSettingsB.StarMapTwinkleIntensity, Alpha);
		StarMapSettings.StarMapTwinkleSaturation = FMath::Lerp(InStarMapSettingsA.StarMapTwinkleSaturation, InStarMapSettingsB.StarMapTwinkleSaturation, Alpha);
		StarMapSettings.StarMapTwinkleSpeed = FMath::Lerp(InStarMapSettingsA.StarMapTwinkleSpeed, InStarMapSettingsB.StarMapTwinkleSpeed, Alpha);
		StarMapSettings.StarMapHorizonThreshold = FMath::Lerp(InStarMapSettingsA.StarMapHorizonThreshold, InStarMapSettingsB.StarMapHorizonThreshold, Alpha);
		StarMapSettings.StarMapAtmosphereThreshold = FMath::Lerp(InStarMapSettingsA.StarMapAtmosphereThreshold, InStarMapSettingsB.StarMapAtmosphereThreshold, Alpha);
		StarMapSettings.NightZenithColor = FMath::Lerp(InStarMapSettingsA.NightZenithColor, InStarMapSettingsB.NightZenithColor, Alpha);
		StarMapSettings.NightHorizonColor = FMath::Lerp(InStarMapSettingsA.NightHorizonColor, InStarMapSettingsB.NightHorizonColor, Alpha);

		SetStarMapSettings(StarMapSettings);
	}
}

void ASkyCreator::LerpWeatherFXSettings(FSkyCreatorWeatherFXSettings InWeatherFXSettingsA, FSkyCreatorWeatherFXSettings InWeatherFXSettingsB, float Alpha)
{
	if (WeatherFX)
	{
		FSkyCreatorWeatherFXSettings WeatherFXSettings;

		WeatherFXSettings.RainAmount = FMath::Lerp(InWeatherFXSettingsA.RainAmount, InWeatherFXSettingsB.RainAmount, Alpha);
		WeatherFXSettings.RainColor = FMath::Lerp(InWeatherFXSettingsA.RainColor, InWeatherFXSettingsB.RainColor, Alpha);
		WeatherFXSettings.RainGravity = FMath::Lerp(InWeatherFXSettingsA.RainGravity, InWeatherFXSettingsB.RainGravity, Alpha);
		WeatherFXSettings.RainLifetimeMin = FMath::Lerp(InWeatherFXSettingsA.RainLifetimeMin, InWeatherFXSettingsB.RainLifetimeMin, Alpha);
		WeatherFXSettings.RainLifetimeMax = FMath::Lerp(InWeatherFXSettingsA.RainLifetimeMax, InWeatherFXSettingsB.RainLifetimeMax, Alpha);
		WeatherFXSettings.RainSizeMin = FMath::Lerp(InWeatherFXSettingsA.RainSizeMin, InWeatherFXSettingsB.RainSizeMin, Alpha);
		WeatherFXSettings.RainSizeMax = FMath::Lerp(InWeatherFXSettingsA.RainSizeMax, InWeatherFXSettingsB.RainSizeMax, Alpha);
		WeatherFXSettings.RainMaskHardness = FMath::Lerp(InWeatherFXSettingsA.RainMaskHardness, InWeatherFXSettingsB.RainMaskHardness, Alpha);

		WeatherFXSettings.RainSplashColor = FMath::Lerp(InWeatherFXSettingsA.RainSplashColor, InWeatherFXSettingsB.RainSplashColor, Alpha);
		WeatherFXSettings.RainSplashLifetimeMin = FMath::Lerp(InWeatherFXSettingsA.RainSplashLifetimeMin, InWeatherFXSettingsB.RainSplashLifetimeMin, Alpha);
		WeatherFXSettings.RainSplashLifetimeMax = FMath::Lerp(InWeatherFXSettingsA.RainSplashLifetimeMax, InWeatherFXSettingsB.RainSplashLifetimeMax, Alpha);
		WeatherFXSettings.RainSplashSizeMin = FMath::Lerp(InWeatherFXSettingsA.RainSplashSizeMin, InWeatherFXSettingsB.RainSplashSizeMin, Alpha);
		WeatherFXSettings.RainSplashSizeMax = FMath::Lerp(InWeatherFXSettingsA.RainSplashSizeMax, InWeatherFXSettingsB.RainSplashSizeMax, Alpha);
		WeatherFXSettings.RainSplashVolumetricScale = FMath::Lerp(InWeatherFXSettingsA.RainSplashVolumetricScale, InWeatherFXSettingsB.RainSplashVolumetricScale, Alpha);
		WeatherFXSettings.RainSplashVolumetricDensity = FMath::Lerp(InWeatherFXSettingsA.RainSplashVolumetricDensity, InWeatherFXSettingsB.RainSplashVolumetricDensity, Alpha);

		WeatherFXSettings.SnowAmount = FMath::Lerp(InWeatherFXSettingsA.SnowAmount, InWeatherFXSettingsB.SnowAmount, Alpha);
		WeatherFXSettings.SnowColor = FMath::Lerp(InWeatherFXSettingsA.SnowColor, InWeatherFXSettingsB.SnowColor, Alpha);
		WeatherFXSettings.SnowType = FMath::Lerp(InWeatherFXSettingsA.SnowType, InWeatherFXSettingsB.SnowType, Alpha);
		WeatherFXSettings.SnowGravity = FMath::Lerp(InWeatherFXSettingsA.SnowGravity, InWeatherFXSettingsB.SnowGravity, Alpha);
		WeatherFXSettings.SnowTurbulence = FMath::Lerp(InWeatherFXSettingsA.SnowTurbulence, InWeatherFXSettingsB.SnowTurbulence, Alpha);
		WeatherFXSettings.SnowLifetimeMin = FMath::Lerp(InWeatherFXSettingsA.SnowLifetimeMin, InWeatherFXSettingsB.SnowLifetimeMin, Alpha);
		WeatherFXSettings.SnowLifetimeMax = FMath::Lerp(InWeatherFXSettingsA.SnowLifetimeMax, InWeatherFXSettingsB.SnowLifetimeMax, Alpha);
		WeatherFXSettings.SnowSizeMin = FMath::Lerp(InWeatherFXSettingsA.SnowSizeMin, InWeatherFXSettingsB.SnowSizeMin, Alpha);
		WeatherFXSettings.SnowSizeMax = FMath::Lerp(InWeatherFXSettingsA.SnowSizeMax, InWeatherFXSettingsB.SnowSizeMax, Alpha);
		WeatherFXSettings.SnowMaskHardness = FMath::Lerp(InWeatherFXSettingsA.SnowMaskHardness, InWeatherFXSettingsB.SnowMaskHardness, Alpha);

		// need to redo this part later on
		if (InWeatherFXSettingsA.EnableLightnings == true && InWeatherFXSettingsB.EnableLightnings == false && Alpha <= 0.25f)
		{
			WeatherFXSettings.EnableLightnings = true;
		}
		else if (InWeatherFXSettingsA.EnableLightnings == false && InWeatherFXSettingsB.EnableLightnings == true && Alpha >= 0.75f)
		{
			WeatherFXSettings.EnableLightnings = true;
		}
		else if (InWeatherFXSettingsA.EnableLightnings == false && InWeatherFXSettingsB.EnableLightnings == false)
		{
			WeatherFXSettings.EnableLightnings = false;
		}
		else if (InWeatherFXSettingsA.EnableLightnings == true && InWeatherFXSettingsB.EnableLightnings == true)
		{
			WeatherFXSettings.EnableLightnings = true;
		}
		WeatherFXSettings.LightningSpawnIntervalMin = FMath::Lerp(InWeatherFXSettingsA.LightningSpawnIntervalMin, InWeatherFXSettingsB.LightningSpawnIntervalMin, Alpha);
		WeatherFXSettings.LightningSpawnIntervalMax = FMath::Lerp(InWeatherFXSettingsA.LightningSpawnIntervalMax, InWeatherFXSettingsB.LightningSpawnIntervalMax, Alpha);
		WeatherFXSettings.LightningColorMin = FMath::Lerp(InWeatherFXSettingsA.LightningColorMin, InWeatherFXSettingsB.LightningColorMin, Alpha);
		WeatherFXSettings.LightningColorMax = FMath::Lerp(InWeatherFXSettingsA.LightningColorMax, InWeatherFXSettingsB.LightningColorMax, Alpha);
		WeatherFXSettings.LightningLifetime = FMath::Lerp(InWeatherFXSettingsA.LightningLifetime, InWeatherFXSettingsB.LightningLifetime, Alpha);

		WeatherFXSettings.LightningBoltSpawnChance = FMath::Lerp(InWeatherFXSettingsA.LightningBoltSpawnChance, InWeatherFXSettingsB.LightningBoltSpawnChance, Alpha);
		WeatherFXSettings.LightningBoltWidthMin = FMath::Lerp(InWeatherFXSettingsA.LightningBoltWidthMin, InWeatherFXSettingsB.LightningBoltWidthMin, Alpha);
		WeatherFXSettings.LightningBoltWidthMax = FMath::Lerp(InWeatherFXSettingsA.LightningBoltWidthMax, InWeatherFXSettingsB.LightningBoltWidthMax, Alpha);
		WeatherFXSettings.LightningBoltLengthMin = FMath::Lerp(InWeatherFXSettingsA.LightningBoltLengthMin, InWeatherFXSettingsB.LightningBoltLengthMin, Alpha);
		WeatherFXSettings.LightningBoltLengthMax = FMath::Lerp(InWeatherFXSettingsA.LightningBoltLengthMax, InWeatherFXSettingsB.LightningBoltLengthMax, Alpha);
		WeatherFXSettings.LightningBoltCurveFrequency = FMath::Lerp(InWeatherFXSettingsA.LightningBoltCurveFrequency, InWeatherFXSettingsB.LightningBoltCurveFrequency, Alpha);
		WeatherFXSettings.LightningBoltCurveStrengthMin = FMath::Lerp(InWeatherFXSettingsA.LightningBoltCurveStrengthMin, InWeatherFXSettingsB.LightningBoltCurveStrengthMin, Alpha);
		WeatherFXSettings.LightningBoltCurveStrengthMax = FMath::Lerp(InWeatherFXSettingsA.LightningBoltCurveStrengthMax, InWeatherFXSettingsB.LightningBoltCurveStrengthMax, Alpha);
		WeatherFXSettings.LightningBoltJitterStrength = FMath::Lerp(InWeatherFXSettingsA.LightningBoltJitterStrength, InWeatherFXSettingsB.LightningBoltJitterStrength, Alpha);

		WeatherFXSettings.LightningBranchSpawnChance = FMath::Lerp(InWeatherFXSettingsA.LightningBranchSpawnChance, InWeatherFXSettingsB.LightningBranchSpawnChance, Alpha);
		WeatherFXSettings.LightningBranchScaleMin = FMath::Lerp(InWeatherFXSettingsA.LightningBranchScaleMin, InWeatherFXSettingsB.LightningBranchScaleMin, Alpha);
		WeatherFXSettings.LightningBranchScaleMax = FMath::Lerp(InWeatherFXSettingsA.LightningBranchScaleMax, InWeatherFXSettingsB.LightningBranchScaleMax, Alpha);

		WeatherFXSettings.RainbowAmount = FMath::Lerp(InWeatherFXSettingsA.RainbowAmount, InWeatherFXSettingsB.RainbowAmount, Alpha);
		WeatherFXSettings.RainbowColor = FMath::Lerp(InWeatherFXSettingsA.RainbowColor, InWeatherFXSettingsB.RainbowColor, Alpha);
		WeatherFXSettings.RainbowRadius = FMath::Lerp(InWeatherFXSettingsA.RainbowRadius, InWeatherFXSettingsB.RainbowRadius, Alpha);
		WeatherFXSettings.RainbowThickness = FMath::Lerp(InWeatherFXSettingsA.RainbowThickness, InWeatherFXSettingsB.RainbowThickness, Alpha);
		WeatherFXSettings.SecondaryRainbowColor = FMath::Lerp(InWeatherFXSettingsA.SecondaryRainbowColor, InWeatherFXSettingsB.SecondaryRainbowColor, Alpha);
		WeatherFXSettings.SecondaryRainbowRadius = FMath::Lerp(InWeatherFXSettingsA.SecondaryRainbowRadius, InWeatherFXSettingsB.SecondaryRainbowRadius, Alpha);
		WeatherFXSettings.SecondaryRainbowThickness = FMath::Lerp(InWeatherFXSettingsA.SecondaryRainbowThickness, InWeatherFXSettingsB.SecondaryRainbowThickness, Alpha);

		WeatherFXSettings.VolumetricMistAmount = FMath::Lerp(InWeatherFXSettingsA.VolumetricMistAmount, InWeatherFXSettingsB.VolumetricMistAmount, Alpha);
		WeatherFXSettings.VolumetricMistDensity = FMath::Lerp(InWeatherFXSettingsA.VolumetricMistDensity, InWeatherFXSettingsB.VolumetricMistDensity, Alpha);
		WeatherFXSettings.VolumetricMistColor = FMath::Lerp(InWeatherFXSettingsA.VolumetricMistColor, InWeatherFXSettingsB.VolumetricMistColor, Alpha);
		WeatherFXSettings.VolumetricMistFogDensityContribution = FMath::Lerp(InWeatherFXSettingsA.VolumetricMistFogDensityContribution, InWeatherFXSettingsB.VolumetricMistFogDensityContribution, Alpha);

		WeatherFXSettings.VolumetricWindAmount = FMath::Lerp(InWeatherFXSettingsA.VolumetricWindAmount, InWeatherFXSettingsB.VolumetricWindAmount, Alpha);
		WeatherFXSettings.VolumetricWindDensity = FMath::Lerp(InWeatherFXSettingsA.VolumetricWindDensity, InWeatherFXSettingsB.VolumetricWindDensity, Alpha);
		WeatherFXSettings.VolumetricWindColor = FMath::Lerp(InWeatherFXSettingsA.VolumetricWindColor, InWeatherFXSettingsB.VolumetricWindColor, Alpha);
		WeatherFXSettings.VolumetricWindFogDensityContribution = FMath::Lerp(InWeatherFXSettingsA.VolumetricWindFogDensityContribution, InWeatherFXSettingsB.VolumetricWindFogDensityContribution, Alpha);

		SetWeatherFXSettings(WeatherFXSettings);
	}
}

void ASkyCreator::LerpMaterialFXSettings(FSkyCreatorMaterialFXSettings InMaterialFXSettingsA, FSkyCreatorMaterialFXSettings InMaterialFXSettingsB, float Alpha)
{
	if (CommonMPC)
	{
		FSkyCreatorMaterialFXSettings MaterialFXSettings;

		MaterialFXSettings.WetnessAmount = FMath::Lerp(InMaterialFXSettingsA.WetnessAmount, InMaterialFXSettingsB.WetnessAmount, Alpha);
		MaterialFXSettings.WetnessColor = FMath::Lerp(InMaterialFXSettingsA.WetnessColor, InMaterialFXSettingsB.WetnessColor, Alpha);

		MaterialFXSettings.PuddlesAmount = FMath::Lerp(InMaterialFXSettingsA.PuddlesAmount, InMaterialFXSettingsB.PuddlesAmount, Alpha);
		MaterialFXSettings.PuddlesColor = FMath::Lerp(InMaterialFXSettingsA.PuddlesColor, InMaterialFXSettingsB.PuddlesColor, Alpha);

		MaterialFXSettings.RainRipplesAmount = FMath::Lerp(InMaterialFXSettingsA.RainRipplesAmount, InMaterialFXSettingsB.RainRipplesAmount, Alpha);
		MaterialFXSettings.RainRipplesIntensity = FMath::Lerp(InMaterialFXSettingsA.RainRipplesIntensity, InMaterialFXSettingsB.RainRipplesIntensity, Alpha);
		MaterialFXSettings.RainRipplesSizeMin = FMath::Lerp(InMaterialFXSettingsA.RainRipplesSizeMin, InMaterialFXSettingsB.RainRipplesSizeMin, Alpha);
		MaterialFXSettings.RainRipplesSizeMax = FMath::Lerp(InMaterialFXSettingsA.RainRipplesSizeMax, InMaterialFXSettingsB.RainRipplesSizeMax, Alpha);
		MaterialFXSettings.RainRipplesDamping = FMath::Lerp(InMaterialFXSettingsA.RainRipplesDamping, InMaterialFXSettingsB.RainRipplesDamping, Alpha);
//		WeatherMaterialFXSettings.RainRipplesForceMinRadius = FMath::Lerp(InWeatherMaterialFXSettingsA.RainRipplesForceMinRadius, InWeatherMaterialFXSettingsB.RainRipplesForceMinRadius, Alpha);
//		WeatherMaterialFXSettings.RainRipplesForceMaxRadius = FMath::Lerp(InWeatherMaterialFXSettingsA.RainRipplesForceMaxRadius, InWeatherMaterialFXSettingsB.RainRipplesForceMaxRadius, Alpha);
//		WeatherMaterialFXSettings.RainRipplesRingsNumber = FMath::Lerp(InWeatherMaterialFXSettingsA.RainRipplesRingsNumber, InWeatherMaterialFXSettingsB.RainRipplesRingsNumber, Alpha);
//		WeatherMaterialFXSettings.RainRipplesRingsDelay = FMath::Lerp(InWeatherMaterialFXSettingsA.RainRipplesRingsDelay, InWeatherMaterialFXSettingsB.RainRipplesRingsDelay, Alpha);
		MaterialFXSettings.WindRipplesIntensity = FMath::Lerp(InMaterialFXSettingsA.WindRipplesIntensity, InMaterialFXSettingsB.WindRipplesIntensity, Alpha);
		MaterialFXSettings.WindRipplesSpeed = FMath::Lerp(InMaterialFXSettingsA.WindRipplesSpeed, InMaterialFXSettingsB.WindRipplesSpeed, Alpha);

		MaterialFXSettings.RainDropsAmount = FMath::Lerp(InMaterialFXSettingsA.RainDropsAmount, InMaterialFXSettingsB.RainDropsAmount, Alpha);
		MaterialFXSettings.RainDropsIntensity = FMath::Lerp(InMaterialFXSettingsA.RainDropsIntensity, InMaterialFXSettingsB.RainDropsIntensity, Alpha);
		MaterialFXSettings.RainDropsScaleMin = FMath::Lerp(InMaterialFXSettingsA.RainDropsScaleMin, InMaterialFXSettingsB.RainDropsScaleMin, Alpha);
		MaterialFXSettings.RainDropsScaleMax = FMath::Lerp(InMaterialFXSettingsA.RainDropsScaleMax, InMaterialFXSettingsB.RainDropsScaleMax, Alpha);
		MaterialFXSettings.RainDropsFadingRate = FMath::Lerp(InMaterialFXSettingsA.RainDropsFadingRate, InMaterialFXSettingsB.RainDropsFadingRate, Alpha);

		MaterialFXSettings.RainStreaksAmount = FMath::Lerp(InMaterialFXSettingsA.RainStreaksAmount, InMaterialFXSettingsB.RainStreaksAmount, Alpha);
		MaterialFXSettings.RainStreaksIntensity = FMath::Lerp(InMaterialFXSettingsA.RainStreaksIntensity, InMaterialFXSettingsB.RainStreaksIntensity, Alpha);
		MaterialFXSettings.RainStreaksSizeMin = FMath::Lerp(InMaterialFXSettingsA.RainStreaksSizeMin, InMaterialFXSettingsB.RainStreaksSizeMin, Alpha);
		MaterialFXSettings.RainStreaksSizeMax = FMath::Lerp(InMaterialFXSettingsA.RainStreaksSizeMax, InMaterialFXSettingsB.RainStreaksSizeMax, Alpha);
		MaterialFXSettings.RainStreaksFadingRate = FMath::Lerp(InMaterialFXSettingsA.RainStreaksFadingRate, InMaterialFXSettingsB.RainStreaksFadingRate, Alpha);
		MaterialFXSettings.RainStreaksTrailFadingRate = FMath::Lerp(InMaterialFXSettingsA.RainStreaksTrailFadingRate, InMaterialFXSettingsB.RainStreaksTrailFadingRate, Alpha);
		
		MaterialFXSettings.RainSplatterAmount = FMath::Lerp(InMaterialFXSettingsA.RainSplatterAmount, InMaterialFXSettingsB.RainSplatterAmount, Alpha);
		//WeatherMaterialFXSettings.RainDropsIntensity = FMath::Lerp(InWeatherMaterialFXSettingsA.RainDropsIntensity, InWeatherMaterialFXSettingsB.RainDropsIntensity, Alpha);
		MaterialFXSettings.RainSplatterScaleMin = FMath::Lerp(InMaterialFXSettingsA.RainSplatterScaleMin, InMaterialFXSettingsB.RainSplatterScaleMin, Alpha);
		MaterialFXSettings.RainSplatterScaleMax = FMath::Lerp(InMaterialFXSettingsA.RainSplatterScaleMax, InMaterialFXSettingsB.RainSplatterScaleMax, Alpha);
		MaterialFXSettings.RainSplatterFadingRate = FMath::Lerp(InMaterialFXSettingsA.RainSplatterFadingRate, InMaterialFXSettingsB.RainSplatterFadingRate, Alpha);

		MaterialFXSettings.SnowAmount = FMath::Lerp(InMaterialFXSettingsA.SnowAmount, InMaterialFXSettingsB.SnowAmount, Alpha);
		MaterialFXSettings.SnowColor = FMath::Lerp(InMaterialFXSettingsA.SnowColor, InMaterialFXSettingsB.SnowColor, Alpha);
		MaterialFXSettings.SnowIntensity = FMath::Lerp(InMaterialFXSettingsA.SnowIntensity, InMaterialFXSettingsB.SnowIntensity, Alpha);
		MaterialFXSettings.SnowSparklesThreshold = FMath::Lerp(InMaterialFXSettingsA.SnowSparklesThreshold, InMaterialFXSettingsB.SnowSparklesThreshold, Alpha);

		SetMaterialFXSettings(MaterialFXSettings);
	}
}

void ASkyCreator::LerpWindSettings(FSkyCreatorWindSettings InWindSettingsA, FSkyCreatorWindSettings InWindSettingsB, float Alpha)
{
	FSkyCreatorWindSettings WindSettings;

	WindSettings.CloudWindDirection = FMath::Lerp(InWindSettingsA.CloudWindDirection, InWindSettingsB.CloudWindDirection, Alpha);
	WindSettings.CloudWindSpeed = FMath::Lerp(InWindSettingsA.CloudWindSpeed, InWindSettingsB.CloudWindSpeed, Alpha);
	WindSettings.CloudWindSkewAmount = FMath::Lerp(InWindSettingsA.CloudWindSkewAmount, InWindSettingsB.CloudWindSkewAmount, Alpha);
	//WindSettings.HighCloudWindDirection = FMath::Lerp(InWindSettingsA.HighCloudWindDirection, InWindSettingsB.HighCloudWindDirection, Alpha);
	//WindSettings.HighCloudWindSpeed = FMath::Lerp(InWindSettingsA.HighCloudWindSpeed, InWindSettingsB.HighCloudWindSpeed, Alpha);
	WindSettings.CloudNoiseShapeWindDirection = FMath::Lerp(InWindSettingsA.CloudNoiseShapeWindDirection, InWindSettingsB.CloudNoiseShapeWindDirection, Alpha);
	WindSettings.CloudNoiseShapeWindSpeedHorizontal = FMath::Lerp(InWindSettingsA.CloudNoiseShapeWindSpeedHorizontal, InWindSettingsB.CloudNoiseShapeWindSpeedHorizontal, Alpha);
	WindSettings.CloudNoiseDetailWindSpeedVertical = FMath::Lerp(InWindSettingsA.CloudNoiseDetailWindSpeedVertical, InWindSettingsB.CloudNoiseDetailWindSpeedVertical, Alpha);

	WindSettings.WindDirection = FMath::Lerp(InWindSettingsA.WindDirection, InWindSettingsB.WindDirection, Alpha);
	WindSettings.WindSpeed = FMath::Lerp(InWindSettingsA.WindSpeed, InWindSettingsB.WindSpeed, Alpha);
	
	SetWindSettings(WindSettings);
}

void ASkyCreator::LerpWindIndependentSettings(FSkyCreatorWindSettings InWindSettingsA, FSkyCreatorWindSettings InWindSettingsB, float Alpha)
{
	/*
	if (VolumetricCloud && VolumetricCloudMID && WeatherFX)
	{
		FSkyCreatorWindSettings WindSettings;

		WindSettings.CloudWindDirection = FMath::Lerp(InWindSettingsA.CloudWindDirection, InWindSettingsB.CloudWindDirection, Alpha);
		WindSettings.CloudWindSpeed = FMath::Lerp(InWindSettingsA.CloudWindSpeed, InWindSettingsB.CloudWindSpeed, Alpha);
		//WindSettings.HighCloudWindDirection = FMath::Lerp(InWindSettingsA.HighCloudWindDirection, InWindSettingsB.HighCloudWindDirection, Alpha);
		//WindSettings.HighCloudWindSpeed = FMath::Lerp(InWindSettingsA.HighCloudWindSpeed, InWindSettingsB.HighCloudWindSpeed, Alpha);
		WindSettings.CloudNoiseShapeWindDirection = FMath::Lerp(InWindSettingsA.CloudNoiseShapeWindDirection, InWindSettingsB.CloudNoiseShapeWindDirection, Alpha);
		WindSettings.CloudNoiseShapeWindSpeedHorizontal = FMath::Lerp(InWindSettingsA.CloudNoiseShapeWindSpeedHorizontal, InWindSettingsB.CloudNoiseShapeWindSpeedHorizontal, Alpha);
		WindSettings.CloudNoiseDetailWindSpeedVertical = FMath::Lerp(InWindSettingsA.CloudNoiseDetailWindSpeedVertical, InWindSettingsB.CloudNoiseDetailWindSpeedVertical, Alpha);

		WindSettings.WindDirection = FMath::Lerp(InWindSettingsA.WindDirection, InWindSettingsB.WindDirection, Alpha);
		WindSettings.WindSpeed = FMath::Lerp(InWindSettingsA.WindSpeed, InWindSettingsB.WindSpeed, Alpha);

//		if (bIndependentWindControl)
//		{
			SetWindIndependentSettings(WindSettings);
//		}
	}
	*/
	LerpWindSettings(InWindSettingsA, InWindSettingsB, Alpha);
}

void ASkyCreator::LerpPostProcessSettings(FSkyCreatorPostProcessSettings InPostProcessSettingsA, FSkyCreatorPostProcessSettings InPostProcessSettingsB, float Alpha)
{
	if (PostProcess)
	{
		FSkyCreatorPostProcessSettings PostProcessSettings;

		PostProcessSettings.BloomIntensity = FMath::Lerp(InPostProcessSettingsA.BloomIntensity, InPostProcessSettingsB.BloomIntensity, Alpha);
		PostProcessSettings.BloomThreshold = FMath::Lerp(InPostProcessSettingsA.BloomThreshold, InPostProcessSettingsB.BloomThreshold, Alpha);
		PostProcessSettings.ExposureCompensation = FMath::Lerp(InPostProcessSettingsA.ExposureCompensation, InPostProcessSettingsB.ExposureCompensation, Alpha);

		SetPostProcessSettings(PostProcessSettings);
	}
}

void ASkyCreator::LerpWeatherSettings(FSkyCreatorWeatherSettings InWeatherSettingsA, FSkyCreatorWeatherSettings InWeatherSettingsB, float Alpha)
{
	LerpSkyAtmosphereSettings(InWeatherSettingsA.SkyAtmosphereSettings, InWeatherSettingsB.SkyAtmosphereSettings, Alpha);
	LerpVolumetricCloudSettings(InWeatherSettingsA.VolumetricCloudSettings, InWeatherSettingsB.VolumetricCloudSettings, Alpha);
	LerpBackgroundCloudSettings(InWeatherSettingsA.BackgroundCloudSettings, InWeatherSettingsB.BackgroundCloudSettings, Alpha);
	LerpSkyLightSettings(InWeatherSettingsA.SkyLightSettings, InWeatherSettingsB.SkyLightSettings, Alpha);
	LerpSunLightSettings(InWeatherSettingsA.SunLightSettings, InWeatherSettingsB.SunLightSettings, Alpha);
	LerpMoonLightSettings(InWeatherSettingsA.MoonLightSettings, InWeatherSettingsB.MoonLightSettings, Alpha);
	LerpExponentialHeightFogSettings(InWeatherSettingsA.ExponentialHeightFogSettings, InWeatherSettingsB.ExponentialHeightFogSettings, Alpha);
	LerpStarMapSettings(InWeatherSettingsA.StarMapSettings, InWeatherSettingsB.StarMapSettings, Alpha);
	LerpWeatherFXSettings(InWeatherSettingsA.WeatherFXSettings, InWeatherSettingsB.WeatherFXSettings, Alpha);
	LerpMaterialFXSettings(InWeatherSettingsA.MaterialFXSettings, InWeatherSettingsB.MaterialFXSettings, Alpha);
	LerpWindSettings(InWeatherSettingsA.WindSettings, InWeatherSettingsB.WindSettings, Alpha);
	LerpPostProcessSettings(InWeatherSettingsA.PostProcessSettings, InWeatherSettingsB.PostProcessSettings, Alpha);
}

void ASkyCreator::LerpWetnessAmount(float WetnessAmountA, float WetnessAmountB, float Alpha)
{
	if (CommonMPC)
	{
		WeatherSettings.MaterialFXSettings.WetnessAmount = FMath::Lerp(WetnessAmountA, WetnessAmountB, Alpha);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Wetness Amount", WeatherSettings.MaterialFXSettings.WetnessAmount);
	}
}

void ASkyCreator::LerpPuddlesAmount(float PuddlesAmountA, float PuddlesAmountB, float Alpha)
{
	if (CommonMPC)
	{
		WeatherSettings.MaterialFXSettings.PuddlesAmount = FMath::Lerp(PuddlesAmountA, PuddlesAmountB, Alpha);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Puddles Amount", WeatherSettings.MaterialFXSettings.PuddlesAmount);
	}
}

void ASkyCreator::LerpSnowAmount(float SnowAmountA, float SnowAmountB, float Alpha)
{
	if (CommonMPC)
	{
		WeatherSettings.MaterialFXSettings.SnowAmount = FMath::Lerp(SnowAmountA, SnowAmountB, Alpha);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Snow Amount", WeatherSettings.MaterialFXSettings.SnowAmount);
	}
}

FRotator ASkyCreator::GetSunPosition(float Time)
{
	FRotator Result;

	SunDawnTime = SunriseTime - SunDawnOffsetTime;
	SunDuskTime = SunsetTime + SunDuskOffsetTime;

	if (SunPositionType == SunPositionType_Simple)
	{
		const float BeforeDawn = FMath::Lerp(90.0f, SunMinAngleAtDawnDusk, FMath::GetMappedRangeValueClamped(FVector2D(0, SunDawnTime), FVector2D(0, 1), Time));
		const float BeforeSunset = FMath::Lerp(SunMinAngleAtDawnDusk, 0.0f, FMath::GetMappedRangeValueClamped(FVector2D(SunDawnTime, SunriseTime), FVector2D(0, 1), Time));
		const float Midday = FMath::Lerp(0.0f, -180.0f, FMath::GetMappedRangeValueClamped(FVector2D(SunriseTime, SunsetTime), FVector2D(0, 1), Time));
		const float AfterSunset = FMath::Lerp(-180.0f, -180.0f - SunMinAngleAtDawnDusk, FMath::GetMappedRangeValueClamped(FVector2D(SunsetTime, SunDuskTime), FVector2D(0, 1), Time));
		const float AfterDusk = FMath::Lerp(-180.0f - SunMinAngleAtDawnDusk, -270.0f, FMath::GetMappedRangeValueClamped(FVector2D(SunDuskTime, 24), FVector2D(0, 1), Time));

		const bool bBeforeDawn = UKismetMathLibrary::InRange_FloatFloat(Time, 0, SunDawnTime, true, true);
		const bool bBeforeSunrise = UKismetMathLibrary::InRange_FloatFloat(Time, 0, SunriseTime, true, true);
		const bool bMidday = UKismetMathLibrary::InRange_FloatFloat(Time, SunriseTime, SunsetTime, true, true);
		const bool bAfterDusk = UKismetMathLibrary::InRange_FloatFloat(Time, SunDuskTime, 24, true, true);

		const float SunAngle = UKismetMathLibrary::SelectFloat(Midday, UKismetMathLibrary::SelectFloat(UKismetMathLibrary::SelectFloat(BeforeDawn, BeforeSunset, bBeforeDawn), UKismetMathLibrary::SelectFloat(AfterDusk, AfterSunset, bAfterDusk), bBeforeSunrise), bMidday);

		Result = UKismetMathLibrary::ComposeRotators(FRotator(SunAngle, 0, 0), FRotator(0, SunAzimuth, SunElevation - 90.0f));
	}
	else
	{
		SunPositionData = USkyCreatorFunctionLibrary::GetRealSunPosition(Latitude, Longitude, TimeZone, bDaylightSavingTime, Date);
		Result = FRotator(SunPositionData.Elevation + 180.0, SunPositionData.Azimuth, 0);
	}

//	else if (SunOrbitType == OrbitType_FixedElevation) {
//		Result = UKismetMathLibrary::ComposeRotators(FRotator(SunElevation * -1.0f, SunAzimuth, 0), FRotator(0, FMath::Lerp(360.0f, 0.0f, FMath::GetMappedRangeValueClamped(FVector2D(0, 24.0f), FVector2D(0, 1.0f), Time)), 0));
//	}

	return Result;
}

FRotator ASkyCreator::GetMoonPosition(float Time)
{
	FRotator Result;

	if (MoonPositionType == MoonPositionType_Simple)
	{
		const float Midnight = FMath::Lerp(-180.0f, -360.0f, FMath::GetMappedRangeValueClamped(FVector2D(SunriseTime, SunsetTime), FVector2D(0, 1), Time));
		const float AfterMoonrise = FMath::Lerp(0.0f, -90.0f, FMath::GetMappedRangeValueClamped(FVector2D(MoonriseTime, 24), FVector2D(0, 1), Time));
		const float BeforeMoonset = FMath::Lerp(-90.0f, -180.0f, FMath::GetMappedRangeValueClamped(FVector2D(0, MoonsetTime), FVector2D(0, 1), Time));

		const bool bMidnight = UKismetMathLibrary::InRange_FloatFloat(Time, MoonsetTime, MoonriseTime, true, true);
		const bool bAfterMoonrise = UKismetMathLibrary::InRange_FloatFloat(Time, MoonriseTime, 24.0f, true, true);

		const float MoonAngle = UKismetMathLibrary::SelectFloat(Midnight, UKismetMathLibrary::SelectFloat(AfterMoonrise, BeforeMoonset, bAfterMoonrise), bMidnight);

		Result = UKismetMathLibrary::ComposeRotators(FRotator(MoonAngle, 0, 0), FRotator(0, MoonAzimuth, MoonElevation - 90.0f));
	}
	else if (MoonPositionType == MoonPositionType_SimpleFixedElevation) 
	{
		Result = UKismetMathLibrary::ComposeRotators(FRotator(MoonElevation * -1.0f, MoonAzimuth, 0), FRotator(0, FMath::Lerp(360.0f, 0.0f, FMath::GetMappedRangeValueClamped(FVector2D(0, 24.0f), FVector2D(0, 1.0f), Time)), 0));
	}
	else 
	{
		MoonPositionData = USkyCreatorFunctionLibrary::GetRealMoonPosition(Latitude, Longitude, TimeZone, bDaylightSavingTime, Date);
		Result = FRotator(MoonPositionData.Elevation + 180.0, MoonPositionData.Azimuth, 0);
	}

	return Result;
}

FRotator ASkyCreator::GetStarMapRotation() const
{
	FRotator Result;

	switch (StarMapRotationType)
	{
		case 0: // No Rotation
		{
			Result = FRotator(0, 0, 0);
			break;
		}
		case 1: // Follow Sun
		{
			Result = SunLight->GetRelativeRotation();
			break;
		}
		case 2: // Follow Moon
		{
			Result = MoonLight->GetRelativeRotation();
			break;
		}
		default: // No Rotation
		{
			Result = FRotator(0, 0, 0);
			break;
		}
	}

	return Result;
}

void ASkyCreator::SetSunMoonPosition(float InTime)
{
	if (bControlSunPosition)
	{
		SunLight->SetRelativeRotation(GetSunPosition(InTime));
	}
	if (bControlMoonPosition)
	{
		MoonLight->SetRelativeRotation(GetMoonPosition(InTime));
	}

	if (StarMapRotationType != StarMapRotationType_NoRotation) {
//		if (SkySphereMID)
//		{
//			SkySphereMID->SetVectorParameterValue("StarMap_Rotation", UKismetMathLibrary::Conv_VectorToLinearColor(GetStarMapRotation(InTime).Vector())); // Star Map Rotation
//		}
		if (CommonMPC)
		{
			UKismetMaterialLibrary::SetVectorParameterValue(this, CommonMPC, "Star Map Rotation", FLinearColor(GetStarMapRotation().Vector()));
		}
	}
/*	if (SkySphereMID)
	{
		SkySphereMID->SetVectorParameterValue("Moon_Direction", UKismetMathLibrary::Conv_VectorToLinearColor(MoonLight->GetComponentRotation().Vector() * -1.0f));
	}*/

	if (CommonMPC)
	{
		UKismetMaterialLibrary::SetVectorParameterValue(this, CommonMPC, "Sun Light Direction", FLinearColor(SunLight->GetComponentRotation().Vector() * -1.0f));
		UKismetMaterialLibrary::SetVectorParameterValue(this, CommonMPC, "Moon Light Direction", FLinearColor(MoonLight->GetComponentRotation().Vector() * -1.0f));
	}

	if (WeatherFX)
	{
		WeatherFX->SetVariableVec3("Sun Rotation", SunLight->GetComponentRotation().Vector());
	}

	UpdateSunMoonIntensity(TimeOfDay);
}

FSkyCreatorSkyAtmosphereSettings ASkyCreator::GetSkyAtmosphereSettings() const
{
	return WeatherSettings.SkyAtmosphereSettings;
}

FSkyCreatorVolumetricCloudSettings ASkyCreator::GetVolumetricCloudSettings() const
{
	return WeatherSettings.VolumetricCloudSettings;
}

FSkyCreatorBackgroundCloudSettings ASkyCreator::GetBackgroundCloudSettings() const
{
	return WeatherSettings.BackgroundCloudSettings;
}

FSkyCreatorSkyLightSettings ASkyCreator::GetSkyLightSettings() const
{
	return WeatherSettings.SkyLightSettings;
}

FSkyCreatorSunLightSettings ASkyCreator::GetSunLightSettings() const
{
	return WeatherSettings.SunLightSettings;
}

FSkyCreatorMoonLightSettings ASkyCreator::GetMoonLightSettings() const
{
	return WeatherSettings.MoonLightSettings;
}

FSkyCreatorExponentialHeightFogSettings ASkyCreator::GetExponentialHeightFogSettings() const
{
	return WeatherSettings.ExponentialHeightFogSettings;
}

FSkyCreatorWeatherFXSettings ASkyCreator::GetWeatherFXSettings() const
{
	return WeatherSettings.WeatherFXSettings;
}

FSkyCreatorMaterialFXSettings ASkyCreator::GetWeatherMaterialFXSettings() const
{
	return WeatherSettings.MaterialFXSettings;
}

FSkyCreatorStarMapSettings ASkyCreator::GetStarMapSettings() const
{
	return WeatherSettings.StarMapSettings;
}

FSkyCreatorWindSettings ASkyCreator::GetWindSettings() const
{
	return WeatherSettings.WindSettings;
}

FSkyCreatorPostProcessSettings ASkyCreator::GetPostProcessSettings() const
{
	return WeatherSettings.PostProcessSettings;
}

FSkyCreatorWeatherSettings ASkyCreator::GetWeatherSettings() const
{
	return WeatherSettings;
}

void ASkyCreator::SetTime(float InTime)
{
	InTime = FGenericPlatformMath::Fmod(InTime, 24.0f); // Internal time stays at [0, 24] range
	TimeOfDay = InTime;
	Date = UKismetMathLibrary::MakeDateTime(Year, Month, Day, TimeOfDay, UKismetMathLibrary::Fraction(TimeOfDay) * 60, UKismetMathLibrary::Fraction(UKismetMathLibrary::Fraction(TimeOfDay) * 60) * 60, 0); //UKismetMathLibrary::Fraction(TimeOfDay) * 60

//	FDateTime CalcTime(Year, Month, Day, TimeOfDay);

//	Date = CalcTime;

	SetSunMoonPosition(TimeOfDay);
}

void ASkyCreator::RealtimeTimeOfDay(float DeltaSeconds, float DayCycleDuration)
{
	TimeOfDay = ((DeltaSeconds / (DayCycleDuration)) * 24.0f) + TimeOfDay;
	SetTime(TimeOfDay);
}

float ASkyCreator::GetTime() const
{
	return TimeOfDay;
}
/*
void ASkyCreator::SetMoonPhase(float InMoonPhase)
{
	MoonPhase = InMoonPhase;
//	SkySphereMID->SetScalarParameterValue("Moon_Phase", MoonPhase);
	if (CommonMPC)
	{
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Moon Phase", MoonPhase);
	}
}
*/
float ASkyCreator::GetMoonPhase() const
{
	return MoonPhase;
}

void ASkyCreator::UpdateSunMoonIntensity(float InTime)
{
	SunDawnTime = SunriseTime - SunDawnOffsetTime;
	SunDuskTime = SunsetTime + SunDuskOffsetTime;

	// Optimized SunLight & MoonLight intensity in such a way that they will never illuminate at the same time

	// Old method
	/*
	if (bLightOptimization) {
		if (TimeOfDay < SunriseTime) {
			SunLight->SetIntensity(FMath::Lerp(0.0f, WeatherSettings.SunLightSettings.Intensity, FMath::GetMappedRangeValueClamped(FVector2D(SunDawnTime, SunDawnTime + SunFadeInOutTime), FVector2D(0, 1), TimeOfDay)));
			MoonLight->SetIntensity(FMath::Lerp(0.0f, WeatherSettings.MoonLightSettings.Intensity, FMath::GetMappedRangeValueClamped(FVector2D(SunDawnTime - MoonFadeInOutTime, SunDawnTime), FVector2D(1, 0), TimeOfDay)));
		}
		else if (TimeOfDay > SunsetTime) {
			SunLight->SetIntensity(FMath::Lerp(0.0f, WeatherSettings.SunLightSettings.Intensity, FMath::GetMappedRangeValueClamped(FVector2D(SunDuskTime - SunFadeInOutTime, SunDuskTime), FVector2D(1, 0), TimeOfDay)));
			MoonLight->SetIntensity(FMath::Lerp(0.0f, WeatherSettings.MoonLightSettings.Intensity, FMath::GetMappedRangeValueClamped(FVector2D(SunDuskTime, SunDuskTime + MoonFadeInOutTime), FVector2D(0, 1), TimeOfDay)));
		}
		else if (TimeOfDay > SunriseTime && TimeOfDay < SunsetTime) {
			SunLight->SetIntensity(WeatherSettings.SunLightSettings.Intensity);
			MoonLight->SetIntensity(0.0f);
		}
		else {
			MoonLight->SetIntensity(0.0f);
		}
	}
	else {
		SunLight->SetIntensity(WeatherSettings.SunLightSettings.Intensity);
		MoonLight->SetIntensity(WeatherSettings.MoonLightSettings.Intensity);
	}*/
	
	if (bMoonPhaseLightIntensityScale)
	{
		float MoonLightIntensity = 0.0f;
		
		if (bMoonConstantIntensity)
		{
			MoonLightIntensity = FMath::InterpSinInOut(MoonIntensity * MoonPhaseLightIntensityMaxScale, MoonIntensity * MoonPhaseLightIntensityMinScale, MoonPhase * 2);
		}
		else
		{
			MoonLightIntensity = FMath::InterpSinInOut(WeatherSettings.MoonLightSettings.Intensity * MoonPhaseLightIntensityMaxScale, WeatherSettings.MoonLightSettings.Intensity * MoonPhaseLightIntensityMinScale, MoonPhase * 2);
		}
		MoonLight->SetIntensity(MoonLightIntensity);
	}

	SunCurrentElevation = SunLight->GetRelativeRotation().Pitch;

	if (bLightTransition)
	{
		if (UKismetMathLibrary::InRange_FloatFloat(SunCurrentElevation, TransitionStartSunAngle, TransitionEndSunAngle))
		{
			SunSurfaceBrightness = FMath::GetMappedRangeValueClamped(FVector2D(TransitionStartSunAngle, TransitionMiddleSunAngle), FVector2D(1, 0), SunCurrentElevation);
//			SunCurrentIntensity = FMath::Lerp(0.0f, SunIntensity, SunSurfaceBrightness);
			MoonSurfaceBrightness = FMath::GetMappedRangeValueClamped(FVector2D(TransitionMiddleSunAngle, TransitionEndSunAngle), FVector2D(0, 1), SunCurrentElevation);
//			MoonCurrentIntensity = FMath::Lerp(0.0f, MoonIntensity, MoonSurfaceBrightness);
		}
		else if (SunCurrentElevation < TransitionStartSunAngle)
		{
			SunSurfaceBrightness = 1.0f;
			MoonSurfaceBrightness = 0.0f;
		}
		else if (SunCurrentElevation > TransitionEndSunAngle)
		{
			SunSurfaceBrightness = 0.0f;
			MoonSurfaceBrightness = 1.0f;
		}

		// Sun is always dominant
		//if (SunLight->DisabledBrightness == 0) {
		if (SunSurfaceBrightness == 0)
		{
			SunLight->SetCastShadows(false);
			SunLight->SetCastVolumetricShadow(false);
//			SunLight->bCastCloudShadows = false;

			switch (SunCloudShadowType)
			{
			case 0:
				{
					SunLight->bCastCloudShadows = false;
					break;
				}
			case 1:
				{
					SunLight->bCastCloudShadows = false;
					break;
				}
			default:
				{
					SunLight->bCastCloudShadows = false;
					break;
				}
			}
			
			SunLight->ForwardShadingPriority = 0;

			MoonLight->SetCastShadows(true);
			MoonLight->SetCastVolumetricShadow(true);
//			MoonLight->bCastCloudShadows = true;

			switch (MoonCloudShadowType)
			{
			case 0:
				{
					MoonLight->bCastCloudShadows = true;
					break;
				}
			case 1:
				{
					MoonLight->bCastCloudShadows = false;
					break;
				}
			default:
				{
					MoonLight->bCastCloudShadows = true;
					break;
				}
			}
			
			MoonLight->ForwardShadingPriority = 1;
		}
		else
		{
			SunLight->SetCastShadows(true);
			SunLight->SetCastVolumetricShadow(true);
//			SunLight->bCastCloudShadows = true;

			switch (SunCloudShadowType)
			{
			case 0:
				{
					SunLight->bCastCloudShadows = true;
					break;
				}
			case 1:
				{
					SunLight->bCastCloudShadows = false;
					break;
				}
			default:
				{
					SunLight->bCastCloudShadows = true;
					break;
				}
			}
			
			SunLight->ForwardShadingPriority = 1;

			MoonLight->SetCastShadows(false);
			MoonLight->SetCastVolumetricShadow(false);
//			MoonLight->bCastCloudShadows = false;

			switch (MoonCloudShadowType)
			{
			case 0:
				{
					MoonLight->bCastCloudShadows = false;
					break;
				}
			case 1:
				{
					MoonLight->bCastCloudShadows = false;
					break;
				}
			default:
				{
					MoonLight->bCastCloudShadows = false;
					break;
				}
			}
			
			MoonLight->ForwardShadingPriority = 0;
		}
//		SunLight->SetLightBrightness(SunBrightness);
//		MoonLight->SetLightBrightness(MoonBrightness);
	}
	else
	{
		SunLight->SetCastShadows(true);
//		SunLight->bCastCloudShadows = true;
		SunLight->SetCastVolumetricShadow(true);
		SunSurfaceBrightness = 1.0f;

		MoonLight->SetCastShadows(true);
//		MoonLight->bCastCloudShadows = true;
		MoonLight->SetCastVolumetricShadow(true);
		MoonSurfaceBrightness = 1.0f;
	}
//	SunLight->SetIntensity(WeatherSettings.SunLightSettings.Intensity);
//	MoonLight->SetIntensity(WeatherSettings.MoonLightSettings.Intensity);

	SunLight->SetLightFunctionDisabledBrightness(SunSurfaceBrightness);
	MoonLight->SetLightFunctionDisabledBrightness(MoonSurfaceBrightness);

	if (CommonMPC)
	{
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Sun Surface Brightness", SunSurfaceBrightness);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Moon Surface Brightness", MoonSurfaceBrightness);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Current Sun Elevation", SunCurrentElevation);
	}

	SunLight->MarkRenderStateDirty();
	MoonLight->MarkRenderStateDirty();
	ExponentialHeightFog->MarkRenderStateDirty();
}

void ASkyCreator::UpdateSettings()
{
	SetComponentsSettings();

	CaptureOcclusion(CameraLocationSnapped);

	if (bUseEditorTimeOfDay)
	{
		SetTime(EditorTimeOfDay);
	}

	if (bUseEditorWeatherSettings)
	{
		if (EditorWeatherType == EditorWeather_WeatherPreset && EditorWeatherPreset)
		{
			SetWeatherSettings(EditorWeatherPreset->GetWeatherPresetSettings());
		}
		else if (EditorWeatherType == EditorWeather_WeatherSettings)
		{
			SetWeatherSettings(EditorWeatherSettings);
		}
	}

//	SetWindSettings(WeatherSettings.WindSettings);

//	if (bIndependentWindControl)
//	{
//		SetWindIndependentSettings(EditorIndependentWindSettings);
//	}

//	UE_LOG(LogTemp, Warning, TEXT("Updated Settings"));
}

// Almost the same as UpdateSettings(), but with less setup routines
void ASkyCreator::UpdateSettingsSequencer()
{
	if (bUseEditorTimeOfDay)
	{
		SetTime(EditorTimeOfDay);
	}

	if (bUseEditorWeatherSettings)
	{
		if (EditorWeatherType == EditorWeather_WeatherPreset && EditorWeatherPreset)
		{
			SetWeatherSettings(EditorWeatherPreset->GetWeatherPresetSettings());
		}
		else if (EditorWeatherType == EditorWeather_WeatherSettings)
		{
			SetWeatherSettings(EditorWeatherSettings);
		}
	}

//	if (bIndependentWindControl)
//	{
//		SetWindIndependentSettings(EditorIndependentWindSettings);
//	}

	if (VolumetricCloud)
	{
		VolumetricCloud->SetLayerBottomAltitude(LayerBottomAltitude);
		VolumetricCloud->SetLayerHeight(LayerHeight);
	}

	if (VolumetricCloudsMPC)
	{
		UKismetMaterialLibrary::SetVectorParameterValue(this, VolumetricCloudsMPC, "Cloud Map Offset", FLinearColor(CloudMapOffset.X, CloudMapOffset.Y, 0));
	}

	if (SunLight)
	{
		if (bSunConstantIntensity)
		{
			SunLight->SetIntensity(SunIntensity);
		}
		SunLight->LightSourceAngle = SunDiskSize;
		SunLight->AtmosphereSunDiskColorScale = SunAtmosphereDiskColorScale;
	}

	if (MoonLight)
	{
		if (bMoonConstantIntensity)
		{
			MoonLight->SetIntensity(MoonIntensity);
		}
		MoonLight->LightSourceAngle = MoonDiskSize;
		MoonLight->AtmosphereSunDiskColorScale = MoonAtmosphereDiskColorScale;
	}

	if (CommonMPC)
	{
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Moon Angular Diameter", MoonDiskSize);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Moon Rotation", MoonRotation);
		UKismetMaterialLibrary::SetScalarParameterValue(this, CommonMPC, "Moon Phase", MoonPhase);
		UKismetMaterialLibrary::SetVectorParameterValue(this, CommonMPC, "Star Map Additional Rotation", FLinearColor(StarMapAdditionalRotation));
	}
}

void ASkyCreator::SetSunSimplePositionSettings(const float InSunriseTime, const float InSunsetTime, const float InSunElevation, const float InSunAzimuth)
{
	if (SunPositionType == SunPositionType_Simple)
	{
		SunriseTime = InSunriseTime;
		SunsetTime = InSunsetTime;
		SunElevation = InSunElevation;
		SunAzimuth = InSunAzimuth;
	}
}

void ASkyCreator::SetMoonSimplePositionSettings(const float InMoonriseTime, const float InMoonsetTime, const float InMoonElevation, const float InMoonAzimuth)
{
	if (MoonPositionType == MoonPositionType_Simple)
	{
		MoonriseTime = InMoonriseTime;
		MoonsetTime = InMoonsetTime;
		MoonElevation = InMoonElevation;
		MoonAzimuth = InMoonAzimuth;
	}
	else if (MoonPositionType == MoonPositionType_SimpleFixedElevation)
	{
		MoonElevation = InMoonElevation;
		MoonAzimuth = InMoonAzimuth;
	}
}

void ASkyCreator::SetRealPositionSettings(const float InLatitude, const float InLongitude, const float InTimeZone, const bool InbDaylightSavingTime, const int InYear, const int InMonth, const int InDay)
{
	if (SunPositionType == SunPositionType_Real || MoonPositionType == MoonPositionType_Real)
	{
		Latitude = InLatitude;
		Longitude = InLongitude;
		TimeZone = InTimeZone;
		bDaylightSavingTime = InbDaylightSavingTime;
		Year = InYear;
		Month = InMonth;
		Day = InDay;
	}
}

void ASkyCreator::PostActorCreated()
{
	Super::PostActorCreated();

}

void ASkyCreator::OnConstruction(const FTransform& Transform)
{
	UpdateSettings();
}

#if WITH_EDITOR

void ASkyCreator::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	/*
	if (PropertyChangedEvent.Property != nullptr)
	{
		const FName& PropertyName = PropertyChangedEvent.Property->GetFName();
		
		if (PropertyName == "EditorTimeOfDay")
		{
			SetTime(EditorTimeOfDay);
		}
		
	}
	*/
}

void ASkyCreator::PostEditChange()
{
	Super::PostEditChange();
}
#endif

void ASkyCreator::SetEditorWeatherSettings(FSkyCreatorWeatherSettings NewValue)
{
	UpdateSettings();
}

#define SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(MemberType, MemberName) void ASkyCreator::Set##MemberName(MemberType NewValue)\
{\
	if (MemberName != NewValue)\
	{\
		MemberName = NewValue;\
		UpdateSettings();\
	}\
}\

SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(float, EditorTimeOfDay);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(USkyCreatorWeatherPreset*, EditorWeatherPreset);

SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(float, SunriseTime);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(float, SunsetTime);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(float, SunDawnOffsetTime);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(float, SunDuskOffsetTime);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(float, SunElevation);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(float, SunAzimuth);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(float, SunMinAngleAtDawnDusk);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(float, MoonriseTime);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(float, MoonsetTime);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(float, MoonElevation);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(float, MoonAzimuth);

SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(float, Latitude);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(float, Longitude);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(float, TimeZone);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(bool, bDaylightSavingTime);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(int32, Year);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(int32, Month);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(int32, Day);

SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(float, LayerBottomAltitude);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(float, LayerHeight);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(FVector2D, CloudMapOffset);

SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(float, SunIntensity);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(float, SunDiskSize);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(FLinearColor, SunAtmosphereDiskColorScale);

SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(float, MoonIntensity);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(float, MoonDiskSize);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(float, MoonRotation);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(float, MoonPhase);
SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(FLinearColor, MoonAtmosphereDiskColorScale);

SKYCREATOR_DECLARE_SEQUENCER_SETFUNCTION(FVector, StarMapAdditionalRotation);

void ASkyCreator::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASkyCreator, TimeOfDay);
	DOREPLIFETIME(ASkyCreator, WeatherSettings);
}

void ASkyCreator::OnRep_UpdateTime()
{
	SetTime(TimeOfDay);
}

void ASkyCreator::OnRep_UpdateWeather()
{
	SetWeatherSettings(WeatherSettings);
}

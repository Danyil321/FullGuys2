// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkyCreatorActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkyCreatorWeatherPreset;
struct FLinearColor;
struct FSkyCreatorBackgroundCloudSettings;
struct FSkyCreatorExponentialHeightFogSettings;
struct FSkyCreatorMaterialFXSettings;
struct FSkyCreatorMoonLightSettings;
struct FSkyCreatorPostProcessSettings;
struct FSkyCreatorSkyAtmosphereSettings;
struct FSkyCreatorSkyLightSettings;
struct FSkyCreatorStarMapSettings;
struct FSkyCreatorSunLightSettings;
struct FSkyCreatorVolumetricCloudSettings;
struct FSkyCreatorWeatherFXSettings;
struct FSkyCreatorWeatherSettings;
struct FSkyCreatorWindSettings;
#ifdef SKYCREATORPLUGIN_SkyCreatorActor_generated_h
#error "SkyCreatorActor.generated.h already included, missing '#pragma once' in SkyCreatorActor.h"
#endif
#define SKYCREATORPLUGIN_SkyCreatorActor_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorActor_h_35_DELEGATE \
SKYCREATORPLUGIN_API void FOnLightningStrike_DelegateWrapper(const FMulticastScriptDelegate& OnLightningStrike, FVector LightningPosition);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorActor_h_110_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkyCreatorLightningParameters_Statics; \
	SKYCREATORPLUGIN_API static class UScriptStruct* StaticStruct();


template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<struct FSkyCreatorLightningParameters>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorActor_h_122_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorActor_h_122_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorActor_h_122_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorActor_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_UpdateWeather); \
	DECLARE_FUNCTION(execOnRep_UpdateTime); \
	DECLARE_FUNCTION(execSetStarMapAdditionalRotation); \
	DECLARE_FUNCTION(execSetMoonAtmosphereDiskColorScale); \
	DECLARE_FUNCTION(execSetMoonPhase); \
	DECLARE_FUNCTION(execSetMoonRotation); \
	DECLARE_FUNCTION(execSetMoonDiskSize); \
	DECLARE_FUNCTION(execSetMoonIntensity); \
	DECLARE_FUNCTION(execSetSunAtmosphereDiskColorScale); \
	DECLARE_FUNCTION(execSetSunDiskSize); \
	DECLARE_FUNCTION(execSetSunIntensity); \
	DECLARE_FUNCTION(execSetCloudMapOffset); \
	DECLARE_FUNCTION(execSetLayerHeight); \
	DECLARE_FUNCTION(execSetLayerBottomAltitude); \
	DECLARE_FUNCTION(execSetDay); \
	DECLARE_FUNCTION(execSetMonth); \
	DECLARE_FUNCTION(execSetYear); \
	DECLARE_FUNCTION(execSetbDaylightSavingTime); \
	DECLARE_FUNCTION(execSetTimeZone); \
	DECLARE_FUNCTION(execSetLongitude); \
	DECLARE_FUNCTION(execSetLatitude); \
	DECLARE_FUNCTION(execSetMoonAzimuth); \
	DECLARE_FUNCTION(execSetMoonElevation); \
	DECLARE_FUNCTION(execSetMoonsetTime); \
	DECLARE_FUNCTION(execSetMoonriseTime); \
	DECLARE_FUNCTION(execSetSunMinAngleAtDawnDusk); \
	DECLARE_FUNCTION(execSetSunAzimuth); \
	DECLARE_FUNCTION(execSetSunElevation); \
	DECLARE_FUNCTION(execSetSunDuskOffsetTime); \
	DECLARE_FUNCTION(execSetSunDawnOffsetTime); \
	DECLARE_FUNCTION(execSetSunsetTime); \
	DECLARE_FUNCTION(execSetSunriseTime); \
	DECLARE_FUNCTION(execSetEditorWeatherSettings); \
	DECLARE_FUNCTION(execSetEditorWeatherPreset); \
	DECLARE_FUNCTION(execSetEditorTimeOfDay); \
	DECLARE_FUNCTION(execUpdateSettingsSequencer); \
	DECLARE_FUNCTION(execFindLightningPosition); \
	DECLARE_FUNCTION(execGetCloudDensityAtPosition); \
	DECLARE_FUNCTION(execGetLastLightningPosition); \
	DECLARE_FUNCTION(execSpawnLightningStrike); \
	DECLARE_FUNCTION(execRealtimeTimeOfDay); \
	DECLARE_FUNCTION(execGetMoonPhase); \
	DECLARE_FUNCTION(execSetRealPositionSettings); \
	DECLARE_FUNCTION(execSetMoonSimplePositionSettings); \
	DECLARE_FUNCTION(execSetSunSimplePositionSettings); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execSetTime); \
	DECLARE_FUNCTION(execGetWeatherSettings); \
	DECLARE_FUNCTION(execGetPostProcessSettings); \
	DECLARE_FUNCTION(execGetWindSettings); \
	DECLARE_FUNCTION(execGetWeatherMaterialFXSettings); \
	DECLARE_FUNCTION(execGetWeatherFXSettings); \
	DECLARE_FUNCTION(execGetStarMapSettings); \
	DECLARE_FUNCTION(execGetExponentialHeightFogSettings); \
	DECLARE_FUNCTION(execGetMoonLightSettings); \
	DECLARE_FUNCTION(execGetSunLightSettings); \
	DECLARE_FUNCTION(execGetSkyLightSettings); \
	DECLARE_FUNCTION(execGetBackgroundCloudSettings); \
	DECLARE_FUNCTION(execGetVolumetricCloudSettings); \
	DECLARE_FUNCTION(execGetSkyAtmosphereSettings); \
	DECLARE_FUNCTION(execLerpSnowAmount); \
	DECLARE_FUNCTION(execLerpPuddlesAmount); \
	DECLARE_FUNCTION(execLerpWetnessAmount); \
	DECLARE_FUNCTION(execLerpWeatherSettings); \
	DECLARE_FUNCTION(execLerpPostProcessSettings); \
	DECLARE_FUNCTION(execLerpWindIndependentSettings); \
	DECLARE_FUNCTION(execLerpWindSettings); \
	DECLARE_FUNCTION(execLerpMaterialFXSettings); \
	DECLARE_FUNCTION(execLerpWeatherFXSettings); \
	DECLARE_FUNCTION(execLerpStarMapSettings); \
	DECLARE_FUNCTION(execLerpExponentialHeightFogSettings); \
	DECLARE_FUNCTION(execLerpMoonLightSettings); \
	DECLARE_FUNCTION(execLerpSunLightSettings); \
	DECLARE_FUNCTION(execLerpSkyLightSettings); \
	DECLARE_FUNCTION(execLerpBackgroundCloudSettings); \
	DECLARE_FUNCTION(execLerpVolumetricCloudSettings); \
	DECLARE_FUNCTION(execLerpSkyAtmosphereSettings); \
	DECLARE_FUNCTION(execSetWeatherSettings); \
	DECLARE_FUNCTION(execSetPostProcessSettings); \
	DECLARE_FUNCTION(execSetWindIndependentSettings); \
	DECLARE_FUNCTION(execSetWindSettings); \
	DECLARE_FUNCTION(execSetMaterialFXSettings); \
	DECLARE_FUNCTION(execSetWeatherFXSettings); \
	DECLARE_FUNCTION(execSetStarMapSettings); \
	DECLARE_FUNCTION(execSetExponentialHeightFogSettings); \
	DECLARE_FUNCTION(execSetMoonLightSettings); \
	DECLARE_FUNCTION(execSetSunLightSettings); \
	DECLARE_FUNCTION(execSetSkyLightSettings); \
	DECLARE_FUNCTION(execSetBackgroundCloudSettings); \
	DECLARE_FUNCTION(execSetVolumetricCloudSettings); \
	DECLARE_FUNCTION(execSetSkyAtmosphereSettings); \
	DECLARE_FUNCTION(execGetStarMapRotation); \
	DECLARE_FUNCTION(execGetMoonPosition); \
	DECLARE_FUNCTION(execGetSunPosition);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorActor_h_122_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorActor_h_122_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorActor_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASkyCreator(); \
	friend struct Z_Construct_UClass_ASkyCreator_Statics; \
public: \
	DECLARE_CLASS(ASkyCreator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyCreatorPlugin"), NO_API) \
	DECLARE_SERIALIZER(ASkyCreator) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TimeOfDay=NETFIELD_REP_START, \
		WeatherSettings, \
		NETFIELD_REP_END=WeatherSettings	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorActor_h_122_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASkyCreator(ASkyCreator&&); \
	NO_API ASkyCreator(const ASkyCreator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASkyCreator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkyCreator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASkyCreator) \
	NO_API virtual ~ASkyCreator();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorActor_h_119_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorActor_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorActor_h_122_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorActor_h_122_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorActor_h_122_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorActor_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorActor_h_122_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorActor_h_122_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorActor_h_122_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorActor_h_122_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYCREATORPLUGIN_API UClass* StaticClass<class ASkyCreator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorActor_h


#define FOREACH_ENUM_ESKYCREATOREDITORWEATHERTYPE(op) \
	op(EditorWeather_WeatherPreset) \
	op(EditorWeather_WeatherSettings) 
#define FOREACH_ENUM_ESKYCREATORSUNPOSITIONTYPE(op) \
	op(SunPositionType_Simple) \
	op(SunPositionType_Real) 
#define FOREACH_ENUM_ESKYCREATORMOONPOSITIONTYPE(op) \
	op(MoonPositionType_Simple) \
	op(MoonPositionType_SimpleFixedElevation) \
	op(MoonPositionType_Real) 
#define FOREACH_ENUM_EVOLUMETRICCLOUDRENDERTARGETMODE(op) \
	op(VolumetricCloudRenderTargetMode_Default) \
	op(VolumetricCloudRenderTargetMode_Quality) \
	op(VolumetricCloudRenderTargetMode_Performance) 
#define FOREACH_ENUM_EVOLUMETRICCLOUDNOISESHAPERESOLUTION(op) \
	op(VolumetricCloudNoiseShapeResolution_64) \
	op(VolumetricCloudNoiseShapeResolution_128) \
	op(VolumetricCloudNoiseShapeResolution_256) 
#define FOREACH_ENUM_EVOLUMETRICCLOUDNOISEDETAILRESOLUTION(op) \
	op(VolumetricCloudNoiseDetailResolution_32) \
	op(VolumetricCloudNoiseDetailResolution_64) 
#define FOREACH_ENUM_EVOLUMETRICCLOUDSHADOWTYPE(op) \
	op(VolumetricCloudShadowType_True) \
	op(VolumetricCloudShadowType_Fake) 
#define FOREACH_ENUM_ESKYCREATORSTARMAPROTATIONTYPE(op) \
	op(StarMapRotationType_NoRotation) \
	op(StarMapRotationType_FollowSun) \
	op(StarMapRotationType_FollowMoon) 
#define FOREACH_ENUM_EPRECIPITATIONSPAWNMODE(op) \
	op(EPrecipitationSpawnMode_CPUGPU) \
	op(EPrecipitationSpawnMode_CPU) \
	op(EPrecipitationSpawnMode_GPU) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

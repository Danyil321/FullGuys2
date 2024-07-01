// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkyCreatorFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UObject;
class UTexture2D;
class UTextureRenderTarget2D;
struct FCelestialPositionData;
struct FDateTime;
#ifdef SKYCREATORPLUGIN_SkyCreatorFunctionLibrary_generated_h
#error "SkyCreatorFunctionLibrary.generated.h already included, missing '#pragma once' in SkyCreatorFunctionLibrary.h"
#endif
#define SKYCREATORPLUGIN_SkyCreatorFunctionLibrary_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCelestialPositionData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<struct FCelestialPositionData>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_50_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_50_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_50_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execElevationRefraction); \
	DECLARE_FUNCTION(execIsApplicationForegroundNow); \
	DECLARE_FUNCTION(execKilometersToCentimeters); \
	DECLARE_FUNCTION(execCentimetersToKilometers); \
	DECLARE_FUNCTION(execCreateAndAssignMID); \
	DECLARE_FUNCTION(execFindLightningPosition); \
	DECLARE_FUNCTION(execGetCloudDensityAtPosition); \
	DECLARE_FUNCTION(execCheckCloudDensityAtPosition); \
	DECLARE_FUNCTION(execDynamicConvertRenderTargetToTexture2D); \
	DECLARE_FUNCTION(execConvertRenderTargetToTexture2D); \
	DECLARE_FUNCTION(execGetRealMoonPosition); \
	DECLARE_FUNCTION(execGetRealSunPosition);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_50_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkyCreatorFunctionLibrary(); \
	friend struct Z_Construct_UClass_USkyCreatorFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USkyCreatorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyCreatorPlugin"), NO_API) \
	DECLARE_SERIALIZER(USkyCreatorFunctionLibrary)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkyCreatorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkyCreatorFunctionLibrary(USkyCreatorFunctionLibrary&&); \
	NO_API USkyCreatorFunctionLibrary(const USkyCreatorFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkyCreatorFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyCreatorFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkyCreatorFunctionLibrary) \
	NO_API virtual ~USkyCreatorFunctionLibrary();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_47_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_50_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_50_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_50_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_50_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_50_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYCREATORPLUGIN_API UClass* StaticClass<class USkyCreatorFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

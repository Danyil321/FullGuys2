// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyCreatorPlugin/Public/SkyCreatorWeatherPreset.h"
#include "SkyCreatorPlugin/Public/SkyCreatorWeatherSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyCreatorWeatherPreset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	SKYCREATORPLUGIN_API UClass* Z_Construct_UClass_USkyCreatorWeatherPreset();
	SKYCREATORPLUGIN_API UClass* Z_Construct_UClass_USkyCreatorWeatherPreset_NoRegister();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorWindSettings();
	UPackage* Z_Construct_UPackage__Script_SkyCreatorPlugin();
// End Cross Module References
	DEFINE_FUNCTION(USkyCreatorWeatherPreset::execGetWeatherPresetSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSkyCreatorWeatherSettings*)Z_Param__Result=P_THIS->GetWeatherPresetSettings();
		P_NATIVE_END;
	}
	void USkyCreatorWeatherPreset::StaticRegisterNativesUSkyCreatorWeatherPreset()
	{
		UClass* Class = USkyCreatorWeatherPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWeatherPresetSettings", &USkyCreatorWeatherPreset::execGetWeatherPresetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics
	{
		struct SkyCreatorWeatherPreset_eventGetWeatherPresetSettings_Parms
		{
			FSkyCreatorWeatherSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorWeatherPreset_eventGetWeatherPresetSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings, METADATA_PARAMS(0, nullptr) }; // 3556514054
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sky Creator|Weather Preset" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyCreatorWeatherPreset, nullptr, "GetWeatherPresetSettings", nullptr, nullptr, Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::SkyCreatorWeatherPreset_eventGetWeatherPresetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::SkyCreatorWeatherPreset_eventGetWeatherPresetSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkyCreatorWeatherPreset);
	UClass* Z_Construct_UClass_USkyCreatorWeatherPreset_NoRegister()
	{
		return USkyCreatorWeatherPreset::StaticClass();
	}
	struct Z_Construct_UClass_USkyCreatorWeatherPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyAtmosphereSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkyAtmosphereSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricCloudSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumetricCloudSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundCloudSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundCloudSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyLightSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkyLightSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SunLightSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SunLightSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoonLightSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoonLightSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExponentialHeightFogSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExponentialHeightFogSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarMapSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StarMapSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeatherFXSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeatherFXSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeatherMaterialFXSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeatherMaterialFXSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WindSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings, "GetWeatherPresetSettings" }, // 547698857
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SkyCreatorWeatherPreset.h" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Description" },
		{ "DisplayName", "Description" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
		{ "multiline", "true" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyCreatorWeatherPreset, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_Description_MetaData), Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SkyAtmosphereSettings_MetaData[] = {
		{ "Category", "Sky Atmosphere" },
		{ "DisplayName", "Sky Atmosphere Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SkyAtmosphereSettings = { "SkyAtmosphereSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyCreatorWeatherPreset, SkyAtmosphereSettings), Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SkyAtmosphereSettings_MetaData), Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SkyAtmosphereSettings_MetaData) }; // 1252901596
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_VolumetricCloudSettings_MetaData[] = {
		{ "Category", "Volumetric Cloud" },
		{ "DisplayName", "Volumetric Cloud Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_VolumetricCloudSettings = { "VolumetricCloudSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyCreatorWeatherPreset, VolumetricCloudSettings), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_VolumetricCloudSettings_MetaData), Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_VolumetricCloudSettings_MetaData) }; // 4050286809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_BackgroundCloudSettings_MetaData[] = {
		{ "Category", "Background Clouds" },
		{ "DisplayName", "Background Cloud Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_BackgroundCloudSettings = { "BackgroundCloudSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyCreatorWeatherPreset, BackgroundCloudSettings), Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_BackgroundCloudSettings_MetaData), Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_BackgroundCloudSettings_MetaData) }; // 805739165
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SkyLightSettings_MetaData[] = {
		{ "Category", "Sky Light" },
		{ "DisplayName", "Sky Light Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SkyLightSettings = { "SkyLightSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyCreatorWeatherPreset, SkyLightSettings), Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SkyLightSettings_MetaData), Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SkyLightSettings_MetaData) }; // 4258342397
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SunLightSettings_MetaData[] = {
		{ "Category", "Sun Light" },
		{ "DisplayName", "Sun Light Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SunLightSettings = { "SunLightSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyCreatorWeatherPreset, SunLightSettings), Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SunLightSettings_MetaData), Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SunLightSettings_MetaData) }; // 2576816153
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_MoonLightSettings_MetaData[] = {
		{ "Category", "Moon Light" },
		{ "DisplayName", "Moon Light Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_MoonLightSettings = { "MoonLightSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyCreatorWeatherPreset, MoonLightSettings), Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_MoonLightSettings_MetaData), Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_MoonLightSettings_MetaData) }; // 48995007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_ExponentialHeightFogSettings_MetaData[] = {
		{ "Category", "Exponential Height Fog" },
		{ "DisplayName", "Exponential Height Fog Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_ExponentialHeightFogSettings = { "ExponentialHeightFogSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyCreatorWeatherPreset, ExponentialHeightFogSettings), Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_ExponentialHeightFogSettings_MetaData), Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_ExponentialHeightFogSettings_MetaData) }; // 3144598692
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_StarMapSettings_MetaData[] = {
		{ "Category", "Star Map" },
		{ "DisplayName", "Star Map Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_StarMapSettings = { "StarMapSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyCreatorWeatherPreset, StarMapSettings), Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_StarMapSettings_MetaData), Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_StarMapSettings_MetaData) }; // 3776822257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WeatherFXSettings_MetaData[] = {
		{ "Category", "Weather FX" },
		{ "DisplayName", "Weather FX Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WeatherFXSettings = { "WeatherFXSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyCreatorWeatherPreset, WeatherFXSettings), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WeatherFXSettings_MetaData), Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WeatherFXSettings_MetaData) }; // 3878984845
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WeatherMaterialFXSettings_MetaData[] = {
		{ "Category", "Weather Material FX" },
		{ "DisplayName", "Weather Material FX Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WeatherMaterialFXSettings = { "WeatherMaterialFXSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyCreatorWeatherPreset, WeatherMaterialFXSettings), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WeatherMaterialFXSettings_MetaData), Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WeatherMaterialFXSettings_MetaData) }; // 2940158826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WindSettings_MetaData[] = {
		{ "Category", "Wind" },
		{ "DisplayName", "Wind Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WindSettings = { "WindSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyCreatorWeatherPreset, WindSettings), Z_Construct_UScriptStruct_FSkyCreatorWindSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WindSettings_MetaData), Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WindSettings_MetaData) }; // 965985319
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "Post Process" },
		{ "DisplayName", "Post Process Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyCreatorWeatherPreset, PostProcessSettings), Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_PostProcessSettings_MetaData), Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_PostProcessSettings_MetaData) }; // 1406253749
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SkyAtmosphereSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_VolumetricCloudSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_BackgroundCloudSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SkyLightSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SunLightSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_MoonLightSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_ExponentialHeightFogSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_StarMapSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WeatherFXSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WeatherMaterialFXSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WindSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_PostProcessSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkyCreatorWeatherPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::ClassParams = {
		&USkyCreatorWeatherPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USkyCreatorWeatherPreset()
	{
		if (!Z_Registration_Info_UClass_USkyCreatorWeatherPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkyCreatorWeatherPreset.OuterSingleton, Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkyCreatorWeatherPreset.OuterSingleton;
	}
	template<> SKYCREATORPLUGIN_API UClass* StaticClass<USkyCreatorWeatherPreset>()
	{
		return USkyCreatorWeatherPreset::StaticClass();
	}
	USkyCreatorWeatherPreset::USkyCreatorWeatherPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyCreatorWeatherPreset);
	USkyCreatorWeatherPreset::~USkyCreatorWeatherPreset() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherPreset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherPreset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkyCreatorWeatherPreset, USkyCreatorWeatherPreset::StaticClass, TEXT("USkyCreatorWeatherPreset"), &Z_Registration_Info_UClass_USkyCreatorWeatherPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkyCreatorWeatherPreset), 591436593U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherPreset_h_1393693589(TEXT("/Script/SkyCreatorPlugin"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherPreset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherPreset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

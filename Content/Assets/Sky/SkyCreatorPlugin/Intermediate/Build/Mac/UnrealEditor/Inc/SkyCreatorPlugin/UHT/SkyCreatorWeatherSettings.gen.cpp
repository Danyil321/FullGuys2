// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyCreatorPlugin/Public/SkyCreatorWeatherSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyCreatorWeatherSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
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
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorSkyAtmosphereSettings;
class UScriptStruct* FSkyCreatorSkyAtmosphereSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorSkyAtmosphereSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorSkyAtmosphereSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings, (UObject*)Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorSkyAtmosphereSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorSkyAtmosphereSettings.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorSkyAtmosphereSettings>()
{
	return FSkyCreatorSkyAtmosphereSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayleighScatteringScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RayleighScatteringScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayleighScattering_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RayleighScattering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayleighExponentialDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RayleighExponentialDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieScatteringScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MieScatteringScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieScattering_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MieScattering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieAbsorptionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MieAbsorptionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieAbsorption_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MieAbsorption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieAnisotropy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MieAnisotropy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieExponentialDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MieExponentialDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Absorption_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Absorption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyLuminanceFactor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkyLuminanceFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundAlbedo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundAlbedo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightFogContribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightFogContribution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorSkyAtmosphereSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighScatteringScale_MetaData[] = {
		{ "Category", "Atmosphere|Rayleigh" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Rayleigh scattering coefficient scale.*/" },
		{ "DisplayName", "Rayleigh Scattering Scale" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "SliderExponent", "4.000000" },
		{ "ToolTip", "Rayleigh scattering coefficient scale." },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighScatteringScale = { "RayleighScatteringScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, RayleighScatteringScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighScatteringScale_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighScatteringScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighScattering_MetaData[] = {
		{ "Category", "Atmosphere|Rayleigh" },
		{ "Comment", "/** The Rayleigh scattering coefficients resulting from molecules in the air at an altitude of 0 kilometer. */" },
		{ "DisplayName", "Rayleigh Scattering" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "The Rayleigh scattering coefficients resulting from molecules in the air at an altitude of 0 kilometer." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighScattering = { "RayleighScattering", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, RayleighScattering), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighScattering_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighScattering_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighExponentialDistribution_MetaData[] = {
		{ "Category", "Atmosphere|Rayleigh" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** The altitude in kilometer at which Rayleigh scattering effect is reduced to 40%.*/" },
		{ "DisplayName", "Rayleigh Exponential Distribution" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "SliderExponent", "5.000000" },
		{ "ToolTip", "The altitude in kilometer at which Rayleigh scattering effect is reduced to 40%." },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighExponentialDistribution = { "RayleighExponentialDistribution", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, RayleighExponentialDistribution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighExponentialDistribution_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighExponentialDistribution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieScatteringScale_MetaData[] = {
		{ "Category", "Atmosphere|Mie" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Mie scattering coefficient scale.*/" },
		{ "DisplayName", "Mie Scattering Scale" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "SliderExponent", "4.000000" },
		{ "ToolTip", "Mie scattering coefficient scale." },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieScatteringScale = { "MieScatteringScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, MieScatteringScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieScatteringScale_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieScatteringScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieScattering_MetaData[] = {
		{ "Category", "Atmosphere|Mie" },
		{ "Comment", "/** \n\x09* The Mie scattering coefficients resulting from particles in the air at an altitude of 0 kilometer. \n\x09* As it becomes higher, light will be scattered more. \n\x09*/" },
		{ "DisplayName", "Mie Scattering" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "The Mie scattering coefficients resulting from particles in the air at an altitude of 0 kilometer.\nAs it becomes higher, light will be scattered more." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieScattering = { "MieScattering", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, MieScattering), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieScattering_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieScattering_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAbsorptionScale_MetaData[] = {
		{ "Category", "Atmosphere|Mie" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Mie absorption coefficient scale.*/" },
		{ "DisplayName", "Mie Absorption Scale" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "SliderExponent", "4.000000" },
		{ "ToolTip", "Mie absorption coefficient scale." },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAbsorptionScale = { "MieAbsorptionScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, MieAbsorptionScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAbsorptionScale_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAbsorptionScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAbsorption_MetaData[] = {
		{ "Category", "Atmosphere|Mie" },
		{ "Comment", "/** \n\x09* The Mie absorption coefficients resulting from particles in the air at an altitude of 0 kilometer. \n\x09* As it becomes higher, light will be absorbed more. \n\x09*/" },
		{ "DisplayName", "Mie Absorption" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "The Mie absorption coefficients resulting from particles in the air at an altitude of 0 kilometer.\nAs it becomes higher, light will be absorbed more." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAbsorption = { "MieAbsorption", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, MieAbsorption), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAbsorption_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAbsorption_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAnisotropy_MetaData[] = {
		{ "Category", "Atmosphere|Mie" },
		{ "ClampMax", "0.999" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** \n\x09* A value of 0 mean light is uniformly scattered. \n\x09* A value closer to 1 means lights will scatter more forward, resulting in halos around light sources. \n\x09*/" },
		{ "DisplayName", "Mie Anisotropy" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "A value of 0 mean light is uniformly scattered.\nA value closer to 1 means lights will scatter more forward, resulting in halos around light sources." },
		{ "UIMax", "0.999" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAnisotropy = { "MieAnisotropy", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, MieAnisotropy), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAnisotropy_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAnisotropy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieExponentialDistribution_MetaData[] = {
		{ "Category", "Atmosphere|Mie" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** The altitude in kilometer at which Mie effects are reduced to 40%.*/" },
		{ "DisplayName", "Mie Exponential Distribution" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "SliderExponent", "5.000000" },
		{ "ToolTip", "The altitude in kilometer at which Mie effects are reduced to 40%." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieExponentialDistribution = { "MieExponentialDistribution", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, MieExponentialDistribution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieExponentialDistribution_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieExponentialDistribution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_AbsorptionScale_MetaData[] = {
		{ "Category", "Atmosphere|Absorption" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09* Absorption coefficients for another atmosphere layer.\n\x09* Density increase from 0 to 1 between 10 to 25km and decreases from 1 to 0 between 25 to 40km.\n\x09* This approximates ozone molecules distribution in the Earth atmosphere.\n\x09*/" },
		{ "DisplayName", "Absorption Scale" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "SliderExponent", "3.000000" },
		{ "ToolTip", "Absorption coefficients for another atmosphere layer.\nDensity increase from 0 to 1 between 10 to 25km and decreases from 1 to 0 between 25 to 40km.\nThis approximates ozone molecules distribution in the Earth atmosphere." },
		{ "UIMax", "0.2" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_AbsorptionScale = { "AbsorptionScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, AbsorptionScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_AbsorptionScale_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_AbsorptionScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_Absorption_MetaData[] = {
		{ "Category", "Atmosphere|Absorption" },
		{ "Comment", "/**\n\x09* Absorption coefficients for another atmosphere layer.\n\x09* Density increase from 0 to 1 between 10 to 25km and decreases from 1 to 0 between 25 to 40km.\n\x09* The default values represents ozone molecules absorption in the Earth atmosphere.\n\x09*/" },
		{ "DisplayName", "Absorption" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Absorption coefficients for another atmosphere layer.\nDensity increase from 0 to 1 between 10 to 25km and decreases from 1 to 0 between 25 to 40km.\nThe default values represents ozone molecules absorption in the Earth atmosphere." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_Absorption = { "Absorption", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, Absorption), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_Absorption_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_Absorption_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_SkyLuminanceFactor_MetaData[] = {
		{ "Category", "Atmosphere|Art Direction" },
		{ "Comment", "/** Scales the luminance of pixels representing the sky, i.e. not belonging to any surface. */" },
		{ "DisplayName", "Sky Luminance Factor" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Scales the luminance of pixels representing the sky, i.e. not belonging to any surface." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_SkyLuminanceFactor = { "SkyLuminanceFactor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, SkyLuminanceFactor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_SkyLuminanceFactor_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_SkyLuminanceFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_GroundAlbedo_MetaData[] = {
		{ "Category", "Atmosphere|Art Direction" },
		{ "Comment", "/** \n\x09* The ground albedo that will tint the astmophere when the sun light will bounce on it.\n\x09* Only taken into account when MultiScattering > 0.0. \n\x09*/" },
		{ "DisplayName", "Ground Albedo" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "The ground albedo that will tint the astmophere when the sun light will bounce on it.\nOnly taken into account when MultiScattering > 0.0." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_GroundAlbedo = { "GroundAlbedo", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, GroundAlbedo), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_GroundAlbedo_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_GroundAlbedo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_HeightFogContribution_MetaData[] = {
		{ "Category", "Atmosphere|Art Direction" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09* Scale the sky and atmosphere lights contribution to the height fog when\n\x09* SupportSkyAtmosphereAffectsHeightFog project setting is true.\n\x09*/" },
		{ "DisplayName", "Height Fog Contribution" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Scale the sky and atmosphere lights contribution to the height fog when\nSupportSkyAtmosphereAffectsHeightFog project setting is true." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_HeightFogContribution = { "HeightFogContribution", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, HeightFogContribution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_HeightFogContribution_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_HeightFogContribution_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighScatteringScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighScattering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighExponentialDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieScatteringScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieScattering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAbsorptionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAbsorption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAnisotropy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieExponentialDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_AbsorptionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_Absorption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_SkyLuminanceFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_GroundAlbedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_HeightFogContribution,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorSkyAtmosphereSettings",
		Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::PropPointers),
		sizeof(FSkyCreatorSkyAtmosphereSettings),
		alignof(FSkyCreatorSkyAtmosphereSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorSkyAtmosphereSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorSkyAtmosphereSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorSkyAtmosphereSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorVolumetricCloudSettings;
class UScriptStruct* FSkyCreatorVolumetricCloudSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorVolumetricCloudSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorVolumetricCloudSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings, (UObject*)Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorVolumetricCloudSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorVolumetricCloudSettings.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorVolumetricCloudSettings>()
{
	return FSkyCreatorVolumetricCloudSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StratusCoverage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StratusCoverage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StratusCoverageVariation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StratusCoverageVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StratusHeightVariation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StratusHeightVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StratocumulusCoverage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StratocumulusCoverage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StratocumulusCoverageVariation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StratocumulusCoverageVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StratocumulusHeightVariation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StratocumulusHeightVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CumulusCoverage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CumulusCoverage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CumulusCoverageVariation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CumulusCoverageVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CumulusHeightVariation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CumulusHeightVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CumulonimbusCoverage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CumulonimbusCoverage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CumulonimbusAnvil_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CumulonimbusAnvil;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CumulonimbusHeightVariation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CumulonimbusHeightVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityBottom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DensityBottom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityMiddle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DensityMiddle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityTop_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DensityTop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Albedo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Albedo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundAlbedo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundAlbedo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeersPowderIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeersPowderIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeersPowderDepth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeersPowderDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomOcclusion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BottomOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomOcclusionHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BottomOcclusionHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NightEmissive_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NightEmissive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhaseG_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PhaseG;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhaseG2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PhaseG2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhaseBlend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PhaseBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiScatteringContribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiScatteringContribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiScatteringOcclusion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiScatteringOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiScatteringEccentricity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiScatteringEccentricity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseShapeIntensityA_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseShapeIntensityA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseShapeIntensityB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseShapeIntensityB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseShapeIntensityC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseShapeIntensityC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseShapeIntensityD_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseShapeIntensityD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurbulenceIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurbulenceIntensity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Description. */" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Description." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorVolumetricCloudSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusCoverage_MetaData[] = {
		{ "Category", "Volumetric Clouds" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Coverage of the Stratus cloud layer. */" },
		{ "DisplayName", "Stratus Coverage" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Coverage of the Stratus cloud layer." },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusCoverage = { "StratusCoverage", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, StratusCoverage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusCoverage_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusCoverage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusCoverageVariation_MetaData[] = {
		{ "Category", "Volumetric Clouds" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Coverage variation of the Stratus cloud layer. */" },
		{ "DisplayName", "Stratus Coverage Variation" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Coverage variation of the Stratus cloud layer." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusCoverageVariation = { "StratusCoverageVariation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, StratusCoverageVariation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusCoverageVariation_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusCoverageVariation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusHeightVariation_MetaData[] = {
		{ "Category", "Volumetric Clouds" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Height variation of the Stratus cloud layer. */" },
		{ "DisplayName", "Stratus Height Variation" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Height variation of the Stratus cloud layer." },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusHeightVariation = { "StratusHeightVariation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, StratusHeightVariation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusHeightVariation_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusHeightVariation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusCoverage_MetaData[] = {
		{ "Category", "Volumetric Clouds" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Coverage of the Stratocumulus cloud layer. */" },
		{ "DisplayName", "Stratocumulus Coverage" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Coverage of the Stratocumulus cloud layer." },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusCoverage = { "StratocumulusCoverage", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, StratocumulusCoverage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusCoverage_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusCoverage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusCoverageVariation_MetaData[] = {
		{ "Category", "Volumetric Clouds" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Coverage variation of the Stratocumulus cloud layer. */" },
		{ "DisplayName", "Stratocumulus Coverage Variation" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Coverage variation of the Stratocumulus cloud layer." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusCoverageVariation = { "StratocumulusCoverageVariation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, StratocumulusCoverageVariation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusCoverageVariation_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusCoverageVariation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusHeightVariation_MetaData[] = {
		{ "Category", "Volumetric Clouds" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Height variation of the Stratocumulus cloud layer. */" },
		{ "DisplayName", "Stratocumulus Height Variation" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Height variation of the Stratocumulus cloud layer." },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusHeightVariation = { "StratocumulusHeightVariation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, StratocumulusHeightVariation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusHeightVariation_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusHeightVariation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusCoverage_MetaData[] = {
		{ "Category", "Volumetric Clouds" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Coverage of the Cumulus cloud layer. */" },
		{ "DisplayName", "Cumulus Coverage" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Coverage of the Cumulus cloud layer." },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusCoverage = { "CumulusCoverage", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, CumulusCoverage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusCoverage_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusCoverage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusCoverageVariation_MetaData[] = {
		{ "Category", "Volumetric Clouds" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Coverage variation of the Cumulus cloud layer. */" },
		{ "DisplayName", "Cumulus Coverage Variation" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Coverage variation of the Cumulus cloud layer." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusCoverageVariation = { "CumulusCoverageVariation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, CumulusCoverageVariation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusCoverageVariation_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusCoverageVariation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusHeightVariation_MetaData[] = {
		{ "Category", "Volumetric Clouds" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Height variation of the Cumulus cloud layer. */" },
		{ "DisplayName", "Cumulus Height Variation" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Height variation of the Cumulus cloud layer." },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusHeightVariation = { "CumulusHeightVariation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, CumulusHeightVariation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusHeightVariation_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusHeightVariation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusCoverage_MetaData[] = {
		{ "Category", "Volumetric Clouds" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Coverage of the Cumulonimbus cloud layer. */" },
		{ "DisplayName", "Cumulonimbus Coverage" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Coverage of the Cumulonimbus cloud layer." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusCoverage = { "CumulonimbusCoverage", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, CumulonimbusCoverage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusCoverage_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusCoverage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusAnvil_MetaData[] = {
		{ "Category", "Volumetric Clouds" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Anvil factor of the Cumulonimbus cloud layer. */" },
		{ "DisplayName", "Cumulonimbus Anvil" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Anvil factor of the Cumulonimbus cloud layer." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusAnvil = { "CumulonimbusAnvil", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, CumulonimbusAnvil), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusAnvil_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusAnvil_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusHeightVariation_MetaData[] = {
		{ "Category", "Volumetric Clouds" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Height variation of the Cumulonimbus cloud layer. */" },
		{ "DisplayName", "Cumulonimbus Height Variation" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Height variation of the Cumulonimbus cloud layer." },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusHeightVariation = { "CumulonimbusHeightVariation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, CumulonimbusHeightVariation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusHeightVariation_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusHeightVariation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityBottom_MetaData[] = {
		{ "Category", "Volumetric Clouds|Parameters" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Density value of the bottom level of the Volumetric Clouds. */" },
		{ "DisplayName", "Density Bottom" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Density value of the bottom level of the Volumetric Clouds." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityBottom = { "DensityBottom", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, DensityBottom), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityBottom_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityBottom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityMiddle_MetaData[] = {
		{ "Category", "Volumetric Clouds|Parameters" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Density value of the middle level of the Volumetric Clouds. */" },
		{ "DisplayName", "Density Middle" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Density value of the middle level of the Volumetric Clouds." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityMiddle = { "DensityMiddle", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, DensityMiddle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityMiddle_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityMiddle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityTop_MetaData[] = {
		{ "Category", "Volumetric Clouds|Parameters" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Density value of the top level of the Volumetric Clouds. */" },
		{ "DisplayName", "Density Top" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Density value of the top level of the Volumetric Clouds." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityTop = { "DensityTop", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, DensityTop), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityTop_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityTop_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_Albedo_MetaData[] = {
		{ "Category", "Volumetric Clouds|Lighting" },
		{ "Comment", "/** Albedo color of Volumetric Cloudss. */" },
		{ "DisplayName", "Albedo" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Albedo color of Volumetric Cloudss." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_Albedo = { "Albedo", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, Albedo), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_Albedo_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_Albedo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_GroundAlbedo_MetaData[] = {
		{ "Category", "Volumetric Clouds|Lighting" },
		{ "Comment", "/**\n\x09* The ground albedo used to light the cloud from below with respect to the sun light and sky atmosphere.\n\x09* This is only used by the cloud material when the Ground Contribution is enabled from the Quality settings of Volumetric Clouds.\n\x09*/" },
		{ "DisplayName", "Ground Albedo" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "The ground albedo used to light the cloud from below with respect to the sun light and sky atmosphere.\nThis is only used by the cloud material when the Ground Contribution is enabled from the Quality settings of Volumetric Clouds." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_GroundAlbedo = { "GroundAlbedo", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, GroundAlbedo), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_GroundAlbedo_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_GroundAlbedo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_BeersPowderIntensity_MetaData[] = {
		{ "Category", "Volumetric Clouds|Lighting" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Beer's Powder Intensity. */" },
		{ "DisplayName", "Beer's Powder Intensity" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Beer's Powder Intensity." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_BeersPowderIntensity = { "BeersPowderIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, BeersPowderIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_BeersPowderIntensity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_BeersPowderIntensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_BeersPowderDepth_MetaData[] = {
		{ "Category", "Volumetric Clouds|Lighting" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Beer's Powder Depth. */" },
		{ "DisplayName", "Beer's Powder Depth" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Beer's Powder Depth." },
		{ "UIMax", "200.0" },
		{ "UIMin", "10.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_BeersPowderDepth = { "BeersPowderDepth", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, BeersPowderDepth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_BeersPowderDepth_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_BeersPowderDepth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_BottomOcclusion_MetaData[] = {
		{ "Category", "Volumetric Clouds|Lighting" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Bottom Occlusion amount of the volumetric clouds. Affects only Cumulus and Cumulonimbus layers. */" },
		{ "DisplayName", "Bottom Occlusion" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Bottom Occlusion amount of the volumetric clouds. Affects only Cumulus and Cumulonimbus layers." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_BottomOcclusion = { "BottomOcclusion", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, BottomOcclusion), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_BottomOcclusion_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_BottomOcclusion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_BottomOcclusionHeight_MetaData[] = {
		{ "Category", "Volumetric Clouds|Lighting" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Normalized height of the Bottom Occlusion. */" },
		{ "DisplayName", "Bottom Occlusion Height" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Normalized height of the Bottom Occlusion." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_BottomOcclusionHeight = { "BottomOcclusionHeight", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, BottomOcclusionHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_BottomOcclusionHeight_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_BottomOcclusionHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NightEmissive_MetaData[] = {
		{ "Category", "Volumetric Clouds|Lighting" },
		{ "Comment", "/** Emissive color of Volumetric Cloudss. Better to keep this value low. */" },
		{ "DisplayName", "Night Emissive" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Emissive color of Volumetric Cloudss. Better to keep this value low." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NightEmissive = { "NightEmissive", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, NightEmissive), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NightEmissive_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NightEmissive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseG_MetaData[] = {
		{ "Category", "Volumetric Clouds|Lighting" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/** Phase function describing how much forward (G < 0) of backward (G > 0) light scatter around. */" },
		{ "DisplayName", "Phase G" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Phase function describing how much forward (G < 0) of backward (G > 0) light scatter around." },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseG = { "PhaseG", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, PhaseG), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseG_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseG_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseG2_MetaData[] = {
		{ "Category", "Volumetric Clouds|Lighting" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/** Second phase function describing how much forward (G < 0) of backward (G > 0) light scatter around. */" },
		{ "DisplayName", "Phase G2" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Second phase function describing how much forward (G < 0) of backward (G > 0) light scatter around." },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseG2 = { "PhaseG2", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, PhaseG2), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseG2_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseG2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseBlend_MetaData[] = {
		{ "Category", "Volumetric Clouds|Lighting" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Lerp factor when blending the two phase functions. */" },
		{ "DisplayName", "Phase Blend" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Lerp factor when blending the two phase functions." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseBlend = { "PhaseBlend", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, PhaseBlend), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseBlend_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseBlend_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringContribution_MetaData[] = {
		{ "Category", "Volumetric Clouds|Lighting" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09* Multi-scattering approximation: represents how much contribution \n\x09* each successive octave will add. Evaluatead per pixel.\n\x09*/" },
		{ "DisplayName", "Multi Scattering Contribution" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Multi-scattering approximation: represents how much contribution\neach successive octave will add. Evaluatead per pixel." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringContribution = { "MultiScatteringContribution", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, MultiScatteringContribution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringContribution_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringContribution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringOcclusion_MetaData[] = {
		{ "Category", "Volumetric Clouds|Lighting" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09* Multi-scattering approximation: represents how much occlussion\n\x09* will be reduced for each successive octave. Evaluatead per pixel.\n\x09*/" },
		{ "DisplayName", "Multi Scattering Occlusion" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Multi-scattering approximation: represents how much occlussion\nwill be reduced for each successive octave. Evaluatead per pixel." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringOcclusion = { "MultiScatteringOcclusion", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, MultiScatteringOcclusion), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringOcclusion_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringOcclusion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringEccentricity_MetaData[] = {
		{ "Category", "Volumetric Clouds|Lighting" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09* Multi-scattering approximation: represents how much the phase \n\x09* will become isotropic for each successive octave. Evaluatead per pixel.\n\x09*/" },
		{ "DisplayName", "Multi Scattering Eccentricity" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Multi-scattering approximation: represents how much the phase\nwill become isotropic for each successive octave. Evaluatead per pixel." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringEccentricity = { "MultiScatteringEccentricity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, MultiScatteringEccentricity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringEccentricity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringEccentricity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityA_MetaData[] = {
		{ "Category", "Volumetric Clouds|Noise" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Desc. */" },
		{ "DisplayName", "Noise Shape Intensity A" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Desc." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityA = { "NoiseShapeIntensityA", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, NoiseShapeIntensityA), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityA_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityB_MetaData[] = {
		{ "Category", "Volumetric Clouds|Noise" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Desc. */" },
		{ "DisplayName", "Noise Shape Intensity B" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Desc." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityB = { "NoiseShapeIntensityB", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, NoiseShapeIntensityB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityB_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityC_MetaData[] = {
		{ "Category", "Volumetric Clouds|Noise" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Desc. */" },
		{ "DisplayName", "Noise Shape Intensity C" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Desc." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityC = { "NoiseShapeIntensityC", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, NoiseShapeIntensityC), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityC_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityD_MetaData[] = {
		{ "Category", "Volumetric Clouds|Noise" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Desc. */" },
		{ "DisplayName", "Noise Shape Intensity D" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Desc." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityD = { "NoiseShapeIntensityD", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, NoiseShapeIntensityD), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityD_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityD_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_TurbulenceIntensity_MetaData[] = {
		{ "Category", "Volumetric Clouds|Noise" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Desc. */" },
		{ "DisplayName", "Turbulence Intensity" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Desc." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_TurbulenceIntensity = { "TurbulenceIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorVolumetricCloudSettings, TurbulenceIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_TurbulenceIntensity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_TurbulenceIntensity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusCoverage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusCoverageVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusHeightVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusCoverage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusCoverageVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusHeightVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusCoverage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusCoverageVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusHeightVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusCoverage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusAnvil,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusHeightVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityBottom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityMiddle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityTop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_Albedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_GroundAlbedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_BeersPowderIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_BeersPowderDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_BottomOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_BottomOcclusionHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NightEmissive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseG2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringContribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringEccentricity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewProp_TurbulenceIntensity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorVolumetricCloudSettings",
		Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::PropPointers),
		sizeof(FSkyCreatorVolumetricCloudSettings),
		alignof(FSkyCreatorVolumetricCloudSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorVolumetricCloudSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorVolumetricCloudSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorVolumetricCloudSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorBackgroundCloudSettings;
class UScriptStruct* FSkyCreatorBackgroundCloudSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorBackgroundCloudSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorBackgroundCloudSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings, (UObject*)Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorBackgroundCloudSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorBackgroundCloudSettings.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorBackgroundCloudSettings>()
{
	return FSkyCreatorBackgroundCloudSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundCloudsIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BackgroundCloudsIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundCloudsColorTint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundCloudsColorTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundCloudsLayerA_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BackgroundCloudsLayerA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundCloudsLayerB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BackgroundCloudsLayerB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundCloudsLayerC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BackgroundCloudsLayerC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundCloudsLightningPhase_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BackgroundCloudsLightningPhase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorBackgroundCloudSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsIntensity_MetaData[] = {
		{ "Category", "Background Clouds" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Overall intensity of Background Clouds. */" },
		{ "DisplayName", "Intensity" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Overall intensity of Background Clouds." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsIntensity = { "BackgroundCloudsIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorBackgroundCloudSettings, BackgroundCloudsIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsIntensity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsIntensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsColorTint_MetaData[] = {
		{ "Category", "Background Clouds" },
		{ "Comment", "/** Color Tint of Background Clouds. */" },
		{ "DisplayName", "Color Tint" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Color Tint of Background Clouds." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsColorTint = { "BackgroundCloudsColorTint", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorBackgroundCloudSettings, BackgroundCloudsColorTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsColorTint_MetaData), Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsColorTint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerA_MetaData[] = {
		{ "Category", "Background Clouds" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of 'Layer A' in Background Clouds. */" },
		{ "DisplayName", "Layer A" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Amount of 'Layer A' in Background Clouds." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerA = { "BackgroundCloudsLayerA", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorBackgroundCloudSettings, BackgroundCloudsLayerA), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerA_MetaData), Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerB_MetaData[] = {
		{ "Category", "Background Clouds" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of 'Layer B' in Background Clouds. */" },
		{ "DisplayName", "Layer B" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Amount of 'Layer B' in Background Clouds." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerB = { "BackgroundCloudsLayerB", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorBackgroundCloudSettings, BackgroundCloudsLayerB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerB_MetaData), Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerC_MetaData[] = {
		{ "Category", "Background Clouds" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of 'Layer C' in Background Clouds. */" },
		{ "DisplayName", "Layer C" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Amount of 'Layer C' in Background Clouds." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerC = { "BackgroundCloudsLayerC", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorBackgroundCloudSettings, BackgroundCloudsLayerC), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerC_MetaData), Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLightningPhase_MetaData[] = {
		{ "Category", "Background Clouds" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of Lightning Phase in Background Clouds. */" },
		{ "DisplayName", "Lightning Phase" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Amount of Lightning Phase in Background Clouds." },
		{ "UIMax", "0.999" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLightningPhase = { "BackgroundCloudsLightningPhase", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorBackgroundCloudSettings, BackgroundCloudsLightningPhase), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLightningPhase_MetaData), Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLightningPhase_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsColorTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLightningPhase,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorBackgroundCloudSettings",
		Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::PropPointers),
		sizeof(FSkyCreatorBackgroundCloudSettings),
		alignof(FSkyCreatorBackgroundCloudSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorBackgroundCloudSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorBackgroundCloudSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorBackgroundCloudSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorSkyLightSettings;
class UScriptStruct* FSkyCreatorSkyLightSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorSkyLightSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorSkyLightSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings, (UObject*)Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorSkyLightSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorSkyLightSettings.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorSkyLightSettings>()
{
	return FSkyCreatorSkyLightSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NightIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NightIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerHemisphereColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LowerHemisphereColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudAmbientOcclusionStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudAmbientOcclusionStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorSkyLightSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "Sky Light" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Total energy that the light emits. */" },
		{ "DisplayName", "Intensity" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Total energy that the light emits." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSkyLightSettings, Intensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_Intensity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_Intensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_NightIntensity_MetaData[] = {
		{ "Category", "Sky Light" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Energy that the light emits in the nights. */" },
		{ "DisplayName", "Night Intensity" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Energy that the light emits in the nights." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_NightIntensity = { "NightIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSkyLightSettings, NightIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_NightIntensity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_NightIntensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_LightColor_MetaData[] = {
		{ "Category", "Sky Light" },
		{ "Comment", "/**\n\x09* Filter color of the light. \n\x09* Note that this can change the light's effective intensity.\n\x09*/" },
		{ "DisplayName", "Light Color" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Filter color of the light.\nNote that this can change the light's effective intensity." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSkyLightSettings, LightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_LightColor_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_LightColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_LowerHemisphereColor_MetaData[] = {
		{ "Category", "Sky Light" },
		{ "Comment", "/** Lower Hemisphere Color. */" },
		{ "DisplayName", "Lower Hemisphere Color" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Lower Hemisphere Color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_LowerHemisphereColor = { "LowerHemisphereColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSkyLightSettings, LowerHemisphereColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_LowerHemisphereColor_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_LowerHemisphereColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_CloudAmbientOcclusionStrength_MetaData[] = {
		{ "Category", "Sky Light" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The strength of the ambient occlusion, higher value will block more light. */" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "SliderExponent", "1.000000" },
		{ "ToolTip", "The strength of the ambient occlusion, higher value will block more light." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_CloudAmbientOcclusionStrength = { "CloudAmbientOcclusionStrength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSkyLightSettings, CloudAmbientOcclusionStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_CloudAmbientOcclusionStrength_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_CloudAmbientOcclusionStrength_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_NightIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_LightColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_LowerHemisphereColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_CloudAmbientOcclusionStrength,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorSkyLightSettings",
		Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::PropPointers),
		sizeof(FSkyCreatorSkyLightSettings),
		alignof(FSkyCreatorSkyLightSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorSkyLightSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorSkyLightSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorSkyLightSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorSunLightSettings;
class UScriptStruct* FSkyCreatorSunLightSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorSunLightSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorSunLightSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings, (UObject*)Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorSunLightSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorSunLightSettings.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorSunLightSettings>()
{
	return FSkyCreatorSunLightSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricScatteringIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricScatteringIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtmosphereDiskColorScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AtmosphereDiskColorScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudScatteredLuminanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CloudScatteredLuminanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudShadowStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudShadowStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudShadowOnAtmosphereStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudShadowOnAtmosphereStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudShadowOnSurfaceStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudShadowOnSurfaceStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorSunLightSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "Sun Light" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Maximum illumination from the light in lux. */" },
		{ "DisplayName", "Intensity" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Maximum illumination from the light in lux." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSunLightSettings, Intensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_Intensity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_Intensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_LightColor_MetaData[] = {
		{ "Category", "Sun Light" },
		{ "Comment", "/**\n\x09* Filter color of the light.\n\x09* Note that this can change the light's effective intensity.\n\x09*/" },
		{ "DisplayName", "Light Color" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Filter color of the light.\nNote that this can change the light's effective intensity." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSunLightSettings, LightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_LightColor_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_LightColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_Temperature_MetaData[] = {
		{ "Category", "Sun Light" },
		{ "ClampMax", "12000.0" },
		{ "ClampMin", "1700.0" },
		{ "Comment", "/**\n\x09* Color temperature in Kelvin of the blackbody illuminant.\n\x09* White (D65) is 6500K.\n\x09*/" },
		{ "DisplayName", "Temperature" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Color temperature in Kelvin of the blackbody illuminant.\nWhite (D65) is 6500K." },
		{ "UIMax", "12000.0" },
		{ "UIMin", "1700.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSunLightSettings, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_Temperature_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_Temperature_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_VolumetricScatteringIntensity_MetaData[] = {
		{ "Category", "Sun Light" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09* Intensity of the volumetric scattering from sun.\n\x09* This scales Intensity and Light Color.\n\x09*/" },
		{ "DisplayName", "Volumetric Scattering Intensity" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Intensity of the volumetric scattering from sun.\nThis scales Intensity and Light Color." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_VolumetricScatteringIntensity = { "VolumetricScatteringIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSunLightSettings, VolumetricScatteringIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_VolumetricScatteringIntensity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_VolumetricScatteringIntensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_AtmosphereDiskColorScale_MetaData[] = {
		{ "Category", "Sun Light|Atmosphere And Cloud" },
		{ "Comment", "/** A color multiplied with the sun disk luminance. */" },
		{ "DisplayName", "Atmosphere Disk Color Scale" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "A color multiplied with the sun disk luminance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_AtmosphereDiskColorScale = { "AtmosphereDiskColorScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSunLightSettings, AtmosphereDiskColorScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_AtmosphereDiskColorScale_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_AtmosphereDiskColorScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudScatteredLuminanceScale_MetaData[] = {
		{ "Category", "Sun Light|Atmosphere And Cloud" },
		{ "Comment", "/** Scales the lights contribution when scattered in cloud participating media. */" },
		{ "DisplayName", "Cloud Scattered Luminance Scale" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Scales the lights contribution when scattered in cloud participating media." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudScatteredLuminanceScale = { "CloudScatteredLuminanceScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSunLightSettings, CloudScatteredLuminanceScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudScatteredLuminanceScale_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudScatteredLuminanceScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowStrength_MetaData[] = {
		{ "Category", "Sun Light|Atmosphere And Cloud" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The overall strength of the cloud shadow, higher value will block more light. */" },
		{ "DisplayName", "Cloud Shadow Strength" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "The overall strength of the cloud shadow, higher value will block more light." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowStrength = { "CloudShadowStrength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSunLightSettings, CloudShadowStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowStrength_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowStrength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowOnAtmosphereStrength_MetaData[] = {
		{ "Category", "Sun Light|Atmosphere And Cloud" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The strength of the shadow on atmosphere. Disabled when 0. */" },
		{ "DisplayName", "Cloud Shadow on Atmosphere Strength" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "The strength of the shadow on atmosphere. Disabled when 0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowOnAtmosphereStrength = { "CloudShadowOnAtmosphereStrength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSunLightSettings, CloudShadowOnAtmosphereStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowOnAtmosphereStrength_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowOnAtmosphereStrength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowOnSurfaceStrength_MetaData[] = {
		{ "Category", "Sun Light|Atmosphere And Cloud" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The strength of the shadow on opaque and transparent meshes. Disabled when 0. */" },
		{ "DisplayName", "Cloud Shadow on Surface Strength" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "The strength of the shadow on opaque and transparent meshes. Disabled when 0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowOnSurfaceStrength = { "CloudShadowOnSurfaceStrength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorSunLightSettings, CloudShadowOnSurfaceStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowOnSurfaceStrength_MetaData), Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowOnSurfaceStrength_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_LightColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_Temperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_VolumetricScatteringIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_AtmosphereDiskColorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudScatteredLuminanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowOnAtmosphereStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowOnSurfaceStrength,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorSunLightSettings",
		Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::PropPointers),
		sizeof(FSkyCreatorSunLightSettings),
		alignof(FSkyCreatorSunLightSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorSunLightSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorSunLightSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorSunLightSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorMoonLightSettings;
class UScriptStruct* FSkyCreatorMoonLightSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorMoonLightSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorMoonLightSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings, (UObject*)Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorMoonLightSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorMoonLightSettings.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorMoonLightSettings>()
{
	return FSkyCreatorMoonLightSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricScatteringIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricScatteringIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtmosphereDiskColorScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AtmosphereDiskColorScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudScatteredLuminanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CloudScatteredLuminanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudShadowStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudShadowStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudShadowOnAtmosphereStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudShadowOnAtmosphereStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudShadowOnSurfaceStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudShadowOnSurfaceStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorMoonLightSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "Moon Light" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Maximum illumination from the light in lux. */" },
		{ "DisplayName", "Intensity" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Maximum illumination from the light in lux." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMoonLightSettings, Intensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_Intensity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_Intensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_LightColor_MetaData[] = {
		{ "Category", "Moon Light" },
		{ "Comment", "/**\n\x09* Filter color of the light.\n\x09* Note that this can change the light's effective intensity.\n\x09*/" },
		{ "DisplayName", "Light Color" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Filter color of the light.\nNote that this can change the light's effective intensity." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMoonLightSettings, LightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_LightColor_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_LightColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_Temperature_MetaData[] = {
		{ "Category", "Moon Light" },
		{ "ClampMax", "12000.0" },
		{ "ClampMin", "1700.0" },
		{ "Comment", "/**\n\x09* Color temperature in Kelvin of the blackbody illuminant.\n\x09* White (D65) is 6500K.\n\x09*/" },
		{ "DisplayName", "Temperature" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Color temperature in Kelvin of the blackbody illuminant.\nWhite (D65) is 6500K." },
		{ "UIMax", "12000.0" },
		{ "UIMin", "1700.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMoonLightSettings, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_Temperature_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_Temperature_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_VolumetricScatteringIntensity_MetaData[] = {
		{ "Category", "Moon Light" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09* Intensity of the volumetric scattering from moon.\n\x09* This scales Intensity and Light Color.\n\x09*/" },
		{ "DisplayName", "Volumetric Scattering Intensity" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Intensity of the volumetric scattering from moon.\nThis scales Intensity and Light Color." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_VolumetricScatteringIntensity = { "VolumetricScatteringIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMoonLightSettings, VolumetricScatteringIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_VolumetricScatteringIntensity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_VolumetricScatteringIntensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_AtmosphereDiskColorScale_MetaData[] = {
		{ "Category", "Moon Light|Atmosphere And Cloud" },
		{ "Comment", "/** A color multiplied with the sun disk luminance. */" },
		{ "DisplayName", "Atmosphere Disk Color Scale" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "A color multiplied with the sun disk luminance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_AtmosphereDiskColorScale = { "AtmosphereDiskColorScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMoonLightSettings, AtmosphereDiskColorScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_AtmosphereDiskColorScale_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_AtmosphereDiskColorScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudScatteredLuminanceScale_MetaData[] = {
		{ "Category", "Moon Light|Atmosphere And Cloud" },
		{ "Comment", "/** Scales the lights contribution when scattered in cloud participating media. */" },
		{ "DisplayName", "Cloud Scattered Luminance Scale" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Scales the lights contribution when scattered in cloud participating media." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudScatteredLuminanceScale = { "CloudScatteredLuminanceScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMoonLightSettings, CloudScatteredLuminanceScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudScatteredLuminanceScale_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudScatteredLuminanceScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowStrength_MetaData[] = {
		{ "Category", "Moon Light|Atmosphere And Cloud" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The overall strength of the cloud shadow, higher value will block more light. */" },
		{ "DisplayName", "Cloud Shadow Strength" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "The overall strength of the cloud shadow, higher value will block more light." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowStrength = { "CloudShadowStrength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMoonLightSettings, CloudShadowStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowStrength_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowStrength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowOnAtmosphereStrength_MetaData[] = {
		{ "Category", "Moon Light|Atmosphere And Cloud" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The strength of the shadow on atmosphere. Disabled when 0. */" },
		{ "DisplayName", "Cloud Shadow on Atmosphere Strength" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "The strength of the shadow on atmosphere. Disabled when 0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowOnAtmosphereStrength = { "CloudShadowOnAtmosphereStrength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMoonLightSettings, CloudShadowOnAtmosphereStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowOnAtmosphereStrength_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowOnAtmosphereStrength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowOnSurfaceStrength_MetaData[] = {
		{ "Category", "Moon Light|Atmosphere And Cloud" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The strength of the shadow on opaque and transparent meshes. Disabled when 0. */" },
		{ "DisplayName", "Cloud Shadow on Surface Strength" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "The strength of the shadow on opaque and transparent meshes. Disabled when 0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowOnSurfaceStrength = { "CloudShadowOnSurfaceStrength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMoonLightSettings, CloudShadowOnSurfaceStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowOnSurfaceStrength_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowOnSurfaceStrength_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_LightColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_Temperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_VolumetricScatteringIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_AtmosphereDiskColorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudScatteredLuminanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowOnAtmosphereStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowOnSurfaceStrength,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorMoonLightSettings",
		Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::PropPointers),
		sizeof(FSkyCreatorMoonLightSettings),
		alignof(FSkyCreatorMoonLightSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorMoonLightSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorMoonLightSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorMoonLightSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorExponentialHeightFogSettings;
class UScriptStruct* FSkyCreatorExponentialHeightFogSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorExponentialHeightFogSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorExponentialHeightFogSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings, (UObject*)Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorExponentialHeightFogSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorExponentialHeightFogSettings.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorExponentialHeightFogSettings>()
{
	return FSkyCreatorExponentialHeightFogSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogDensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FogDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogHeightFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FogHeightFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogInscatteringColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FogInscatteringColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogStartDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FogStartDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondFogDensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondFogDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondFogHeightFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondFogHeightFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringExponent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionalInscatteringExponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringStartDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionalInscatteringStartDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionalInscatteringColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogScatteringDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogScatteringDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogAlbedo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumetricFogAlbedo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogEmissive_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumetricFogEmissive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogExtinctionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogExtinctionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogStartDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogStartDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogNearFadeInDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogNearFadeInDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorExponentialHeightFogSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogDensity_MetaData[] = {
		{ "Category", "Height Fog|Fog" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Global density factor of fog. */" },
		{ "DisplayName", "Fog Density" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Global density factor of fog." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogDensity = { "FogDensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, FogDensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogDensity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogDensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogHeightFalloff_MetaData[] = {
		{ "Category", "Height Fog|Fog" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/**\n\x09* Height density factor, controls how the density increases as height decreases.\n\x09* Smaller values make the visible transition larger.\n\x09*/" },
		{ "DisplayName", "Fog Height Falloff" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Height density factor, controls how the density increases as height decreases.\nSmaller values make the visible transition larger." },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogHeightFalloff = { "FogHeightFalloff", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, FogHeightFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogHeightFalloff_MetaData), Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogHeightFalloff_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogInscatteringColor_MetaData[] = {
		{ "Category", "Height Fog|Fog" },
		{ "Comment", "/** Fog Inscattering Color. */" },
		{ "DisplayName", "Fog Inscattering Color" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Fog Inscattering Color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogInscatteringColor = { "FogInscatteringColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, FogInscatteringColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogInscatteringColor_MetaData), Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogInscatteringColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogStartDistance_MetaData[] = {
		{ "Category", "Height Fog|Fog" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Distance from the camera that the fog will start. */" },
		{ "DisplayName", "Fog Start Distance" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Distance from the camera that the fog will start." },
		{ "UIMax", "5000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogStartDistance = { "FogStartDistance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, FogStartDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogStartDistance_MetaData), Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogStartDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogDensity_MetaData[] = {
		{ "Category", "Height Fog|Second Fog" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Global density factor of secondary fog. */" },
		{ "DisplayName", "Second Fog Density" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Global density factor of secondary fog." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogDensity = { "SecondFogDensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, SecondFogDensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogDensity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogDensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogHeightFalloff_MetaData[] = {
		{ "Category", "Height Fog|Second Fog" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/**\n\x09* Height density factor, controls how the density increases as height decreases.\n\x09* Smaller values make the visible transition larger.\n\x09*/" },
		{ "DisplayName", "Second Fog Height Falloff" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Height density factor, controls how the density increases as height decreases.\nSmaller values make the visible transition larger." },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogHeightFalloff = { "SecondFogHeightFalloff", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, SecondFogHeightFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogHeightFalloff_MetaData), Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogHeightFalloff_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringExponent_MetaData[] = {
		{ "Category", "Height Fog|Directional Inscattering" },
		{ "ClampMax", "64.0" },
		{ "ClampMin", "2.0" },
		{ "Comment", "/**\n\x09* Controls the size of the directional inscattering cone, which is used to approximate inscattering from a directional light.\n\x09* Note: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used.\n\x09*/" },
		{ "DisplayName", "Directional Inscattering Exponent" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Controls the size of the directional inscattering cone, which is used to approximate inscattering from a directional light.\nNote: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used." },
		{ "UIMax", "64.0" },
		{ "UIMin", "2.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringExponent = { "DirectionalInscatteringExponent", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, DirectionalInscatteringExponent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringExponent_MetaData), Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringExponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData[] = {
		{ "Category", "Height Fog|Directional Inscattering" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09* Controls the start distance from the viewer of the directional inscattering, which is used to approximate inscattering from a directional light.\n\x09* Note: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used.\n\x09*/" },
		{ "DisplayName", "Directional Inscattering Start Distance" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Controls the start distance from the viewer of the directional inscattering, which is used to approximate inscattering from a directional light.\nNote: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringStartDistance = { "DirectionalInscatteringStartDistance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, DirectionalInscatteringStartDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData), Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringColor_MetaData[] = {
		{ "Category", "Height Fog|Directional Inscattering" },
		{ "Comment", "/**\n\x09* Controls the color of the directional inscattering, which is used to approximate inscattering from a directional light.\n\x09* Note: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used.\n\x09*/" },
		{ "DisplayName", "Directional Inscattering Color" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Controls the color of the directional inscattering, which is used to approximate inscattering from a directional light.\nNote: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringColor = { "DirectionalInscatteringColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, DirectionalInscatteringColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringColor_MetaData), Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogScatteringDistribution_MetaData[] = {
		{ "Category", "Height Fog|Volumetric Fog" },
		{ "ClampMax", "0.9" },
		{ "ClampMin", "-0.9" },
		{ "Comment", "/**\n\x09* Controls the scattering phase function - how much incoming light scatters in various directions.\n\x09* A distribution value of 0 scatters equally in all directions, while .9 scatters predominantly in the light direction.\n\x09* In order to have visible volumetric fog light shafts from the side, the distribution will need to be closer to 0.\n\x09*/" },
		{ "DisplayName", "Volumetric Fog Scattering Distribution" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Controls the scattering phase function - how much incoming light scatters in various directions.\nA distribution value of 0 scatters equally in all directions, while .9 scatters predominantly in the light direction.\nIn order to have visible volumetric fog light shafts from the side, the distribution will need to be closer to 0." },
		{ "UIMax", "0.9" },
		{ "UIMin", "-0.9" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogScatteringDistribution = { "VolumetricFogScatteringDistribution", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, VolumetricFogScatteringDistribution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogScatteringDistribution_MetaData), Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogScatteringDistribution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogAlbedo_MetaData[] = {
		{ "Category", "Height Fog|Volumetric Fog" },
		{ "Comment", "/**\n\x09* The height fog particle reflectiveness used by volumetric fog.\n\x09* Water particles in air have an albedo near white, while dust has slightly darker value.\n\x09*/" },
		{ "DisplayName", "Volumetric Fog Albedo" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "The height fog particle reflectiveness used by volumetric fog.\nWater particles in air have an albedo near white, while dust has slightly darker value." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogAlbedo = { "VolumetricFogAlbedo", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, VolumetricFogAlbedo), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogAlbedo_MetaData), Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogAlbedo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogEmissive_MetaData[] = {
		{ "Category", "Height Fog|Volumetric Fog" },
		{ "Comment", "/**\n\x09* Light emitted by height fog.  This is a density so more light is emitted the further you are looking through the fog.\n\x09* In most cases skylight is a better choice, however right now volumetric fog does not support precomputed lighting,\n\x09* So stationary skylights are unshadowed and static skylights don't affect volumetric fog at all.\n\x09*/" },
		{ "DisplayName", "Volumetric Fog Emissive" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Light emitted by height fog.  This is a density so more light is emitted the further you are looking through the fog.\nIn most cases skylight is a better choice, however right now volumetric fog does not support precomputed lighting,\nSo stationary skylights are unshadowed and static skylights don't affect volumetric fog at all." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogEmissive = { "VolumetricFogEmissive", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, VolumetricFogEmissive), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogEmissive_MetaData), Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogEmissive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogExtinctionScale_MetaData[] = {
		{ "Category", "Height Fog|Volumetric Fog" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/**\n\x09* Scales the height fog particle extinction amount used by volumetric fog.\n\x09* Values larger than 1 cause fog particles everywhere absorb more light.\n\x09*/" },
		{ "DisplayName", "Volumetric Fog Extinction Scale" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Scales the height fog particle extinction amount used by volumetric fog.\nValues larger than 1 cause fog particles everywhere absorb more light." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogExtinctionScale = { "VolumetricFogExtinctionScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, VolumetricFogExtinctionScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogExtinctionScale_MetaData), Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogExtinctionScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogStartDistance_MetaData[] = {
		{ "Category", "Height Fog|Volumetric Fog" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09* Distance from the camera that the volumetric fog will start.\n\x09*/" },
		{ "DisplayName", "Volumetric Fog Start Distance" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Distance from the camera that the volumetric fog will start." },
		{ "UIMax", "5000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogStartDistance = { "VolumetricFogStartDistance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, VolumetricFogStartDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogStartDistance_MetaData), Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogStartDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogNearFadeInDistance_MetaData[] = {
		{ "Category", "Height Fog|Volumetric Fog" },
		{ "Comment", "/** \n\x09 * Distance over which volumetric fog will fade in from the start distance.\n\x09 */" },
		{ "DisplayName", "Volumetric Fog Near Fade In Distance" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Distance over which volumetric fog will fade in from the start distance." },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogNearFadeInDistance = { "VolumetricFogNearFadeInDistance", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, VolumetricFogNearFadeInDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogNearFadeInDistance_MetaData), Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogNearFadeInDistance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogHeightFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogInscatteringColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogStartDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogHeightFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringStartDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogScatteringDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogAlbedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogEmissive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogExtinctionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogStartDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogNearFadeInDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorExponentialHeightFogSettings",
		Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::PropPointers),
		sizeof(FSkyCreatorExponentialHeightFogSettings),
		alignof(FSkyCreatorExponentialHeightFogSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorExponentialHeightFogSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorExponentialHeightFogSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorExponentialHeightFogSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorStarMapSettings;
class UScriptStruct* FSkyCreatorStarMapSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorStarMapSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorStarMapSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings, (UObject*)Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorStarMapSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorStarMapSettings.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorStarMapSettings>()
{
	return FSkyCreatorStarMapSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarMapIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StarMapIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarMapColorTint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StarMapColorTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarMapTwinkleIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StarMapTwinkleIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarMapTwinkleSaturation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StarMapTwinkleSaturation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarMapTwinkleSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StarMapTwinkleSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarMapHorizonThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StarMapHorizonThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarMapAtmosphereThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StarMapAtmosphereThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NightHorizonColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NightHorizonColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NightZenithColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NightZenithColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorStarMapSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapIntensity_MetaData[] = {
		{ "Category", "Star Map" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Overall brightness of the Star Map. */" },
		{ "DisplayName", "Star Map Intensity" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Overall brightness of the Star Map." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapIntensity = { "StarMapIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorStarMapSettings, StarMapIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapIntensity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapIntensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapColorTint_MetaData[] = {
		{ "Category", "Star Map" },
		{ "Comment", "/** Overall color tint of the Star Map. */" },
		{ "DisplayName", "Star Map Color Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Overall color tint of the Star Map." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapColorTint = { "StarMapColorTint", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorStarMapSettings, StarMapColorTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapColorTint_MetaData), Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapColorTint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleIntensity_MetaData[] = {
		{ "Category", "Star Map" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Intensity of twinkling stars. */" },
		{ "DisplayName", "Star Map Twinkle Intensity" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Intensity of twinkling stars." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleIntensity = { "StarMapTwinkleIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorStarMapSettings, StarMapTwinkleIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleIntensity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleIntensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSaturation_MetaData[] = {
		{ "Category", "Star Map" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Saturation of twinkling stars. */" },
		{ "DisplayName", "Star Map Twinkle Saturation" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Saturation of twinkling stars." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSaturation = { "StarMapTwinkleSaturation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorStarMapSettings, StarMapTwinkleSaturation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSaturation_MetaData), Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSaturation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSpeed_MetaData[] = {
		{ "Category", "Star Map" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Twinkle speed of stars. */" },
		{ "DisplayName", "Star Map Twinkle Speed" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Twinkle speed of stars." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSpeed = { "StarMapTwinkleSpeed", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorStarMapSettings, StarMapTwinkleSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSpeed_MetaData), Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapHorizonThreshold_MetaData[] = {
		{ "Category", "Star Map" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09* Indicates how strong the star map can be faded into horizon.\n\x09* Lower values cause more stars appear at horizon.\n\x09*/" },
		{ "DisplayName", "Star Map Horizon Threshold" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Indicates how strong the star map can be faded into horizon.\nLower values cause more stars appear at horizon." },
		{ "UIMax", "16.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapHorizonThreshold = { "StarMapHorizonThreshold", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorStarMapSettings, StarMapHorizonThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapHorizonThreshold_MetaData), Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapHorizonThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapAtmosphereThreshold_MetaData[] = {
		{ "Category", "Star Map" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09* Indicates how strong the star map can be faded into atmosphere.\n\x09* Lower values cause more stars appear at brighter points in atmosphere, e.g. at daytime.\n\x09*/" },
		{ "DisplayName", "Star Map Atmosphere Threshold" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Indicates how strong the star map can be faded into atmosphere.\nLower values cause more stars appear at brighter points in atmosphere, e.g. at daytime." },
		{ "UIMax", "16.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapAtmosphereThreshold = { "StarMapAtmosphereThreshold", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorStarMapSettings, StarMapAtmosphereThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapAtmosphereThreshold_MetaData), Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapAtmosphereThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_NightHorizonColor_MetaData[] = {
		{ "Category", "Star Map" },
		{ "Comment", "/** Color tint of the horizon. */" },
		{ "DisplayName", "Night Horizon Color" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Color tint of the horizon." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_NightHorizonColor = { "NightHorizonColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorStarMapSettings, NightHorizonColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_NightHorizonColor_MetaData), Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_NightHorizonColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_NightZenithColor_MetaData[] = {
		{ "Category", "Star Map" },
		{ "Comment", "/** Color tint of the zenith. */" },
		{ "DisplayName", "Night Zenith Color" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Color tint of the zenith." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_NightZenithColor = { "NightZenithColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorStarMapSettings, NightZenithColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_NightZenithColor_MetaData), Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_NightZenithColor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapColorTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSaturation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapHorizonThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapAtmosphereThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_NightHorizonColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_NightZenithColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorStarMapSettings",
		Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::PropPointers),
		sizeof(FSkyCreatorStarMapSettings),
		alignof(FSkyCreatorStarMapSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorStarMapSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorStarMapSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorStarMapSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorWeatherFXSettings;
class UScriptStruct* FSkyCreatorWeatherFXSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorWeatherFXSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorWeatherFXSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings, (UObject*)Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorWeatherFXSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorWeatherFXSettings.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorWeatherFXSettings>()
{
	return FSkyCreatorWeatherFXSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RainColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainGravity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainLifetimeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainLifetimeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainLifetimeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainLifetimeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainSizeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainSizeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainSizeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainSizeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainMaskHardness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainMaskHardness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainSplashColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RainSplashColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainSplashLifetimeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainSplashLifetimeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainSplashLifetimeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainSplashLifetimeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainSplashSizeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainSplashSizeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainSplashSizeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainSplashSizeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainSplashVolumetricScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainSplashVolumetricScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainSplashVolumetricDensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainSplashVolumetricDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SnowColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowType_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowGravity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowTurbulence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowTurbulence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowLifetimeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowLifetimeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowLifetimeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowLifetimeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowSizeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowSizeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowSizeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowSizeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowMaskHardness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowMaskHardness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableLightnings_MetaData[];
#endif
		static void NewProp_EnableLightnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableLightnings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningSpawnIntervalMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningSpawnIntervalMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningSpawnIntervalMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningSpawnIntervalMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningColorMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightningColorMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningColorMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightningColorMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningLifetime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningLifetime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBoltSpawnChance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBoltSpawnChance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBoltWidthMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBoltWidthMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBoltWidthMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBoltWidthMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBoltLengthMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBoltLengthMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBoltLengthMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBoltLengthMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBoltCurveFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBoltCurveFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBoltCurveStrengthMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBoltCurveStrengthMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBoltCurveStrengthMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBoltCurveStrengthMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBoltJitterStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBoltJitterStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBranchSpawnChance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBranchSpawnChance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBranchScaleMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBranchScaleMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBranchScaleMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBranchScaleMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainbowAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainbowAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainbowColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RainbowColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainbowRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainbowRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainbowThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainbowThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryRainbowColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryRainbowColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryRainbowRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondaryRainbowRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryRainbowThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondaryRainbowThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricWindAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricWindAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricWindDensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricWindDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricWindColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumetricWindColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricWindFogDensityContribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricWindFogDensityContribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricWindGravity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricWindGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricWindPrecipitationGravityWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricWindPrecipitationGravityWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricMistAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricMistAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricMistDensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricMistDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricMistColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumetricMistColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricMistFogDensityContribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricMistFogDensityContribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricMistGravity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricMistGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricMistPrecipitationGravityWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricMistPrecipitationGravityWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorWeatherFXSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainAmount_MetaData[] = {
		{ "Category", "Weather FX|Rain" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Rain Precipitation Amount. */" },
		{ "DisplayName", "Rain Amount" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Rain Precipitation Amount." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainAmount = { "RainAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, RainAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainAmount_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainColor_MetaData[] = {
		{ "Category", "Weather FX|Rain" },
		{ "Comment", "/** Rain Color. */" },
		{ "DisplayName", "Rain Color" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Rain Color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainColor = { "RainColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, RainColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainColor_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainGravity_MetaData[] = {
		{ "Category", "Weather FX|Rain" },
		{ "Comment", "/** Gravity of a biggest sized raindrop. */" },
		{ "DisplayName", "Rain Gravity" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Gravity of a biggest sized raindrop." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainGravity = { "RainGravity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, RainGravity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainGravity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainGravity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainLifetimeMin_MetaData[] = {
		{ "Category", "Weather FX|Rain" },
		{ "Comment", "/** Minimum lifetime of a single raindrop. Can affect the performance. */" },
		{ "DisplayName", "Rain Lifetime Min" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Minimum lifetime of a single raindrop. Can affect the performance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainLifetimeMin = { "RainLifetimeMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, RainLifetimeMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainLifetimeMin_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainLifetimeMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainLifetimeMax_MetaData[] = {
		{ "Category", "Weather FX|Rain" },
		{ "Comment", "/** Maximum lifetime of a single raindrop. Can affect the performance. */" },
		{ "DisplayName", "Rain Lifetime Max" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Maximum lifetime of a single raindrop. Can affect the performance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainLifetimeMax = { "RainLifetimeMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, RainLifetimeMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainLifetimeMax_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainLifetimeMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSizeMin_MetaData[] = {
		{ "Category", "Weather FX|Rain" },
		{ "Comment", "/** Minimum size of a single raindrop. */" },
		{ "DisplayName", "Rain Size Min" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Minimum size of a single raindrop." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSizeMin = { "RainSizeMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, RainSizeMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSizeMin_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSizeMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSizeMax_MetaData[] = {
		{ "Category", "Weather FX|Rain" },
		{ "Comment", "/** Maximum size of a single raindrop. */" },
		{ "DisplayName", "Rain Size Max" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Maximum size of a single raindrop." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSizeMax = { "RainSizeMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, RainSizeMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSizeMax_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSizeMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainMaskHardness_MetaData[] = {
		{ "Category", "Weather FX|Rain" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Mask Hardness for snow particles. Controls how 'soft' they look. */" },
		{ "DisplayName", "Rain Mask Hardness" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Mask Hardness for snow particles. Controls how 'soft' they look." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainMaskHardness = { "RainMaskHardness", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, RainMaskHardness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainMaskHardness_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainMaskHardness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashColor_MetaData[] = {
		{ "Category", "Weather FX|Rain Splash" },
		{ "Comment", "/** Rain Splash Color. */" },
		{ "DisplayName", "Rain Splash Color" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Rain Splash Color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashColor = { "RainSplashColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, RainSplashColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashColor_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashLifetimeMin_MetaData[] = {
		{ "Category", "Weather FX|Rain Splash" },
		{ "Comment", "/** Minimum lifetime of a single rain splash. Can affect the performance. */" },
		{ "DisplayName", "Rain Splash Lifetime Min" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Minimum lifetime of a single rain splash. Can affect the performance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashLifetimeMin = { "RainSplashLifetimeMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, RainSplashLifetimeMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashLifetimeMin_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashLifetimeMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashLifetimeMax_MetaData[] = {
		{ "Category", "Weather FX|Rain Splash" },
		{ "Comment", "/** Maximum lifetime of a single rain splash. Can affect the performance. */" },
		{ "DisplayName", "Rain Splash Lifetime Max" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Maximum lifetime of a single rain splash. Can affect the performance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashLifetimeMax = { "RainSplashLifetimeMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, RainSplashLifetimeMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashLifetimeMax_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashLifetimeMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashSizeMin_MetaData[] = {
		{ "Category", "Weather FX|Rain Splash" },
		{ "Comment", "/** Minimum size of a rain splash. */" },
		{ "DisplayName", "Rain Splash Size Min" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Minimum size of a rain splash." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashSizeMin = { "RainSplashSizeMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, RainSplashSizeMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashSizeMin_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashSizeMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashSizeMax_MetaData[] = {
		{ "Category", "Weather FX|Rain Splash" },
		{ "Comment", "/** Maximum size of a rain splash. */" },
		{ "DisplayName", "Rain Splash Size Max" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Maximum size of a rain splash." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashSizeMax = { "RainSplashSizeMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, RainSplashSizeMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashSizeMax_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashSizeMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashVolumetricScale_MetaData[] = {
		{ "Category", "Weather FX|Rain Splash" },
		{ "Comment", "/** Scale. */" },
		{ "DisplayName", "Rain Splash Volumetric Scale" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Scale." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashVolumetricScale = { "RainSplashVolumetricScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, RainSplashVolumetricScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashVolumetricScale_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashVolumetricScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashVolumetricDensity_MetaData[] = {
		{ "Category", "Weather FX|Rain Splash" },
		{ "Comment", "/** Density. */" },
		{ "DisplayName", "Rain Splash Volumetric Density" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Density." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashVolumetricDensity = { "RainSplashVolumetricDensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, RainSplashVolumetricDensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashVolumetricDensity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashVolumetricDensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowAmount_MetaData[] = {
		{ "Category", "Weather FX|Snow" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Snow Precipitation Amount. */" },
		{ "DisplayName", "Snow Amount" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Snow Precipitation Amount." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowAmount = { "SnowAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, SnowAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowAmount_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowColor_MetaData[] = {
		{ "Category", "Weather FX|Snow" },
		{ "Comment", "/** Snow Color. */" },
		{ "DisplayName", "Snow Color" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Snow Color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowColor = { "SnowColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, SnowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowColor_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowType_MetaData[] = {
		{ "Category", "Weather FX|Snow" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Snow flake Type. */" },
		{ "DisplayName", "Snow Type" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Snow flake Type." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowType = { "SnowType", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, SnowType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowType_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowGravity_MetaData[] = {
		{ "Category", "Weather FX|Snow" },
		{ "Comment", "/** Gravity of a biggest sized snowflake. */" },
		{ "DisplayName", "Snow Gravity" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Gravity of a biggest sized snowflake." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowGravity = { "SnowGravity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, SnowGravity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowGravity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowGravity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowTurbulence_MetaData[] = {
		{ "Category", "Weather FX|Snow" },
		{ "Comment", "/** Snow turbulence. */" },
		{ "DisplayName", "Snow Turbulence" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Snow turbulence." },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowTurbulence = { "SnowTurbulence", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, SnowTurbulence), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowTurbulence_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowTurbulence_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowLifetimeMin_MetaData[] = {
		{ "Category", "Weather FX|Snow" },
		{ "Comment", "/** Minimum lifetime of a single snowflake. Can affect the performance. */" },
		{ "DisplayName", "Snow Lifetime Min" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Minimum lifetime of a single snowflake. Can affect the performance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowLifetimeMin = { "SnowLifetimeMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, SnowLifetimeMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowLifetimeMin_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowLifetimeMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowLifetimeMax_MetaData[] = {
		{ "Category", "Weather FX|Snow" },
		{ "Comment", "/** Maximum lifetime of a single snowflake. Can affect the performance. */" },
		{ "DisplayName", "Snow Lifetime Max" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Maximum lifetime of a single snowflake. Can affect the performance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowLifetimeMax = { "SnowLifetimeMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, SnowLifetimeMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowLifetimeMax_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowLifetimeMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowSizeMin_MetaData[] = {
		{ "Category", "Weather FX|Snow" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Minimum size of a single snowflake. */" },
		{ "DisplayName", "Snow Size Min" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Minimum size of a single snowflake." },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowSizeMin = { "SnowSizeMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, SnowSizeMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowSizeMin_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowSizeMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowSizeMax_MetaData[] = {
		{ "Category", "Weather FX|Snow" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Maximum size of a single snowflake. */" },
		{ "DisplayName", "Snow Size Max" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Maximum size of a single snowflake." },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowSizeMax = { "SnowSizeMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, SnowSizeMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowSizeMax_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowSizeMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowMaskHardness_MetaData[] = {
		{ "Category", "Weather FX|Snow" },
		{ "Comment", "/** Mask Hardness for snow particles. Controls how 'soft' they look. */" },
		{ "DisplayName", "Snow Mask Hardness" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Mask Hardness for snow particles. Controls how 'soft' they look." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowMaskHardness = { "SnowMaskHardness", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, SnowMaskHardness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowMaskHardness_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowMaskHardness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_EnableLightnings_MetaData[] = {
		{ "Category", "Weather FX|Lightnings" },
		{ "Comment", "/** Whether to enable Lightnings. */" },
		{ "DisplayName", "Enable Lightnings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Whether to enable Lightnings." },
	};
#endif
	void Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_EnableLightnings_SetBit(void* Obj)
	{
		((FSkyCreatorWeatherFXSettings*)Obj)->EnableLightnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_EnableLightnings = { "EnableLightnings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSkyCreatorWeatherFXSettings), &Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_EnableLightnings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_EnableLightnings_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_EnableLightnings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningSpawnIntervalMin_MetaData[] = {
		{ "Category", "Weather FX|Lightnings" },
		{ "Comment", "/** Minimum interval to randomly spawn Lightning in seconds. */" },
		{ "DisplayName", "Lightning Spawn Interval Min" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Minimum interval to randomly spawn Lightning in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningSpawnIntervalMin = { "LightningSpawnIntervalMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, LightningSpawnIntervalMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningSpawnIntervalMin_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningSpawnIntervalMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningSpawnIntervalMax_MetaData[] = {
		{ "Category", "Weather FX|Lightnings" },
		{ "Comment", "/** Maximum interval to randomly spawn Lightning in seconds. */" },
		{ "DisplayName", "Lightning Spawn Interval Max" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Maximum interval to randomly spawn Lightning in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningSpawnIntervalMax = { "LightningSpawnIntervalMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, LightningSpawnIntervalMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningSpawnIntervalMax_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningSpawnIntervalMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningColorMin_MetaData[] = {
		{ "Category", "Weather FX|Lightnings" },
		{ "Comment", "/** Minimum Lightning color. */" },
		{ "DisplayName", "Lightning Color Min" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Minimum Lightning color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningColorMin = { "LightningColorMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, LightningColorMin), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningColorMin_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningColorMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningColorMax_MetaData[] = {
		{ "Category", "Weather FX|Lightnings" },
		{ "Comment", "/** Maximum Lightning color. */" },
		{ "DisplayName", "Lightning Color Max" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Maximum Lightning color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningColorMax = { "LightningColorMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, LightningColorMax), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningColorMax_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningColorMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningLifetime_MetaData[] = {
		{ "Category", "Weather FX|Lightnings" },
		{ "Comment", "/** Lightning lifetime in seconds. */" },
		{ "DisplayName", "Lightning Lifetime" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Lightning lifetime in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningLifetime = { "LightningLifetime", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, LightningLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningLifetime_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningLifetime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltSpawnChance_MetaData[] = {
		{ "Category", "Weather FX|Lightnings|Lightning Bolt" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Chance of spawning a Lightning Bolt when spawning a Lightning. */" },
		{ "DisplayName", "Lightning Bolt Spawn Chance" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Chance of spawning a Lightning Bolt when spawning a Lightning." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltSpawnChance = { "LightningBoltSpawnChance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, LightningBoltSpawnChance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltSpawnChance_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltSpawnChance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltWidthMin_MetaData[] = {
		{ "Category", "Weather FX|Lightnings|Lightning Bolt" },
		{ "Comment", "/** Minimum width of a Lightning Bolt. */" },
		{ "DisplayName", "Lightning Bolt Width Min" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Minimum width of a Lightning Bolt." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltWidthMin = { "LightningBoltWidthMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, LightningBoltWidthMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltWidthMin_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltWidthMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltWidthMax_MetaData[] = {
		{ "Category", "Weather FX|Lightnings|Lightning Bolt" },
		{ "Comment", "/** Maximum width of a Lightning Bolt. */" },
		{ "DisplayName", "Lightning Bolt Width Max" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Maximum width of a Lightning Bolt." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltWidthMax = { "LightningBoltWidthMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, LightningBoltWidthMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltWidthMax_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltWidthMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltLengthMin_MetaData[] = {
		{ "Category", "Weather FX|Lightnings|Lightning Bolt" },
		{ "Comment", "/** Minimum length of a Lightning Bolt (in kilometers). */" },
		{ "DisplayName", "Lightning Bolt Length Min" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Minimum length of a Lightning Bolt (in kilometers)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltLengthMin = { "LightningBoltLengthMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, LightningBoltLengthMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltLengthMin_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltLengthMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltLengthMax_MetaData[] = {
		{ "Category", "Weather FX|Lightnings|Lightning Bolt" },
		{ "Comment", "/** Maximum length of a Lightning Bolt (in kilometers). */" },
		{ "DisplayName", "Lightning Bolt Length Max" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Maximum length of a Lightning Bolt (in kilometers)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltLengthMax = { "LightningBoltLengthMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, LightningBoltLengthMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltLengthMax_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltLengthMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveFrequency_MetaData[] = {
		{ "Category", "Weather FX|Lightnings|Lightning Bolt" },
		{ "Comment", "/** Frequency of a Lightning Bolt curvature. */" },
		{ "DisplayName", "Lightning Bolt Curve Frequency" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Frequency of a Lightning Bolt curvature." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveFrequency = { "LightningBoltCurveFrequency", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, LightningBoltCurveFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveFrequency_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveStrengthMin_MetaData[] = {
		{ "Category", "Weather FX|Lightnings|Lightning Bolt" },
		{ "Comment", "/** Minimum strength of a Lightning Bolt curvature. */" },
		{ "DisplayName", "Lightning Bolt Curve Strength Min" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Minimum strength of a Lightning Bolt curvature." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveStrengthMin = { "LightningBoltCurveStrengthMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, LightningBoltCurveStrengthMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveStrengthMin_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveStrengthMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveStrengthMax_MetaData[] = {
		{ "Category", "Weather FX|Lightnings|Lightning Bolt" },
		{ "Comment", "/** Maximum strength of a Lightning Bolt curvature. */" },
		{ "DisplayName", "Lightning Bolt Curve Strength Max" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Maximum strength of a Lightning Bolt curvature." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveStrengthMax = { "LightningBoltCurveStrengthMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, LightningBoltCurveStrengthMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveStrengthMax_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveStrengthMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltJitterStrength_MetaData[] = {
		{ "Category", "Weather FX|Lightnings|Lightning Bolt" },
		{ "Comment", "/** Jitter strength of a Lightning Bolt. */" },
		{ "DisplayName", "Lightning Bolt Jitter Strength" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Jitter strength of a Lightning Bolt." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltJitterStrength = { "LightningBoltJitterStrength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, LightningBoltJitterStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltJitterStrength_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltJitterStrength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchSpawnChance_MetaData[] = {
		{ "Category", "Weather FX|Lightnings|Lightning Branches" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Chance of spawning a Lightning Branch when spawning a Lightning Bolt. */" },
		{ "DisplayName", "Lightning Branch Spawn Chance" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Chance of spawning a Lightning Branch when spawning a Lightning Bolt." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchSpawnChance = { "LightningBranchSpawnChance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, LightningBranchSpawnChance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchSpawnChance_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchSpawnChance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchScaleMin_MetaData[] = {
		{ "Category", "Weather FX|Lightnings|Lightning Branches" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Minimum scale of a Lightning Branch. */" },
		{ "DisplayName", "Lightning Branch Scale Min" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Minimum scale of a Lightning Branch." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchScaleMin = { "LightningBranchScaleMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, LightningBranchScaleMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchScaleMin_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchScaleMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchScaleMax_MetaData[] = {
		{ "Category", "Weather FX|Lightnings|Lightning Branches" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Maximum scale of a Lightning Branch. */" },
		{ "DisplayName", "Lightning Branch Scale Max" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Maximum scale of a Lightning Branch." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchScaleMax = { "LightningBranchScaleMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, LightningBranchScaleMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchScaleMax_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchScaleMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowAmount_MetaData[] = {
		{ "Category", "Weather FX|Rainbow" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Rainbow Amount. */" },
		{ "DisplayName", "Rainbow Amount" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Rainbow Amount." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowAmount = { "RainbowAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, RainbowAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowAmount_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowColor_MetaData[] = {
		{ "Category", "Weather FX|Rainbow" },
		{ "Comment", "/** Rainbow Tint Color. */" },
		{ "DisplayName", "Rainbow Color" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Rainbow Tint Color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowColor = { "RainbowColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, RainbowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowColor_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowRadius_MetaData[] = {
		{ "Category", "Weather FX|Rainbow" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Radius of the Rainbow. */" },
		{ "DisplayName", "Rainbow Radius" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Radius of the Rainbow." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowRadius = { "RainbowRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, RainbowRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowRadius_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowThickness_MetaData[] = {
		{ "Category", "Weather FX|Rainbow" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Thickness of the Rainbow. */" },
		{ "DisplayName", "Rainbow Thickness" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Thickness of the Rainbow." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowThickness = { "RainbowThickness", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, RainbowThickness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowThickness_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowThickness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowColor_MetaData[] = {
		{ "Category", "Weather FX|Rainbow" },
		{ "Comment", "/** Secondary Rainbow Tint Color. */" },
		{ "DisplayName", "Secondary Rainbow Color" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Secondary Rainbow Tint Color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowColor = { "SecondaryRainbowColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, SecondaryRainbowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowColor_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowRadius_MetaData[] = {
		{ "Category", "Weather FX|Rainbow" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Radius of the Secondary Rainbow. */" },
		{ "DisplayName", "Secondary Rainbow Radius" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Radius of the Secondary Rainbow." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowRadius = { "SecondaryRainbowRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, SecondaryRainbowRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowRadius_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowThickness_MetaData[] = {
		{ "Category", "Weather FX|Rainbow" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Thickness of the Secondary Rainbow. */" },
		{ "DisplayName", "Secondary Rainbow Thickness" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Thickness of the Secondary Rainbow." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowThickness = { "SecondaryRainbowThickness", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, SecondaryRainbowThickness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowThickness_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowThickness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindAmount_MetaData[] = {
		{ "Category", "Weather FX|Volumetric Wind" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of the Volumetric Wind. */" },
		{ "DisplayName", "Volumetric Wind Amount" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Amount of the Volumetric Wind." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindAmount = { "VolumetricWindAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, VolumetricWindAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindAmount_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindDensity_MetaData[] = {
		{ "Category", "Weather FX|Volumetric Wind" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Density of the Volumetric Wind. */" },
		{ "DisplayName", "Volumetric Wind Density" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Density of the Volumetric Wind." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindDensity = { "VolumetricWindDensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, VolumetricWindDensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindDensity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindDensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindColor_MetaData[] = {
		{ "Category", "Weather FX|Volumetric Wind" },
		{ "Comment", "/** Color of the Volumetric Wind. */" },
		{ "DisplayName", "Volumetric Wind Color" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Color of the Volumetric Wind." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindColor = { "VolumetricWindColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, VolumetricWindColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindColor_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindFogDensityContribution_MetaData[] = {
		{ "Category", "Weather FX|Volumetric Wind" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Scales the Volumetric Wind by the density of the Exponential Height Fog. */" },
		{ "DisplayName", "Volumetric Wind Fog Density Contribution" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Scales the Volumetric Wind by the density of the Exponential Height Fog." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindFogDensityContribution = { "VolumetricWindFogDensityContribution", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, VolumetricWindFogDensityContribution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindFogDensityContribution_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindFogDensityContribution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindGravity_MetaData[] = {
		{ "Category", "Weather FX|Volumetric Wind" },
		{ "Comment", "/** Density of the Volumetric Wind. */" },
		{ "DisplayName", "Volumetric Wind Gravity" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Density of the Volumetric Wind." },
		{ "UIMax", "10.0" },
		{ "UIMin", "-10.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindGravity = { "VolumetricWindGravity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, VolumetricWindGravity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindGravity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindGravity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindPrecipitationGravityWeight_MetaData[] = {
		{ "Category", "Weather FX|Volumetric Wind" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Horizontal wind speed of Cloud Noise Shape in m/s. */" },
		{ "DisplayName", "Volumetric Wind Precipitation Gravity Weight" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Horizontal wind speed of Cloud Noise Shape in m/s." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindPrecipitationGravityWeight = { "VolumetricWindPrecipitationGravityWeight", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, VolumetricWindPrecipitationGravityWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindPrecipitationGravityWeight_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindPrecipitationGravityWeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistAmount_MetaData[] = {
		{ "Category", "Weather FX|Volumetric Mist" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of the Volumetric Mist. */" },
		{ "DisplayName", "Volumetric Mist Amount" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Amount of the Volumetric Mist." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistAmount = { "VolumetricMistAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, VolumetricMistAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistAmount_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistDensity_MetaData[] = {
		{ "Category", "Weather FX|Volumetric Mist" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Density of the Volumetric Mist. */" },
		{ "DisplayName", "Volumetric Mist Density" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Density of the Volumetric Mist." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistDensity = { "VolumetricMistDensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, VolumetricMistDensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistDensity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistDensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistColor_MetaData[] = {
		{ "Category", "Weather FX|Volumetric Mist" },
		{ "Comment", "/** Color of the Volumetric Mist. */" },
		{ "DisplayName", "Volumetric Mist Color" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Color of the Volumetric Mist." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistColor = { "VolumetricMistColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, VolumetricMistColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistColor_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistFogDensityContribution_MetaData[] = {
		{ "Category", "Weather FX|Volumetric Mist" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Scales the Volumetric Mist by the density of the Exponential Height Fog. */" },
		{ "DisplayName", "Volumetric Mist Fog Density Contribution" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Scales the Volumetric Mist by the density of the Exponential Height Fog." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistFogDensityContribution = { "VolumetricMistFogDensityContribution", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, VolumetricMistFogDensityContribution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistFogDensityContribution_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistFogDensityContribution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistGravity_MetaData[] = {
		{ "Category", "Weather FX|Volumetric Mist" },
		{ "Comment", "/** Density of the Volumetric Wind. */" },
		{ "DisplayName", "Volumetric Mist Gravity" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Density of the Volumetric Wind." },
		{ "UIMax", "10.0" },
		{ "UIMin", "-10.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistGravity = { "VolumetricMistGravity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, VolumetricMistGravity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistGravity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistGravity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistPrecipitationGravityWeight_MetaData[] = {
		{ "Category", "Weather FX|Volumetric Mist" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Horizontal wind speed of Cloud Noise Shape in m/s. */" },
		{ "DisplayName", "Volumetric Mist Precipitation Gravity Weight" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Horizontal wind speed of Cloud Noise Shape in m/s." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistPrecipitationGravityWeight = { "VolumetricMistPrecipitationGravityWeight", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherFXSettings, VolumetricMistPrecipitationGravityWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistPrecipitationGravityWeight_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistPrecipitationGravityWeight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainLifetimeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainLifetimeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSizeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSizeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainMaskHardness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashLifetimeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashLifetimeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashSizeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashSizeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashVolumetricScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashVolumetricDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowTurbulence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowLifetimeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowLifetimeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowSizeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowSizeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SnowMaskHardness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_EnableLightnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningSpawnIntervalMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningSpawnIntervalMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningColorMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningColorMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningLifetime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltSpawnChance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltWidthMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltWidthMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltLengthMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltLengthMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveStrengthMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveStrengthMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltJitterStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchSpawnChance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchScaleMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchScaleMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindFogDensityContribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricWindPrecipitationGravityWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistFogDensityContribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewProp_VolumetricMistPrecipitationGravityWeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorWeatherFXSettings",
		Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::PropPointers),
		sizeof(FSkyCreatorWeatherFXSettings),
		alignof(FSkyCreatorWeatherFXSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorWeatherFXSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorWeatherFXSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorWeatherFXSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorMaterialFXSettings;
class UScriptStruct* FSkyCreatorMaterialFXSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorMaterialFXSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorMaterialFXSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings, (UObject*)Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorMaterialFXSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorMaterialFXSettings.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorMaterialFXSettings>()
{
	return FSkyCreatorMaterialFXSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WetnessAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetnessAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WetnessColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WetnessColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PuddlesAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PuddlesAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PuddlesColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PuddlesColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainSplatterAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainSplatterAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainSplatterScaleMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainSplatterScaleMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainSplatterScaleMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainSplatterScaleMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainSplatterFadingRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainSplatterFadingRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainRipplesAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainRipplesAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainRipplesIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainRipplesIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainRipplesSizeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainRipplesSizeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainRipplesSizeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainRipplesSizeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainRipplesDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainRipplesDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindRipplesIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindRipplesIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindRipplesSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindRipplesSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainDropsAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainDropsAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainDropsIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainDropsIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainDropsScaleMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainDropsScaleMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainDropsScaleMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainDropsScaleMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainDropsFadingRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainDropsFadingRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainStreaksAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainStreaksAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainStreaksIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainStreaksIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainStreaksSizeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainStreaksSizeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainStreaksSizeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainStreaksSizeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainStreaksFadingRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainStreaksFadingRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainStreaksTrailFadingRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainStreaksTrailFadingRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SnowColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowSparklesThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowSparklesThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorMaterialFXSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_WetnessAmount_MetaData[] = {
		{ "Category", "Material FX|Wetness" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Wetness Amount. */" },
		{ "DisplayName", "Wetness Amount" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Wetness Amount." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_WetnessAmount = { "WetnessAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, WetnessAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_WetnessAmount_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_WetnessAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_WetnessColor_MetaData[] = {
		{ "Category", "Material FX|Wetness" },
		{ "Comment", "/** Wetness Color. */" },
		{ "DisplayName", "Wetness Color" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Wetness Color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_WetnessColor = { "WetnessColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, WetnessColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_WetnessColor_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_WetnessColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_PuddlesAmount_MetaData[] = {
		{ "Category", "Material FX|Puddles" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Puddles Coverage Amount. */" },
		{ "DisplayName", "Puddles Amount" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Puddles Coverage Amount." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_PuddlesAmount = { "PuddlesAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, PuddlesAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_PuddlesAmount_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_PuddlesAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_PuddlesColor_MetaData[] = {
		{ "Category", "Material FX|Puddles" },
		{ "Comment", "/** Puddles Coverage Color. */" },
		{ "DisplayName", "Puddles Color" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Puddles Coverage Color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_PuddlesColor = { "PuddlesColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, PuddlesColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_PuddlesColor_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_PuddlesColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainSplatterAmount_MetaData[] = {
		{ "Category", "Material FX|Rain Splatter" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Rain Splatter Amount. */" },
		{ "DisplayName", "Rain Splatter Amount" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Rain Splatter Amount." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainSplatterAmount = { "RainSplatterAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, RainSplatterAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainSplatterAmount_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainSplatterAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainSplatterScaleMin_MetaData[] = {
		{ "Category", "Material FX|Rain Splatter" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Min Radius of a Raindrop Splatter in texels. */" },
		{ "DisplayName", "Rain Splatter Scale Min" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Min Radius of a Raindrop Splatter in texels." },
		{ "UIMax", "128.0" },
		{ "UIMin", "4.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainSplatterScaleMin = { "RainSplatterScaleMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, RainSplatterScaleMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainSplatterScaleMin_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainSplatterScaleMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainSplatterScaleMax_MetaData[] = {
		{ "Category", "Material FX|Rain Splatter" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Max Radius of a Raindrop Splatter in texels. */" },
		{ "DisplayName", "Rain Splatter Scale Max" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Max Radius of a Raindrop Splatter in texels." },
		{ "UIMax", "128.0" },
		{ "UIMin", "4.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainSplatterScaleMax = { "RainSplatterScaleMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, RainSplatterScaleMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainSplatterScaleMax_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainSplatterScaleMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainSplatterFadingRate_MetaData[] = {
		{ "Category", "Material FX|Rain Splatter" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Fading rate of Rain Splatter. Higher values fades the effect faster. */" },
		{ "DisplayName", "Rain Splatter Fading Rate" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Fading rate of Rain Splatter. Higher values fades the effect faster." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainSplatterFadingRate = { "RainSplatterFadingRate", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, RainSplatterFadingRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainSplatterFadingRate_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainSplatterFadingRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesAmount_MetaData[] = {
		{ "Category", "Material FX|Rain Ripples" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Rain Ripples Amount. */" },
		{ "DisplayName", "Rain Ripples Amount" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Rain Ripples Amount." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesAmount = { "RainRipplesAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, RainRipplesAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesAmount_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesIntensity_MetaData[] = {
		{ "Category", "Material FX|Rain Ripples" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Rain Ripples normal map intensity. */" },
		{ "DisplayName", "Rain Ripples Intensity" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Rain Ripples normal map intensity." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesIntensity = { "RainRipplesIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, RainRipplesIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesIntensity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesIntensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesSizeMin_MetaData[] = {
		{ "Category", "Material FX|Rain Ripples" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Min Radius of a Raindrop in texels. */" },
		{ "DisplayName", "Rain Ripples Min Radius" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Min Radius of a Raindrop in texels." },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesSizeMin = { "RainRipplesSizeMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, RainRipplesSizeMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesSizeMin_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesSizeMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesSizeMax_MetaData[] = {
		{ "Category", "Material FX|Rain Ripples" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Max Radius of a Raindrop in texels. */" },
		{ "DisplayName", "Rain Ripples Max Radius" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Max Radius of a Raindrop in texels." },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesSizeMax = { "RainRipplesSizeMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, RainRipplesSizeMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesSizeMax_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesSizeMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesDamping_MetaData[] = {
		{ "Category", "Material FX|Rain Ripples" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Damping of Rain Ripples. Higher values are fading Rain Ripples faster. */" },
		{ "DisplayName", "Rain Ripples Damping" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Damping of Rain Ripples. Higher values are fading Rain Ripples faster." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.8" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesDamping = { "RainRipplesDamping", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, RainRipplesDamping), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesDamping_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesDamping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_WindRipplesIntensity_MetaData[] = {
		{ "Category", "Material FX|Rain Ripples" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Wind Ripples normap map intensity. */" },
		{ "DisplayName", "Wind Ripples Intensity" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Wind Ripples normap map intensity." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_WindRipplesIntensity = { "WindRipplesIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, WindRipplesIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_WindRipplesIntensity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_WindRipplesIntensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_WindRipplesSpeed_MetaData[] = {
		{ "Category", "Material FX|Rain Ripples" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Speed of the Wind Ripples. */" },
		{ "DisplayName", "Wind Ripples Speed" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Speed of the Wind Ripples." },
		{ "UIMax", "4.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_WindRipplesSpeed = { "WindRipplesSpeed", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, WindRipplesSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_WindRipplesSpeed_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_WindRipplesSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsAmount_MetaData[] = {
		{ "Category", "Material FX|Rain Drops" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Rain Drops Amount. */" },
		{ "DisplayName", "Rain Drops Amount" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Rain Drops Amount." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsAmount = { "RainDropsAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, RainDropsAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsAmount_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsIntensity_MetaData[] = {
		{ "Category", "Material FX|Rain Drops" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Rain Drops normal map intensity. */" },
		{ "DisplayName", "Rain Drops Intensity" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Rain Drops normal map intensity." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsIntensity = { "RainDropsIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, RainDropsIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsIntensity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsIntensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsScaleMin_MetaData[] = {
		{ "Category", "Material FX|Rain Drops" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Min Radius of a Raindrop in texels. */" },
		{ "DisplayName", "Rain Drops Scale Min" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Min Radius of a Raindrop in texels." },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsScaleMin = { "RainDropsScaleMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, RainDropsScaleMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsScaleMin_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsScaleMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsScaleMax_MetaData[] = {
		{ "Category", "Material FX|Rain Drops" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Max Radius of a Raindrop in texels. */" },
		{ "DisplayName", "Rain Drops Scale Max" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Max Radius of a Raindrop in texels." },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsScaleMax = { "RainDropsScaleMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, RainDropsScaleMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsScaleMax_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsScaleMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsFadingRate_MetaData[] = {
		{ "Category", "Material FX|Rain Drops" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Fading rate of Rain Drops. Higher values fades the effect faster. */" },
		{ "DisplayName", "Rain Drops Fading Rate" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Fading rate of Rain Drops. Higher values fades the effect faster." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsFadingRate = { "RainDropsFadingRate", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, RainDropsFadingRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsFadingRate_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsFadingRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksAmount_MetaData[] = {
		{ "Category", "Material FX|Rain Streaks" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Rain Streaks Amount. */" },
		{ "DisplayName", "Rain Streaks Amount" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Rain Streaks Amount." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksAmount = { "RainStreaksAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, RainStreaksAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksAmount_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksIntensity_MetaData[] = {
		{ "Category", "Material FX|Rain Streaks" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Rain Streaks normal map intensity. */" },
		{ "DisplayName", "Rain Streaks Intensity" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Rain Streaks normal map intensity." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksIntensity = { "RainStreaksIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, RainStreaksIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksIntensity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksIntensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksSizeMin_MetaData[] = {
		{ "Category", "Material FX|Rain Streaks" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Min Radius of a Raindrop in texels. */" },
		{ "DisplayName", "Rain Streaks Min Radius" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Min Radius of a Raindrop in texels." },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksSizeMin = { "RainStreaksSizeMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, RainStreaksSizeMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksSizeMin_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksSizeMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksSizeMax_MetaData[] = {
		{ "Category", "Material FX|Rain Streaks" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Max Radius of a Raindrop in texels. */" },
		{ "DisplayName", "Rain Streaks Max Radius" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Max Radius of a Raindrop in texels." },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksSizeMax = { "RainStreaksSizeMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, RainStreaksSizeMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksSizeMax_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksSizeMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksFadingRate_MetaData[] = {
		{ "Category", "Material FX|Rain Streaks" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Fading rate of Rain Streaks. Higher values fades the effect faster. */" },
		{ "DisplayName", "Rain Streaks Fading Rate" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Fading rate of Rain Streaks. Higher values fades the effect faster." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksFadingRate = { "RainStreaksFadingRate", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, RainStreaksFadingRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksFadingRate_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksFadingRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksTrailFadingRate_MetaData[] = {
		{ "Category", "Material FX|Rain Streaks" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Fading rate of Rain Streaks. Higher values fades the effect faster. */" },
		{ "DisplayName", "Rain Streaks Trail Fading Rate" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Fading rate of Rain Streaks. Higher values fades the effect faster." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksTrailFadingRate = { "RainStreaksTrailFadingRate", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, RainStreaksTrailFadingRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksTrailFadingRate_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksTrailFadingRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_SnowAmount_MetaData[] = {
		{ "Category", "Material FX|Snow" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Snow Coverage Amount. */" },
		{ "DisplayName", "Snow Amount" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Snow Coverage Amount." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_SnowAmount = { "SnowAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, SnowAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_SnowAmount_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_SnowAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_SnowColor_MetaData[] = {
		{ "Category", "Material FX|Snow" },
		{ "Comment", "/** Snow Coverage Color. */" },
		{ "DisplayName", "Snow Color" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Snow Coverage Color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_SnowColor = { "SnowColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, SnowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_SnowColor_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_SnowColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_SnowIntensity_MetaData[] = {
		{ "Category", "Material FX|Snow" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Snow normap map intensity. */" },
		{ "DisplayName", "Snow Intensity" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Snow normap map intensity." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_SnowIntensity = { "SnowIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, SnowIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_SnowIntensity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_SnowIntensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_SnowSparklesThreshold_MetaData[] = {
		{ "Category", "Material FX|Snow" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Snow Sparkles Threshold. Lower values exposes more sparkles. */" },
		{ "DisplayName", "Snow Sparkles Threshold" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Snow Sparkles Threshold. Lower values exposes more sparkles." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.8" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_SnowSparklesThreshold = { "SnowSparklesThreshold", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorMaterialFXSettings, SnowSparklesThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_SnowSparklesThreshold_MetaData), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_SnowSparklesThreshold_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_WetnessAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_WetnessColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_PuddlesAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_PuddlesColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainSplatterAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainSplatterScaleMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainSplatterScaleMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainSplatterFadingRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesSizeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesSizeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainRipplesDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_WindRipplesIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_WindRipplesSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsScaleMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsScaleMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainDropsFadingRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksSizeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksSizeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksFadingRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_RainStreaksTrailFadingRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_SnowAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_SnowColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_SnowIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewProp_SnowSparklesThreshold,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorMaterialFXSettings",
		Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::PropPointers),
		sizeof(FSkyCreatorMaterialFXSettings),
		alignof(FSkyCreatorMaterialFXSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorMaterialFXSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorMaterialFXSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorMaterialFXSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorWindSettings;
class UScriptStruct* FSkyCreatorWindSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorWindSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorWindSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorWindSettings, (UObject*)Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorWindSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorWindSettings.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorWindSettings>()
{
	return FSkyCreatorWindSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudWindDirection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudWindDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudWindSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudWindSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudWindSkewAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudWindSkewAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudNoiseShapeWindDirection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudNoiseShapeWindDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudNoiseShapeWindSpeedHorizontal_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudNoiseShapeWindSpeedHorizontal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudNoiseDetailWindSpeedVertical_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudNoiseDetailWindSpeedVertical;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindDirection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorWindSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindDirection_MetaData[] = {
		{ "Category", "Wind|Volumetric Clouds" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Wind direction angle of Cloud Map in degrees. */" },
		{ "DisplayName", "Cloud Wind Direction" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Wind direction angle of Cloud Map in degrees." },
		{ "UIMax", "360.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindDirection = { "CloudWindDirection", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWindSettings, CloudWindDirection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindDirection_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindSpeed_MetaData[] = {
		{ "Category", "Wind|Volumetric Clouds" },
		{ "Comment", "/** Wind speed of Cloud Map in m/s. */" },
		{ "DisplayName", "Cloud Wind Speed" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Wind speed of Cloud Map in m/s." },
		{ "UIMax", "100.0" },
		{ "UIMin", "-100.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindSpeed = { "CloudWindSpeed", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWindSettings, CloudWindSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindSpeed_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindSkewAmount_MetaData[] = {
		{ "Category", "Wind|Volumetric Clouds" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Skew clouds towards Cloud Wind Direction. Affected by Cloud Wind Speed. */" },
		{ "DisplayName", "Cloud Wind Skew Amount" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Skew clouds towards Cloud Wind Direction. Affected by Cloud Wind Speed." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindSkewAmount = { "CloudWindSkewAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWindSettings, CloudWindSkewAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindSkewAmount_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindSkewAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindDirection_MetaData[] = {
		{ "Category", "Wind|Volumetric Clouds" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Wind direction angle of Cloud Noise in degrees. */" },
		{ "DisplayName", "Cloud Noise Shape Wind Direction" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Wind direction angle of Cloud Noise in degrees." },
		{ "UIMax", "360.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindDirection = { "CloudNoiseShapeWindDirection", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWindSettings, CloudNoiseShapeWindDirection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindDirection_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindSpeedHorizontal_MetaData[] = {
		{ "Category", "Wind|Volumetric Clouds" },
		{ "Comment", "/** Horizontal wind speed of Cloud Noise Shape in m/s. */" },
		{ "DisplayName", "Cloud Noise Shape Wind Speed Horizontal" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Horizontal wind speed of Cloud Noise Shape in m/s." },
		{ "UIMax", "100.0" },
		{ "UIMin", "-100.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindSpeedHorizontal = { "CloudNoiseShapeWindSpeedHorizontal", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWindSettings, CloudNoiseShapeWindSpeedHorizontal), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindSpeedHorizontal_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindSpeedHorizontal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseDetailWindSpeedVertical_MetaData[] = {
		{ "Category", "Wind|Volumetric Clouds" },
		{ "Comment", "/** Vertical wind speed of Cloud Noise Detail in m/s. */" },
		{ "DisplayName", "Cloud Noise Detail Wind Speed Vertical" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Vertical wind speed of Cloud Noise Detail in m/s." },
		{ "UIMax", "100.0" },
		{ "UIMin", "-100.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseDetailWindSpeedVertical = { "CloudNoiseDetailWindSpeedVertical", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWindSettings, CloudNoiseDetailWindSpeedVertical), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseDetailWindSpeedVertical_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseDetailWindSpeedVertical_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_WindDirection_MetaData[] = {
		{ "Category", "Wind|Weather FX" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Wind direction angle of precipitation particles in degrees. */" },
		{ "DisplayName", "Wind Direction" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Wind direction angle of precipitation particles in degrees." },
		{ "UIMax", "360.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_WindDirection = { "WindDirection", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWindSettings, WindDirection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_WindDirection_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_WindDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_WindSpeed_MetaData[] = {
		{ "Category", "Wind|Weather FX" },
		{ "Comment", "/** Wind speed of precipitation particles. */" },
		{ "DisplayName", "Wind Speed" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Wind speed of precipitation particles." },
		{ "UIMax", "1000.0" },
		{ "UIMin", "-1000.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_WindSpeed = { "WindSpeed", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWindSettings, WindSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_WindSpeed_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_WindSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindSkewAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindSpeedHorizontal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseDetailWindSpeedVertical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_WindDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_WindSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorWindSettings",
		Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::PropPointers),
		sizeof(FSkyCreatorWindSettings),
		alignof(FSkyCreatorWindSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorWindSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorWindSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorWindSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorWindSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorPostProcessSettings;
class UScriptStruct* FSkyCreatorPostProcessSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorPostProcessSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorPostProcessSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings, (UObject*)Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorPostProcessSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorPostProcessSettings.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorPostProcessSettings>()
{
	return FSkyCreatorPostProcessSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExposureCompensation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExposureCompensation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorPostProcessSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_BloomIntensity_MetaData[] = {
		{ "Category", "Post Process" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Multiplier for all bloom contributions >=0: off, 1(default), >1 brighter */" },
		{ "DisplayName", "Bloom Intensity" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Multiplier for all bloom contributions >=0: off, 1(default), >1 brighter" },
		{ "UIMax", "8.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_BloomIntensity = { "BloomIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorPostProcessSettings, BloomIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_BloomIntensity_MetaData), Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_BloomIntensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_BloomThreshold_MetaData[] = {
		{ "Category", "Post Process" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/**\n\x09* minimum brightness the bloom starts having effect\n\x09* -1:all pixels affect bloom equally (physically correct, faster as a threshold pass is omitted), 0:all pixels affect bloom brights more, 1(default), >1 brighter\n\x09*/" },
		{ "DisplayName", "Bloom Threshold" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "minimum brightness the bloom starts having effect\n-1:all pixels affect bloom equally (physically correct, faster as a threshold pass is omitted), 0:all pixels affect bloom brights more, 1(default), >1 brighter" },
		{ "UIMax", "8.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_BloomThreshold = { "BloomThreshold", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorPostProcessSettings, BloomThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_BloomThreshold_MetaData), Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_BloomThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_ExposureCompensation_MetaData[] = {
		{ "Category", "Post Process" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "-10.0" },
		{ "Comment", "/**\n\x09* Logarithmic adjustment for the exposure. Only used if a tonemapper is specified.\n\x09* 0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ...\n\x09*/" },
		{ "DisplayName", "Exposure Compensation" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ToolTip", "Logarithmic adjustment for the exposure. Only used if a tonemapper is specified.\n0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ..." },
		{ "UIMax", "10.0" },
		{ "UIMin", "-10.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_ExposureCompensation = { "ExposureCompensation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorPostProcessSettings, ExposureCompensation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_ExposureCompensation_MetaData), Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_ExposureCompensation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_BloomIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_BloomThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_ExposureCompensation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorPostProcessSettings",
		Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::PropPointers),
		sizeof(FSkyCreatorPostProcessSettings),
		alignof(FSkyCreatorPostProcessSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorPostProcessSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorPostProcessSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorPostProcessSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorWeatherSettings;
class UScriptStruct* FSkyCreatorWeatherSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorWeatherSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorWeatherSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings, (UObject*)Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorWeatherSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorWeatherSettings.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorWeatherSettings>()
{
	return FSkyCreatorWeatherSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialFXSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialFXSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WindSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorWeatherSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SkyAtmosphereSettings_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "Comment", "/** Sky Atmosphere Settings. */" },
		{ "DisplayName", "Atmosphere Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Sky Atmosphere Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SkyAtmosphereSettings = { "SkyAtmosphereSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherSettings, SkyAtmosphereSettings), Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SkyAtmosphereSettings_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SkyAtmosphereSettings_MetaData) }; // 1252901596
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_VolumetricCloudSettings_MetaData[] = {
		{ "Category", "Volumetric Clouds" },
		{ "Comment", "/** Volumetric Cloud Settings. */" },
		{ "DisplayName", "Volumetric Clouds Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Volumetric Cloud Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_VolumetricCloudSettings = { "VolumetricCloudSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherSettings, VolumetricCloudSettings), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_VolumetricCloudSettings_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_VolumetricCloudSettings_MetaData) }; // 4050286809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_BackgroundCloudSettings_MetaData[] = {
		{ "Category", "Background Clouds" },
		{ "Comment", "/** Volumetric Cloud Settings. */" },
		{ "DisplayName", "Background Clouds Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Volumetric Cloud Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_BackgroundCloudSettings = { "BackgroundCloudSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherSettings, BackgroundCloudSettings), Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_BackgroundCloudSettings_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_BackgroundCloudSettings_MetaData) }; // 805739165
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SkyLightSettings_MetaData[] = {
		{ "Category", "Sky Light" },
		{ "Comment", "/** Sky Light Settings. */" },
		{ "DisplayName", "Sky Light Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Sky Light Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SkyLightSettings = { "SkyLightSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherSettings, SkyLightSettings), Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SkyLightSettings_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SkyLightSettings_MetaData) }; // 4258342397
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SunLightSettings_MetaData[] = {
		{ "Category", "Sun Light" },
		{ "Comment", "/** Sun Light Settings. */" },
		{ "DisplayName", "Sun Light Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Sun Light Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SunLightSettings = { "SunLightSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherSettings, SunLightSettings), Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SunLightSettings_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SunLightSettings_MetaData) }; // 2576816153
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_MoonLightSettings_MetaData[] = {
		{ "Category", "Moon Light" },
		{ "Comment", "/** Moon Light Settings. */" },
		{ "DisplayName", "Moon Light Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Moon Light Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_MoonLightSettings = { "MoonLightSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherSettings, MoonLightSettings), Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_MoonLightSettings_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_MoonLightSettings_MetaData) }; // 48995007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_ExponentialHeightFogSettings_MetaData[] = {
		{ "Category", "Height Fog" },
		{ "Comment", "/** Exponential Height Fog Settings. */" },
		{ "DisplayName", "Height Fog Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Exponential Height Fog Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_ExponentialHeightFogSettings = { "ExponentialHeightFogSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherSettings, ExponentialHeightFogSettings), Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_ExponentialHeightFogSettings_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_ExponentialHeightFogSettings_MetaData) }; // 3144598692
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_StarMapSettings_MetaData[] = {
		{ "Category", "Star Map" },
		{ "Comment", "/** Star Map Settings. */" },
		{ "DisplayName", "Star Map Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Star Map Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_StarMapSettings = { "StarMapSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherSettings, StarMapSettings), Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_StarMapSettings_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_StarMapSettings_MetaData) }; // 3776822257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WeatherFXSettings_MetaData[] = {
		{ "Category", "Weather FX" },
		{ "Comment", "/** Weather FX Settings. */" },
		{ "DisplayName", "Weather FX Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Weather FX Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WeatherFXSettings = { "WeatherFXSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherSettings, WeatherFXSettings), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WeatherFXSettings_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WeatherFXSettings_MetaData) }; // 3878984845
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_MaterialFXSettings_MetaData[] = {
		{ "Category", "Material FX" },
		{ "Comment", "/** Weather Material FX Settings. */" },
		{ "DisplayName", "Material FX Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Weather Material FX Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_MaterialFXSettings = { "MaterialFXSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherSettings, MaterialFXSettings), Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_MaterialFXSettings_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_MaterialFXSettings_MetaData) }; // 2940158826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WindSettings_MetaData[] = {
		{ "Category", "Wind" },
		{ "Comment", "/** Wind Settings. */" },
		{ "DisplayName", "Wind Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Wind Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WindSettings = { "WindSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherSettings, WindSettings), Z_Construct_UScriptStruct_FSkyCreatorWindSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WindSettings_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WindSettings_MetaData) }; // 965985319
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "Post Process" },
		{ "Comment", "/** Post Process Settings. */" },
		{ "DisplayName", "Post Process Settings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Post Process Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyCreatorWeatherSettings, PostProcessSettings), Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_PostProcessSettings_MetaData), Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_PostProcessSettings_MetaData) }; // 1406253749
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SkyAtmosphereSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_VolumetricCloudSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_BackgroundCloudSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SkyLightSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SunLightSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_MoonLightSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_ExponentialHeightFogSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_StarMapSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WeatherFXSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_MaterialFXSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WindSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_PostProcessSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorWeatherSettings",
		Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::PropPointers),
		sizeof(FSkyCreatorWeatherSettings),
		alignof(FSkyCreatorWeatherSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorWeatherSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorWeatherSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorWeatherSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherSettings_h_Statics::ScriptStructInfo[] = {
		{ FSkyCreatorSkyAtmosphereSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewStructOps, TEXT("SkyCreatorSkyAtmosphereSettings"), &Z_Registration_Info_UScriptStruct_SkyCreatorSkyAtmosphereSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorSkyAtmosphereSettings), 1252901596U) },
		{ FSkyCreatorVolumetricCloudSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings_Statics::NewStructOps, TEXT("SkyCreatorVolumetricCloudSettings"), &Z_Registration_Info_UScriptStruct_SkyCreatorVolumetricCloudSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorVolumetricCloudSettings), 4050286809U) },
		{ FSkyCreatorBackgroundCloudSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings_Statics::NewStructOps, TEXT("SkyCreatorBackgroundCloudSettings"), &Z_Registration_Info_UScriptStruct_SkyCreatorBackgroundCloudSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorBackgroundCloudSettings), 805739165U) },
		{ FSkyCreatorSkyLightSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewStructOps, TEXT("SkyCreatorSkyLightSettings"), &Z_Registration_Info_UScriptStruct_SkyCreatorSkyLightSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorSkyLightSettings), 4258342397U) },
		{ FSkyCreatorSunLightSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewStructOps, TEXT("SkyCreatorSunLightSettings"), &Z_Registration_Info_UScriptStruct_SkyCreatorSunLightSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorSunLightSettings), 2576816153U) },
		{ FSkyCreatorMoonLightSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewStructOps, TEXT("SkyCreatorMoonLightSettings"), &Z_Registration_Info_UScriptStruct_SkyCreatorMoonLightSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorMoonLightSettings), 48995007U) },
		{ FSkyCreatorExponentialHeightFogSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewStructOps, TEXT("SkyCreatorExponentialHeightFogSettings"), &Z_Registration_Info_UScriptStruct_SkyCreatorExponentialHeightFogSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorExponentialHeightFogSettings), 3144598692U) },
		{ FSkyCreatorStarMapSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewStructOps, TEXT("SkyCreatorStarMapSettings"), &Z_Registration_Info_UScriptStruct_SkyCreatorStarMapSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorStarMapSettings), 3776822257U) },
		{ FSkyCreatorWeatherFXSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings_Statics::NewStructOps, TEXT("SkyCreatorWeatherFXSettings"), &Z_Registration_Info_UScriptStruct_SkyCreatorWeatherFXSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorWeatherFXSettings), 3878984845U) },
		{ FSkyCreatorMaterialFXSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorMaterialFXSettings_Statics::NewStructOps, TEXT("SkyCreatorMaterialFXSettings"), &Z_Registration_Info_UScriptStruct_SkyCreatorMaterialFXSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorMaterialFXSettings), 2940158826U) },
		{ FSkyCreatorWindSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewStructOps, TEXT("SkyCreatorWindSettings"), &Z_Registration_Info_UScriptStruct_SkyCreatorWindSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorWindSettings), 965985319U) },
		{ FSkyCreatorPostProcessSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewStructOps, TEXT("SkyCreatorPostProcessSettings"), &Z_Registration_Info_UScriptStruct_SkyCreatorPostProcessSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorPostProcessSettings), 1406253749U) },
		{ FSkyCreatorWeatherSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewStructOps, TEXT("SkyCreatorWeatherSettings"), &Z_Registration_Info_UScriptStruct_SkyCreatorWeatherSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorWeatherSettings), 3556514054U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherSettings_h_2992659126(TEXT("/Script/SkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

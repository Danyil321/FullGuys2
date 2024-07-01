// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyCreatorPlugin/Public/SkyCreatorFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyCreatorFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	SKYCREATORPLUGIN_API UClass* Z_Construct_UClass_USkyCreatorFunctionLibrary();
	SKYCREATORPLUGIN_API UClass* Z_Construct_UClass_USkyCreatorFunctionLibrary_NoRegister();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCelestialPositionData();
	UPackage* Z_Construct_UPackage__Script_SkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CelestialPositionData;
class UScriptStruct* FCelestialPositionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CelestialPositionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CelestialPositionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCelestialPositionData, (UObject*)Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("CelestialPositionData"));
	}
	return Z_Registration_Info_UScriptStruct_CelestialPositionData.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FCelestialPositionData>()
{
	return FCelestialPositionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCelestialPositionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Elevation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Elevation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Azimuth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Azimuth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCelestialPositionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/SkyCreatorFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCelestialPositionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewProp_Elevation_MetaData[] = {
		{ "Category", "Celestial Position" },
		{ "Comment", "/** Celestial Elevation */" },
		{ "ModuleRelativePath", "Public/SkyCreatorFunctionLibrary.h" },
		{ "ToolTip", "Celestial Elevation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewProp_Elevation = { "Elevation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCelestialPositionData, Elevation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewProp_Elevation_MetaData), Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewProp_Elevation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewProp_Azimuth_MetaData[] = {
		{ "Category", "Celestial Position" },
		{ "Comment", "/** Celestial azimuth */" },
		{ "ModuleRelativePath", "Public/SkyCreatorFunctionLibrary.h" },
		{ "ToolTip", "Celestial azimuth" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewProp_Azimuth = { "Azimuth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCelestialPositionData, Azimuth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewProp_Azimuth_MetaData), Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewProp_Azimuth_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCelestialPositionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewProp_Elevation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewProp_Azimuth,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCelestialPositionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"CelestialPositionData",
		Z_Construct_UScriptStruct_FCelestialPositionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCelestialPositionData_Statics::PropPointers),
		sizeof(FCelestialPositionData),
		alignof(FCelestialPositionData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCelestialPositionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCelestialPositionData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCelestialPositionData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCelestialPositionData()
	{
		if (!Z_Registration_Info_UScriptStruct_CelestialPositionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CelestialPositionData.InnerSingleton, Z_Construct_UScriptStruct_FCelestialPositionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CelestialPositionData.InnerSingleton;
	}
	DEFINE_FUNCTION(USkyCreatorFunctionLibrary::execElevationRefraction)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_f);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=USkyCreatorFunctionLibrary::ElevationRefraction(Z_Param_f);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyCreatorFunctionLibrary::execIsApplicationForegroundNow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USkyCreatorFunctionLibrary::IsApplicationForegroundNow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyCreatorFunctionLibrary::execKilometersToCentimeters)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USkyCreatorFunctionLibrary::KilometersToCentimeters(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyCreatorFunctionLibrary::execCentimetersToKilometers)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USkyCreatorFunctionLibrary::CentimetersToKilometers(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyCreatorFunctionLibrary::execCreateAndAssignMID)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterial);
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_InMID);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyCreatorFunctionLibrary::CreateAndAssignMID(Z_Param_WorldContextObject,Z_Param_InMaterial,Z_Param_Out_InMID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyCreatorFunctionLibrary::execFindLightningPosition)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bSampleCloudDensity);
		P_GET_PROPERTY(FIntProperty,Z_Param_Samples);
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_ParameterCollection);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InnerRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OuterRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinHeight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHeight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DensityThreshold);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USkyCreatorFunctionLibrary::FindLightningPosition(Z_Param_WorldContextObject,Z_Param_bSampleCloudDensity,Z_Param_Samples,Z_Param_ParameterCollection,Z_Param_Material,Z_Param_RenderTarget,Z_Param_Position,Z_Param_InnerRadius,Z_Param_OuterRadius,Z_Param_MinHeight,Z_Param_MaxHeight,Z_Param_DensityThreshold,Z_Param_Out_OutPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyCreatorFunctionLibrary::execGetCloudDensityAtPosition)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_ParameterCollection);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USkyCreatorFunctionLibrary::GetCloudDensityAtPosition(Z_Param_WorldContextObject,Z_Param_Position,Z_Param_ParameterCollection,Z_Param_Material,Z_Param_RenderTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyCreatorFunctionLibrary::execCheckCloudDensityAtPosition)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_ParameterCollection);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USkyCreatorFunctionLibrary::CheckCloudDensityAtPosition(Z_Param_WorldContextObject,Z_Param_Position,Z_Param_ParameterCollection,Z_Param_Material,Z_Param_RenderTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyCreatorFunctionLibrary::execDynamicConvertRenderTargetToTexture2D)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->DynamicConvertRenderTargetToTexture2D(Z_Param_RenderTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyCreatorFunctionLibrary::execConvertRenderTargetToTexture2D)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyCreatorFunctionLibrary::ConvertRenderTargetToTexture2D(Z_Param_RenderTarget,Z_Param_Out_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyCreatorFunctionLibrary::execGetRealMoonPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Latitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Longitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeZone);
		P_GET_UBOOL(Z_Param_bIsDaylightSavingTime);
		P_GET_STRUCT(FDateTime,Z_Param_DateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCelestialPositionData*)Z_Param__Result=USkyCreatorFunctionLibrary::GetRealMoonPosition(Z_Param_Latitude,Z_Param_Longitude,Z_Param_TimeZone,Z_Param_bIsDaylightSavingTime,Z_Param_DateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyCreatorFunctionLibrary::execGetRealSunPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Latitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Longitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeZone);
		P_GET_UBOOL(Z_Param_bIsDaylightSavingTime);
		P_GET_STRUCT(FDateTime,Z_Param_DateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCelestialPositionData*)Z_Param__Result=USkyCreatorFunctionLibrary::GetRealSunPosition(Z_Param_Latitude,Z_Param_Longitude,Z_Param_TimeZone,Z_Param_bIsDaylightSavingTime,Z_Param_DateTime);
		P_NATIVE_END;
	}
	void USkyCreatorFunctionLibrary::StaticRegisterNativesUSkyCreatorFunctionLibrary()
	{
		UClass* Class = USkyCreatorFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CentimetersToKilometers", &USkyCreatorFunctionLibrary::execCentimetersToKilometers },
			{ "CheckCloudDensityAtPosition", &USkyCreatorFunctionLibrary::execCheckCloudDensityAtPosition },
			{ "ConvertRenderTargetToTexture2D", &USkyCreatorFunctionLibrary::execConvertRenderTargetToTexture2D },
			{ "CreateAndAssignMID", &USkyCreatorFunctionLibrary::execCreateAndAssignMID },
			{ "DynamicConvertRenderTargetToTexture2D", &USkyCreatorFunctionLibrary::execDynamicConvertRenderTargetToTexture2D },
			{ "ElevationRefraction", &USkyCreatorFunctionLibrary::execElevationRefraction },
			{ "FindLightningPosition", &USkyCreatorFunctionLibrary::execFindLightningPosition },
			{ "GetCloudDensityAtPosition", &USkyCreatorFunctionLibrary::execGetCloudDensityAtPosition },
			{ "GetRealMoonPosition", &USkyCreatorFunctionLibrary::execGetRealMoonPosition },
			{ "GetRealSunPosition", &USkyCreatorFunctionLibrary::execGetRealSunPosition },
			{ "IsApplicationForegroundNow", &USkyCreatorFunctionLibrary::execIsApplicationForegroundNow },
			{ "KilometersToCentimeters", &USkyCreatorFunctionLibrary::execKilometersToCentimeters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkyCreatorFunctionLibrary_CentimetersToKilometers_Statics
	{
		struct SkyCreatorFunctionLibrary_eventCentimetersToKilometers_Parms
		{
			float Value;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventCentimetersToKilometers_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_USkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventCentimetersToKilometers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sky Creator|Utility" },
		{ "Comment", "/* Convert Centimeters to Kilometers */" },
		{ "ModuleRelativePath", "Public/SkyCreatorFunctionLibrary.h" },
		{ "ToolTip", "Convert Centimeters to Kilometers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyCreatorFunctionLibrary, nullptr, "CentimetersToKilometers", nullptr, nullptr, Z_Construct_UFunction_USkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::SkyCreatorFunctionLibrary_eventCentimetersToKilometers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::SkyCreatorFunctionLibrary_eventCentimetersToKilometers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USkyCreatorFunctionLibrary_CentimetersToKilometers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics
	{
		struct SkyCreatorFunctionLibrary_eventCheckCloudDensityAtPosition_Parms
		{
			UObject* WorldContextObject;
			FVector Position;
			UMaterialParameterCollection* ParameterCollection;
			UMaterialInterface* Material;
			UTextureRenderTarget2D* RenderTarget;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParameterCollection;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventCheckCloudDensityAtPosition_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventCheckCloudDensityAtPosition_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_ParameterCollection = { "ParameterCollection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventCheckCloudDensityAtPosition_Parms, ParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventCheckCloudDensityAtPosition_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventCheckCloudDensityAtPosition_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkyCreatorFunctionLibrary_eventCheckCloudDensityAtPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkyCreatorFunctionLibrary_eventCheckCloudDensityAtPosition_Parms), &Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_ParameterCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sky Creator|Utility" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/SkyCreatorFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyCreatorFunctionLibrary, nullptr, "CheckCloudDensityAtPosition", nullptr, nullptr, Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::SkyCreatorFunctionLibrary_eventCheckCloudDensityAtPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::SkyCreatorFunctionLibrary_eventCheckCloudDensityAtPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics
	{
		struct SkyCreatorFunctionLibrary_eventConvertRenderTargetToTexture2D_Parms
		{
			UTextureRenderTarget2D* RenderTarget;
			UTexture2D* Texture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventConvertRenderTargetToTexture2D_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventConvertRenderTargetToTexture2D_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sky Creator|Utility" },
		{ "ModuleRelativePath", "Public/SkyCreatorFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyCreatorFunctionLibrary, nullptr, "ConvertRenderTargetToTexture2D", nullptr, nullptr, Z_Construct_UFunction_USkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::SkyCreatorFunctionLibrary_eventConvertRenderTargetToTexture2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::SkyCreatorFunctionLibrary_eventConvertRenderTargetToTexture2D_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyCreatorFunctionLibrary_CreateAndAssignMID_Statics
	{
		struct SkyCreatorFunctionLibrary_eventCreateAndAssignMID_Parms
		{
			UObject* WorldContextObject;
			UMaterialInterface* InMaterial;
			UMaterialInstanceDynamic* InMID;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventCreateAndAssignMID_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventCreateAndAssignMID_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::NewProp_InMID = { "InMID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventCreateAndAssignMID_Parms, InMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::NewProp_InMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::NewProp_InMID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sky Creator|Utility" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/SkyCreatorFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyCreatorFunctionLibrary, nullptr, "CreateAndAssignMID", nullptr, nullptr, Z_Construct_UFunction_USkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::SkyCreatorFunctionLibrary_eventCreateAndAssignMID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::SkyCreatorFunctionLibrary_eventCreateAndAssignMID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USkyCreatorFunctionLibrary_CreateAndAssignMID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics
	{
		struct SkyCreatorFunctionLibrary_eventDynamicConvertRenderTargetToTexture2D_Parms
		{
			UTextureRenderTarget2D* RenderTarget;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventDynamicConvertRenderTargetToTexture2D_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventDynamicConvertRenderTargetToTexture2D_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sky Creator|Utility" },
		{ "ModuleRelativePath", "Public/SkyCreatorFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyCreatorFunctionLibrary, nullptr, "DynamicConvertRenderTargetToTexture2D", nullptr, nullptr, Z_Construct_UFunction_USkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::SkyCreatorFunctionLibrary_eventDynamicConvertRenderTargetToTexture2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::SkyCreatorFunctionLibrary_eventDynamicConvertRenderTargetToTexture2D_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyCreatorFunctionLibrary_ElevationRefraction_Statics
	{
		struct SkyCreatorFunctionLibrary_eventElevationRefraction_Parms
		{
			double f;
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_f;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_ElevationRefraction_Statics::NewProp_f = { "f", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventElevationRefraction_Parms, f), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_ElevationRefraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventElevationRefraction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyCreatorFunctionLibrary_ElevationRefraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_ElevationRefraction_Statics::NewProp_f,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_ElevationRefraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_ElevationRefraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sun Position" },
		{ "ModuleRelativePath", "Public/SkyCreatorFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_ElevationRefraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyCreatorFunctionLibrary, nullptr, "ElevationRefraction", nullptr, nullptr, Z_Construct_UFunction_USkyCreatorFunctionLibrary_ElevationRefraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_ElevationRefraction_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_ElevationRefraction_Statics::SkyCreatorFunctionLibrary_eventElevationRefraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_ElevationRefraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyCreatorFunctionLibrary_ElevationRefraction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_ElevationRefraction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_ElevationRefraction_Statics::SkyCreatorFunctionLibrary_eventElevationRefraction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USkyCreatorFunctionLibrary_ElevationRefraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyCreatorFunctionLibrary_ElevationRefraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics
	{
		struct SkyCreatorFunctionLibrary_eventFindLightningPosition_Parms
		{
			UObject* WorldContextObject;
			bool bSampleCloudDensity;
			int32 Samples;
			UMaterialParameterCollection* ParameterCollection;
			UMaterialInterface* Material;
			UTextureRenderTarget2D* RenderTarget;
			FVector Position;
			float InnerRadius;
			float OuterRadius;
			float MinHeight;
			float MaxHeight;
			float DensityThreshold;
			FVector OutPosition;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_bSampleCloudDensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSampleCloudDensity;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Samples;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParameterCollection;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerRadius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterRadius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHeight;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DensityThreshold;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_bSampleCloudDensity_SetBit(void* Obj)
	{
		((SkyCreatorFunctionLibrary_eventFindLightningPosition_Parms*)Obj)->bSampleCloudDensity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_bSampleCloudDensity = { "bSampleCloudDensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkyCreatorFunctionLibrary_eventFindLightningPosition_Parms), &Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_bSampleCloudDensity_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_Samples = { "Samples", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, Samples), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_ParameterCollection = { "ParameterCollection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, ParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, InnerRadius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_OuterRadius = { "OuterRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, OuterRadius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_MinHeight = { "MinHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, MinHeight), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, MaxHeight), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_DensityThreshold = { "DensityThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, DensityThreshold), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkyCreatorFunctionLibrary_eventFindLightningPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkyCreatorFunctionLibrary_eventFindLightningPosition_Parms), &Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_bSampleCloudDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_Samples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_ParameterCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_InnerRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_OuterRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_MinHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_MaxHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_DensityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_OutPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sky Creator|Utility" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/SkyCreatorFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyCreatorFunctionLibrary, nullptr, "FindLightningPosition", nullptr, nullptr, Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::SkyCreatorFunctionLibrary_eventFindLightningPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::SkyCreatorFunctionLibrary_eventFindLightningPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics
	{
		struct SkyCreatorFunctionLibrary_eventGetCloudDensityAtPosition_Parms
		{
			UObject* WorldContextObject;
			FVector Position;
			UMaterialParameterCollection* ParameterCollection;
			UMaterialInterface* Material;
			UTextureRenderTarget2D* RenderTarget;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParameterCollection;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventGetCloudDensityAtPosition_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventGetCloudDensityAtPosition_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_ParameterCollection = { "ParameterCollection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventGetCloudDensityAtPosition_Parms, ParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventGetCloudDensityAtPosition_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventGetCloudDensityAtPosition_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventGetCloudDensityAtPosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_ParameterCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sky Creator|Utility" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/SkyCreatorFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyCreatorFunctionLibrary, nullptr, "GetCloudDensityAtPosition", nullptr, nullptr, Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::SkyCreatorFunctionLibrary_eventGetCloudDensityAtPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::SkyCreatorFunctionLibrary_eventGetCloudDensityAtPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics
	{
		struct SkyCreatorFunctionLibrary_eventGetRealMoonPosition_Parms
		{
			float Latitude;
			float Longitude;
			float TimeZone;
			bool bIsDaylightSavingTime;
			FDateTime DateTime;
			FCelestialPositionData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Latitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Longitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeZone_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeZone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDaylightSavingTime_MetaData[];
#endif
		static void NewProp_bIsDaylightSavingTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDaylightSavingTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DateTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DateTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_Latitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventGetRealMoonPosition_Parms, Latitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_Latitude_MetaData), Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_Latitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_Longitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventGetRealMoonPosition_Parms, Longitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_Longitude_MetaData), Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_Longitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_TimeZone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_TimeZone = { "TimeZone", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventGetRealMoonPosition_Parms, TimeZone), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_TimeZone_MetaData), Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_TimeZone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_bIsDaylightSavingTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_bIsDaylightSavingTime_SetBit(void* Obj)
	{
		((SkyCreatorFunctionLibrary_eventGetRealMoonPosition_Parms*)Obj)->bIsDaylightSavingTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_bIsDaylightSavingTime = { "bIsDaylightSavingTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkyCreatorFunctionLibrary_eventGetRealMoonPosition_Parms), &Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_bIsDaylightSavingTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_bIsDaylightSavingTime_MetaData), Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_bIsDaylightSavingTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_DateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventGetRealMoonPosition_Parms, DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_DateTime_MetaData), Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_DateTime_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventGetRealMoonPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FCelestialPositionData, METADATA_PARAMS(0, nullptr) }; // 355819401
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_Latitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_Longitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_TimeZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_bIsDaylightSavingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_DateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sky Creator|Sun & Moon Position" },
		{ "ModuleRelativePath", "Public/SkyCreatorFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyCreatorFunctionLibrary, nullptr, "GetRealMoonPosition", nullptr, nullptr, Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::SkyCreatorFunctionLibrary_eventGetRealMoonPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::SkyCreatorFunctionLibrary_eventGetRealMoonPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics
	{
		struct SkyCreatorFunctionLibrary_eventGetRealSunPosition_Parms
		{
			float Latitude;
			float Longitude;
			float TimeZone;
			bool bIsDaylightSavingTime;
			FDateTime DateTime;
			FCelestialPositionData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Latitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Longitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeZone_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeZone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDaylightSavingTime_MetaData[];
#endif
		static void NewProp_bIsDaylightSavingTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDaylightSavingTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DateTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DateTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_Latitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventGetRealSunPosition_Parms, Latitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_Latitude_MetaData), Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_Latitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_Longitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventGetRealSunPosition_Parms, Longitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_Longitude_MetaData), Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_Longitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_TimeZone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_TimeZone = { "TimeZone", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventGetRealSunPosition_Parms, TimeZone), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_TimeZone_MetaData), Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_TimeZone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_bIsDaylightSavingTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_bIsDaylightSavingTime_SetBit(void* Obj)
	{
		((SkyCreatorFunctionLibrary_eventGetRealSunPosition_Parms*)Obj)->bIsDaylightSavingTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_bIsDaylightSavingTime = { "bIsDaylightSavingTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkyCreatorFunctionLibrary_eventGetRealSunPosition_Parms), &Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_bIsDaylightSavingTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_bIsDaylightSavingTime_MetaData), Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_bIsDaylightSavingTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_DateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventGetRealSunPosition_Parms, DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_DateTime_MetaData), Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_DateTime_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventGetRealSunPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FCelestialPositionData, METADATA_PARAMS(0, nullptr) }; // 355819401
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_Latitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_Longitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_TimeZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_bIsDaylightSavingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_DateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sky Creator|Sun & Moon Position" },
		{ "ModuleRelativePath", "Public/SkyCreatorFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyCreatorFunctionLibrary, nullptr, "GetRealSunPosition", nullptr, nullptr, Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::SkyCreatorFunctionLibrary_eventGetRealSunPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::SkyCreatorFunctionLibrary_eventGetRealSunPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics
	{
		struct SkyCreatorFunctionLibrary_eventIsApplicationForegroundNow_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkyCreatorFunctionLibrary_eventIsApplicationForegroundNow_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkyCreatorFunctionLibrary_eventIsApplicationForegroundNow_Parms), &Z_Construct_UFunction_USkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sky Creator|Utility" },
		{ "ModuleRelativePath", "Public/SkyCreatorFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyCreatorFunctionLibrary, nullptr, "IsApplicationForegroundNow", nullptr, nullptr, Z_Construct_UFunction_USkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::SkyCreatorFunctionLibrary_eventIsApplicationForegroundNow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::SkyCreatorFunctionLibrary_eventIsApplicationForegroundNow_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USkyCreatorFunctionLibrary_IsApplicationForegroundNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyCreatorFunctionLibrary_KilometersToCentimeters_Statics
	{
		struct SkyCreatorFunctionLibrary_eventKilometersToCentimeters_Parms
		{
			float Value;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventKilometersToCentimeters_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_USkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyCreatorFunctionLibrary_eventKilometersToCentimeters_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sky Creator|Utility" },
		{ "Comment", "/* Convert Kilometers to Centimeters */" },
		{ "ModuleRelativePath", "Public/SkyCreatorFunctionLibrary.h" },
		{ "ToolTip", "Convert Kilometers to Centimeters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyCreatorFunctionLibrary, nullptr, "KilometersToCentimeters", nullptr, nullptr, Z_Construct_UFunction_USkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::SkyCreatorFunctionLibrary_eventKilometersToCentimeters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::SkyCreatorFunctionLibrary_eventKilometersToCentimeters_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USkyCreatorFunctionLibrary_KilometersToCentimeters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkyCreatorFunctionLibrary);
	UClass* Z_Construct_UClass_USkyCreatorFunctionLibrary_NoRegister()
	{
		return USkyCreatorFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USkyCreatorFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkyCreatorFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USkyCreatorFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkyCreatorFunctionLibrary_CentimetersToKilometers, "CentimetersToKilometers" }, // 4104751657
		{ &Z_Construct_UFunction_USkyCreatorFunctionLibrary_CheckCloudDensityAtPosition, "CheckCloudDensityAtPosition" }, // 846185585
		{ &Z_Construct_UFunction_USkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D, "ConvertRenderTargetToTexture2D" }, // 149709659
		{ &Z_Construct_UFunction_USkyCreatorFunctionLibrary_CreateAndAssignMID, "CreateAndAssignMID" }, // 265280332
		{ &Z_Construct_UFunction_USkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D, "DynamicConvertRenderTargetToTexture2D" }, // 2704379218
		{ &Z_Construct_UFunction_USkyCreatorFunctionLibrary_ElevationRefraction, "ElevationRefraction" }, // 787903810
		{ &Z_Construct_UFunction_USkyCreatorFunctionLibrary_FindLightningPosition, "FindLightningPosition" }, // 2937147563
		{ &Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetCloudDensityAtPosition, "GetCloudDensityAtPosition" }, // 2522692566
		{ &Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealMoonPosition, "GetRealMoonPosition" }, // 3610963251
		{ &Z_Construct_UFunction_USkyCreatorFunctionLibrary_GetRealSunPosition, "GetRealSunPosition" }, // 820873037
		{ &Z_Construct_UFunction_USkyCreatorFunctionLibrary_IsApplicationForegroundNow, "IsApplicationForegroundNow" }, // 991201923
		{ &Z_Construct_UFunction_USkyCreatorFunctionLibrary_KilometersToCentimeters, "KilometersToCentimeters" }, // 777171279
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkyCreatorFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/SkyCreatorFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkyCreatorFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkyCreatorFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkyCreatorFunctionLibrary_Statics::ClassParams = {
		&USkyCreatorFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USkyCreatorFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USkyCreatorFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_USkyCreatorFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkyCreatorFunctionLibrary.OuterSingleton, Z_Construct_UClass_USkyCreatorFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkyCreatorFunctionLibrary.OuterSingleton;
	}
	template<> SKYCREATORPLUGIN_API UClass* StaticClass<USkyCreatorFunctionLibrary>()
	{
		return USkyCreatorFunctionLibrary::StaticClass();
	}
	USkyCreatorFunctionLibrary::USkyCreatorFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyCreatorFunctionLibrary);
	USkyCreatorFunctionLibrary::~USkyCreatorFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_Statics::ScriptStructInfo[] = {
		{ FCelestialPositionData::StaticStruct, Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewStructOps, TEXT("CelestialPositionData"), &Z_Registration_Info_UScriptStruct_CelestialPositionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCelestialPositionData), 355819401U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkyCreatorFunctionLibrary, USkyCreatorFunctionLibrary::StaticClass, TEXT("USkyCreatorFunctionLibrary"), &Z_Registration_Info_UClass_USkyCreatorFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkyCreatorFunctionLibrary), 1317291302U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_305386958(TEXT("/Script/SkyCreatorPlugin"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

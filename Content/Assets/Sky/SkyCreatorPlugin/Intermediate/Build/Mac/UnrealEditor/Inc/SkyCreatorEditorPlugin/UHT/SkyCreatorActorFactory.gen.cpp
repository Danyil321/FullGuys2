// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyCreatorEditorPlugin/Public/SkyCreatorActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyCreatorActorFactory() {}
// Cross Module References
	SKYCREATOREDITORPLUGIN_API UClass* Z_Construct_UClass_USkyCreatorActorFactory();
	SKYCREATOREDITORPLUGIN_API UClass* Z_Construct_UClass_USkyCreatorActorFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_SkyCreatorEditorPlugin();
// End Cross Module References
	void USkyCreatorActorFactory::StaticRegisterNativesUSkyCreatorActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkyCreatorActorFactory);
	UClass* Z_Construct_UClass_USkyCreatorActorFactory_NoRegister()
	{
		return USkyCreatorActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_USkyCreatorActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkyCreatorActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorEditorPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorActorFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorActorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SkyCreatorActorFactory.h" },
		{ "ModuleRelativePath", "Public/SkyCreatorActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkyCreatorActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkyCreatorActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkyCreatorActorFactory_Statics::ClassParams = {
		&USkyCreatorActorFactory::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001030ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorActorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_USkyCreatorActorFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USkyCreatorActorFactory()
	{
		if (!Z_Registration_Info_UClass_USkyCreatorActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkyCreatorActorFactory.OuterSingleton, Z_Construct_UClass_USkyCreatorActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkyCreatorActorFactory.OuterSingleton;
	}
	template<> SKYCREATOREDITORPLUGIN_API UClass* StaticClass<USkyCreatorActorFactory>()
	{
		return USkyCreatorActorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyCreatorActorFactory);
	USkyCreatorActorFactory::~USkyCreatorActorFactory() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorEditorPlugin_Public_SkyCreatorActorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorEditorPlugin_Public_SkyCreatorActorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkyCreatorActorFactory, USkyCreatorActorFactory::StaticClass, TEXT("USkyCreatorActorFactory"), &Z_Registration_Info_UClass_USkyCreatorActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkyCreatorActorFactory), 2499796766U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorEditorPlugin_Public_SkyCreatorActorFactory_h_3809539191(TEXT("/Script/SkyCreatorEditorPlugin"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorEditorPlugin_Public_SkyCreatorActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkyCreatorPlugin_Source_SkyCreatorEditorPlugin_Public_SkyCreatorActorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 2023 Dmitry Karpukhin. All Rights Reserved.

#include "SkyCreatorShaders.h"
#include "Interfaces/IPluginManager.h"
#include "ShaderCore.h"

//#define LOCTEXT_NAMESPACE "FSkyCreatorEditorPluginModule"

void FSkyCreatorShadersModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FString PluginShaderDir = FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("SkyCreatorPlugin"))->GetBaseDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping(TEXT("/Plugin/SkyCreatorPlugin"), PluginShaderDir);
}

void FSkyCreatorShadersModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSkyCreatorShadersModule, SkyCreatorShaders)
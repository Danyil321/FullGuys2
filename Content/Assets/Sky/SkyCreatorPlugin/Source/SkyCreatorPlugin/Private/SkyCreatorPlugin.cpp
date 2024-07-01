// Copyright 2023 Dmitry Karpukhin. All Rights Reserved.

#include "SkyCreatorPlugin.h"
#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FSkyCreatorPluginModule"

void FSkyCreatorPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FSkyCreatorPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSkyCreatorPluginModule, SkyCreatorPlugin)
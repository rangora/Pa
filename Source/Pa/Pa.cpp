// Copyright Epic Games, Inc. All Rights Reserved.

#include "Pa.h"

#include "Modules/ModuleManager.h"
#include "Framework/Application/SlateApplication.h"

#include "PaGameResource.h"

IMPLEMENT_PRIMARY_GAME_MODULE(PaGameModule, Pa, "Pa");

PaGameModule* PaGameModule::GameModule = nullptr;

void PaGameModule::StartupModule()
{
    FDefaultGameModuleImpl::StartupModule();

    if (FSlateApplication::IsInitialized())
    {
        // LoadScreen
    }

    GameModule = this;
    LoadGameResource();
}

void PaGameModule::LoadGameResource()
{
    if (!IsValid(GameResource))
    {
        static const FSoftObjectPath GameResourcePath("/Game/BP_PaGameResource.BP_PaGameResource_C");

        const UClass* GameResourceBPClass = Cast<UClass>(GameResourcePath.TryLoad());

        GameResource = NewObject<UPaGameResource>(GetTransientPackage(), GameResourceBPClass);
    }

    if (ensure(GameResource))
    {
        GameResource->AddToRoot();
    }
}

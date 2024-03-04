// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

class PaGameModule : public FDefaultGameModuleImpl 
{
public:
    void StartupModule() final;

    static PaGameModule* Get() { return GameModule; }
    class UPaGameResource* GetGameResource() { return GameResource; }

private:
    void LoadGameResource();

    static PaGameModule* GameModule;
    TObjectPtr<UPaGameResource> GameResource = nullptr;
};
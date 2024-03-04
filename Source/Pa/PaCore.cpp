// Fill out your copyright notice in the Description page of Project Settings.

#include "PaCore.h"

#include "Pa.h"
#include "PaGameResource.h"

PA_API UPaGameResource& PaCore::GetGameResource()
{
    UPaGameResource* GameResource = nullptr;

    if (auto GameModule = PaGameModule::Get(); ensure(GameModule))
    {
        GameResource = GameModule->GetGameResource();
    }

    check(GameResource);

    return *GameResource;
}

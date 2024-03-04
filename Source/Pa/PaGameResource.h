// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PaGameResource.generated.h"

UCLASS(Blueprintable)
class PA_API UPaGameResource : public UObject
{
	GENERATED_BODY()

public:	
	UPaGameResource(const FObjectInitializer& InObjectInitializer);
};

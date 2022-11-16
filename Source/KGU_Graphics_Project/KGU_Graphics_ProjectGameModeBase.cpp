// Copyright Epic Games, Inc. All Rights Reserved.


#include "KGU_Graphics_ProjectGameModeBase.h"

void AKGU_Graphics_ProjectGameModeBase::StartPlay()
{
    Super::StartPlay();

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSGameMode!"));
    }
}
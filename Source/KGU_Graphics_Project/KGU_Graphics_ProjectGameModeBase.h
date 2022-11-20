// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "KGU_Graphics_ProjectGameModeBase.generated.h"

UCLASS()
class KGU_GRAPHICS_PROJECT_API AKGU_Graphics_ProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	virtual void StartPlay() override;
};

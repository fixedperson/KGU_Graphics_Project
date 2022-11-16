// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FPSHUD.generated.h"

/**
 * 
 */
UCLASS()
class KGU_GRAPHICS_PROJECT_API AFPSHUD : public AHUD
{
	GENERATED_BODY()
protected:
    // ȭ�� �߾ӿ� �׷��� ���Դϴ�.
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* CrosshairTexture;

public:
    // HUD �� ���� �ֿ� ��� ���Դϴ�.
    virtual void DrawHUD() override;
};

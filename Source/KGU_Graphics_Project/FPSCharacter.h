// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPSCharacter.generated.h"


UCLASS()
class KGU_GRAPHICS_PROJECT_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// ���� �̵� ó��
	UFUNCTION()
	void MoveForward(float Value);

	// �¿� �̵� ó��
	UFUNCTION()
	void MoveRight(float Value);

	// Ű�� ������ ���� �÷��׸� �����մϴ�.
	UFUNCTION()
	void StartJump();

	// Ű�� ���� ���� �÷��׸� ����ϴ�.
	UFUNCTION()
	void StopJump();

	// �߻� ó��
	UFUNCTION()
	void Fire();

	// �Ѿ� �����޼��� ���
	UFUNCTION(BlueprintImplementableEvent)
	void PrintOnBulletError();

	// ���� �Ѿ� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = bullet)
	int count;

	// FPS ī�޶�
	UPROPERTY(VisibleAnywhere)
	class UCameraComponent* FPSCameraComponent;

	// ����Ī �޽� (��), ���� �÷��̾�Ը� ���Դϴ�.
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	USkeletalMeshComponent* FPSMesh;

	// ī�޶� ��ġ������ �ѱ� ������
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	FVector MuzzleOffset;

	// ������ų ������Ÿ�� Ŭ����
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TSubclassOf<class AFPSProjectile> ProjectileClass;

};

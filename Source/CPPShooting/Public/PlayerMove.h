// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerMove.generated.h"

// ����� �Է¿� ���� �����¿�� �̵��ϰ� �ʹ�.
// �ʿ�Ӽ� : �̵��ӵ�

UCLASS( ClassGroup=(HO), meta=(BlueprintSpawnableComponent) )
class CPPSHOOTING_API UPlayerMove : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayerMove();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	// �ʿ�Ӽ� : �̵��ӵ�
	// UPROPERTY�� ��ũ�� �Լ��̹Ƿ� ���ڸ� ���� �� ����
	// EditAnywhere ��𼭵� ���� ����
	// VisibleAnyWhere ���⸸ ����
	UPROPERTY(EditAnywhere, Category = "Setting", BlueprintReadOnly)
	float speed = 500;

private :
	UPROPERTY()
	class AShootPlayer* me; // class ���漱���� �ϰ� �Ǹ� ������ �ִ� �� �˰� �ν��� �ϰ� �ȴ�.
	// ���̶�� �޸� ������ �ö󰡱� ������
	// UPROPERTY�� ���, ����Ʈ �����͸� ����ؼ� �޸𸮸� �������� �������� ��� ��
};

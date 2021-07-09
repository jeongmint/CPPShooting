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
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// ����� �Է¿� ���� �����¿�� �̵��ϰ� �ʹ�.
	// 1. ������ �ʿ�
	FVector dir = FVector::RightVector;
	// 2. �̵��ϰ� �ʹ�.
	// P = P0 + vt
	// ��� 1 ) AActor* me = GetOwner(); // Component�� �����ϰ� �ִ� Actor�� ��ȯ
	// ��� 2)
	AShootPlayer* me = Cast<AShootPlayer> GetOwner();
	// ����� ����ȯ�� �ؼ� ��ݾ��� ���� ���� �ʵ��� �Ѵ�.

	if (me)
	{
		FVector P0 = me->GetActorLocation();
		FVector P = P0 + dir * speed * DeltaTime;
		me->SetActorLocation(P);
		//me->SetActorLocation();
	}

public:
	// �ʿ�Ӽ� : �̵��ӵ�
	float speed = 500;
		
};

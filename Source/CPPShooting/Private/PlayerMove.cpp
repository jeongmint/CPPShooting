// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerMove.h"

// Sets default values for this component's properties
UPlayerMove::UPlayerMove()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPlayerMove::BeginPlay()
{
	Super::BeginPlay();

	// �� ������Ʈ�� �����ϰ� �ִ� ���͸� ��ȯ
	me = Cast<AShootPlayer>(GetOwner());
	
}


// Called every frame
void UPlayerMove::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
		// ����� �Է¿� ���� �����¿�� �̵��ϰ� �ʹ�.
	// 1. ������ �ʿ�
	FVector dir = FVector::RightVector;
	// 2. �̵��ϰ� �ʹ�.
	// P = P0 + vt
	// ��� 1 ) AActor* me = GetOwner(); // Component�� �����ϰ� �ִ� Actor�� ��ȯ
	// ��� 2)
	AShootPlayer* me = Cast<AShootPlayer> (GetOwner());
	// ����� ����ȯ�� �ؼ� ��ݾ��� ���� ���� �ʵ��� �Ѵ�.

	if (me)
	{
		FVector P0 = me->GetActorLocation();
		FVector P = P0 + dir * speed * DeltaTime;
		me->SetActorLocation(P);
		//me->SetActorLocation();
	}
}


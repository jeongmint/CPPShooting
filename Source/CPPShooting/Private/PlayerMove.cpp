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

	// 이 컴포넌트를 소유하고 있는 액터를 반환
	me = Cast<AShootPlayer>(GetOwner());
	
}


// Called every frame
void UPlayerMove::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// ...
		// 사용자 입력에 따라 상하좌우로 이동하고 싶다.
	// 1. 방향이 필요
	// FVector dir = FVector::RightVector;
	
	FVector dir = FVector(0, h, v);

	// 2. 이동하고 싶다.
	// P = P0 + vt
	// 방법 1 ) AActor* me = GetOwner(); // Component를 소유하고 있는 Actor를 반환
	// 방법 2)
	AShootPlayer* me = Cast<AShootPlayer> (GetOwner());
	// 명시적 형변환을 해서 뜬금없는 값이 들어가지 않도록 한다.

	if (me)
	{
		FVector P0 = me->GetActorLocation();
		FVector P = P0 + dir * speed * DeltaTime;
		me->SetActorLocation(P);
		//me->SetActorLocation();
	}
}

void UPlayerMove::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAxis(TEXT("Horizontal"), this, &UPlayerMove::Horizontal);
	PlayerInputComponent->BindAxis(TEXT("Vertical"), this, &UPlayerMove::Vertical);
}

void UPlayerMove::Horizontal(float value) {
	h = value;
}

void UPlayerMove::Vertical(float value) {
	v = value;
}

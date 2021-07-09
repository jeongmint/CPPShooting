// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerMove.generated.h"

// 사용자 입력에 따라 상하좌우로 이동하고 싶다.
// 필요속성 : 이동속도

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
	// 사용자 입력에 따라 상하좌우로 이동하고 싶다.
	// 1. 방향이 필요
	FVector dir = FVector::RightVector;
	// 2. 이동하고 싶다.
	// P = P0 + vt
	// 방법 1 ) AActor* me = GetOwner(); // Component를 소유하고 있는 Actor를 반환
	// 방법 2)
	AShootPlayer* me = Cast<AShootPlayer> GetOwner();
	// 명시적 형변환을 해서 뜬금없는 값이 들어가지 않도록 한다.

	if (me)
	{
		FVector P0 = me->GetActorLocation();
		FVector P = P0 + dir * speed * DeltaTime;
		me->SetActorLocation(P);
		//me->SetActorLocation();
	}

public:
	// 필요속성 : 이동속도
	float speed = 500;
		
};

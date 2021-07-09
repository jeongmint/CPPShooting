// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CPPShooting.h"
#include "GameFramework/Pawn.h"
#include "ShootPlayer.generated.h"

UCLASS()
class CPPSHOOTING_API AShootPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AShootPlayer();

protected:
	AShootPlayer();
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	//PlayerMove 컴포넌트 추가
	UPROPERTY(VisibleAnywhere, Category="Component") // 안 해주면 인식을 못함
	class UPlayerMove* playerMove;

};

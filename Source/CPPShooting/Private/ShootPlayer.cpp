// Fill out your copyright notice in the Description page of Project Settings.

#include "ShootPlayer.h"
#include "CPPShooting.h"
#include "PlayerMove.h"

// Sets default values
AShootPlayer::AShootPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Actor 를 이루는 컴포넌트를 붙이도록 한다.(Add Component 초록색 버튼과 같은 역할)
	playerMove = CreateDefaultSubobject<UPlayerMove>(TEXT("PlayerMove"));

}

// Called when the game starts or when spawned
void AShootPlayer::BeginPlay()
{
	Super::BeginPlay();

	PRINTLOG(TEXT("%s"), TEXT("Hello World"));
}

// Called every frame
void AShootPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShootPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// PlayerMove 컴포넌트의 SetupPlayer 함수를 호출하고 싶다.
}


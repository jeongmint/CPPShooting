// Copyright Epic Games, Inc. All Rights Reserved.


#include "CPPShootingGameModeBase.h"


ACPPShootingGameModeBase::ACPPShootingGameModeBase() // 어디서 구현을 할 것인지 ::로 소속을 표시해 준다.
{
	int32 a = 10;
	float f = 2.05f;
	bool b = true;
	int c = (b == true) ? 10 : 100;

	FString str = TEXT("Brad");

	UE_LOG(LogTemp, Warning, TEXT("%s %d %.2f %s"), TEXT("Hello World"), a, f, (b)?TEXT("true") : TEXT("false"));
}


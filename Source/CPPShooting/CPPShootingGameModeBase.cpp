// Copyright Epic Games, Inc. All Rights Reserved.


#include "CPPShootingGameModeBase.h"


ACPPShootingGameModeBase::ACPPShootingGameModeBase() // ��� ������ �� ������ ::�� �Ҽ��� ǥ���� �ش�.
{
	int32 a = 10;
	float f = 2.05f;
	bool b = true;
	int c = (b == true) ? 10 : 100;

	FString str = TEXT("Brad");

	UE_LOG(LogTemp, Warning, TEXT("%s %d %.2f %s"), TEXT("Hello World"), a, f, (b)?TEXT("true") : TEXT("false"));
}


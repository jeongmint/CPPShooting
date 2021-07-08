// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPPShootingGameModeBase.h"

int ACPPShootingGameModeBase::a = 10;

ACPPShootingGameModeBase::ACPPShootingGameModeBase() // 어디서 구현을 할 것인지 ::로 소속을 표시해 준다.
{
	TArray<int> arr;
	arr.Add(10);
	arr.Add(195);
	arr.Add(11);

	arr.RemoveAt(0);

	int size = arr.Num();	// arr 배열의 size를 세는 함수

	for (int i = 0; i < size; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d"), arr[i]);
	}

	for (int value : arr)		// arr에 있는 요소들을 value로 하나씩 받아온다.
	{
		UE_LOG(LogTemp, Warning, TEXT("%d"), value);
	}

}


// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPPShootingGameModeBase.h"

int ACPPShootingGameModeBase::a = 10;

ACPPShootingGameModeBase::ACPPShootingGameModeBase() // ��� ������ �� ������ ::�� �Ҽ��� ǥ���� �ش�.
{
	TArray<int> arr;
	arr.Add(10);
	arr.Add(195);
	arr.Add(11);

	arr.RemoveAt(0);

	int size = arr.Num();	// arr �迭�� size�� ���� �Լ�

	for (int i = 0; i < size; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d"), arr[i]);
	}

	for (int value : arr)		// arr�� �ִ� ��ҵ��� value�� �ϳ��� �޾ƿ´�.
	{
		UE_LOG(LogTemp, Warning, TEXT("%d"), value);
	}

}


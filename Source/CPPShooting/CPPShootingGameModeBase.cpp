// Copyright Epic Games, Inc. All Rights Reserved.


#include "CPPShootingGameModeBase.h"


ACPPShootingGameModeBase::ACPPShootingGameModeBase() // ��� ������ �� ������ ::�� �Ҽ��� ǥ���� �ش�.
{
	int32 a = 10;
	float f = 2.05f;
	bool b = true;
	int c = (b == true) ? 10 : 100;

	FString str1 = TEXT("Brad"); //FString(���� ����, ��ҹ��ڱ���x) ������ �����ε� ���, �������� �����ͷ� ����, 2���� �迭
	FString str2 = TEXT("Brad") + FString("ho"); 	// ���������� �����ڰ� �ۿ� // + TEXT�� �Ұ�
	str1.Append(TEXT("hoho"));


	FString itos = FString::FromInt(10);
	FString ftos = FString::SanitizeFloat(2.0f);
	// ���� ������ ���ڿ��� ��� �ϳ��� ���ڿ��� ����� ���� ��

	FString msg = FString::Printf(TEXT("%s"), *str1);

	UE_LOG(LogTemp, Warning, TEXT("%s"), *msg);

}


// Copyright Epic Games, Inc. All Rights Reserved.


#include "CPPShootingGameModeBase.h"


ACPPShootingGameModeBase::ACPPShootingGameModeBase() // 어디서 구현을 할 것인지 ::로 소속을 표시해 준다.
{
	int32 a = 10;
	float f = 2.05f;
	bool b = true;
	int c = (b == true) ? 10 : 100;

	FString str1 = TEXT("Brad"); //FString(조작 가능, 대소문자구분x) 연산자 오버로딩 기능, 포인터의 포인터로 전달, 2차원 배열
	FString str2 = TEXT("Brad") + FString("ho"); 	// 내부적으로 연산자가 작용 // + TEXT는 불가
	str1.Append(TEXT("hoho"));


	FString itos = FString::FromInt(10);
	FString ftos = FString::SanitizeFloat(2.0f);
	// 여러 형식의 문자열을 묶어서 하나의 문자열로 만들고 싶을 때

	FString msg = FString::Printf(TEXT("%s"), *str1);

	UE_LOG(LogTemp, Warning, TEXT("%s"), *msg);

}


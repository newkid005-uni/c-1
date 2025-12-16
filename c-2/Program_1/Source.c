#include <stdio.h>

void main()
{
#pragma region 조건문
	//어떤 조건이 주어질 때 해당 조건에 따라 동작을
	//수행하도록 실행하는 명령문입니다.

#pragma region 관계 연산자
	//두 개의 피연산자의 값을 비교하여 그 결과를 0 또는
	//1이라는 값으로 나타내는 연산자입니다.

	//int accuracy = 10;
	//int attack = 20;
	//
	//printf("accuracy < attack : %d\n", accuracy < attack);
	//
	//printf("10 < 20 : %d\n", 10 < 20);
	//
	//printf("10 > 20 : %d\n", 10 > 20);
	//
	//printf("20 <= 30 : %d\n", 20 <= 30);
	//
	//printf("30 >= 20 : %d\n", 30 >= 20);
	//
	//printf("10 != 20 : %d\n", 10 != 20);
	//
	//printf("10 == 20 : %d\n", 10 == 20);

	//관계 연산자는 조건이 맞을 때 1이라는 값으로 반환되며,
	//조건이 틀릴 때 0이라는 값으로 반환됩니다.

#pragma endregion

#pragma region if문
	//어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는
	//명령문입니다.

	//int health = 0;
	//if (health <= 0)
	//{
	//	printf("Destroy");
	//}

	//if문은 조건이 1일 때 실행되며, 0일 때 실행되지 않습니다.


#pragma endregion

#pragma region else if문
	//if문의 조건이 틀릴 때 else if문의 조건이
	//맞다면 실행되는 명령문입니다.

	//int level = 10;
	//if (level >= 20)
	//{
	//	printf("2차전직 가이드 팝업");
	//}
	//else if (level < 20)
	//{
	//	printf("사냥터제시 팝업");
	//}

	//else if문은 여러번 정의할 수 있으며, if문이
	//존재할 때 사용할 수 있습니다.

#pragma endregion

#pragma region else문
	//if문과 else if문의 조건이 다 틀리면
	//실행되는 명령문입니다.

	int integer = 0;

	if (integer > 0)
	{
		printf("양수입니다.");
	}
	else if (integer < 0)
	{
		printf("음수입니다.");
	}
	else
	{
		printf("0입니다.");
	}

	//if문에 연결된 모든 조건문의 조건이 맞을 때
	//가장 위에 있는 조건문만 실행됩니다.

#pragma endregion

#pragma endregion

}
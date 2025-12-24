#include <stdio.h>

void main()
{
#pragma region 배열
	//같은 자료형의 변수들로 이루어진 유한 집합입니다.
	
	//int list[5];
	//
	////배열의 경우 첫 번째 원소는 0부터 시작합니다.
	//
	//for (int i = 0; i<5;i++)
	//{
	//	list[i] = (i + 1) * 10;
	//	printf("%d\n", list[i]);
	//}
	
	//배열의 메모리 공간은 프로그램이 실행되는 동안
	//변경할 수 없습니다.

	//int array[] = { 1,2,3,4,5 };
	//
	//for (int i = 0; i < sizeof(array) / sizeof(array[0]);i++)
	//{
	//	printf("array[%d] : %d\n", i, array[i]);
	//}
	//printf("\n배열의 크기 : %d\n", (int) sizeof(array) /(int) sizeof(array[0]));

	//배열의 크기는 생략할 수 있으며, 초기화 목록에서
	//설정한 요소에 따라 배열의 크기가 결정됩니다.

	//숙제 : 배열 다음수의 값을 참조해서 포인터로 수정할 것

	int array[5] = { 10,20,30,40,50 };
	int* pointer = &array;

	//*pointer = 22;

	printf("%d\n%u\n%u", *pointer,pointer,&array[0]);




#pragma endregion


}
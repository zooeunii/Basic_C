// do..while 문을 이용한 메뉴
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	do {
		printf("1---새로 만들기\n");
		printf("2---파일 열기\n");
		printf("3---파일 닫기\n");
		printf("하나를 선택하시오.\n");
		scanf("%d", &i);
	} while (i < 1 || i>3);

	printf("선택된 메뉴 = %d", i);

	return 0;
}
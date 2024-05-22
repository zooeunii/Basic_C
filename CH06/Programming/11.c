// 문자를 입력받는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a;

	printf("문자를 입력하시오: ");
	a = getchar();

	if (a == 'R' || a == 'r')
		printf("Rectangle\n");
	else if (a == 'T' || a == 't')
		printf("Triangle\n");
	else if (a == 'C' || a == 'c')
		printf("Circle\n");
	else
		printf("Unknown");

	return 0;
}
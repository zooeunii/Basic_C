// 가장 작은 값을 결정하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, z, min;

	printf("정수 3개를 입력하시오: ");
	scanf("%d %d %d", &x, &y, &z);

	if (x > y)
		min = y;
	else
		min = x;

	if (min < z)
		printf("제일 작은 정수는 %d입니다.", min);
	else
		printf("제일 작은 정수는 %d입니다.", z);

	return 0;
}
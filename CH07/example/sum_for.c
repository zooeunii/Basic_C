// 반복을 이용한 정수합 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	int sum = 0;

	for (i = 1;i <= 10;i++)
		sum += i;
	printf("1부터 10까지의 정수의 합=%d", sum);

	return 0;
}
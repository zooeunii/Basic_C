#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, max;
	printf("정수 3개를 입력하시오: ");
	scanf("%d %d %d", &a, &b, &c);

	max = a > b ? (a > c ? a : c) : (b > c ? b : c);

	printf("최댓값은 %d입니다.", max);

	return 0;
}
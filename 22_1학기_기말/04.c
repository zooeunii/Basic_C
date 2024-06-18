#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y;
	int sum;

	printf("2개의 실수를 입력하시오: ");
	scanf("%lf %lf", &x, &y);

	sum = (int)x + (int)y;

	printf("\n정수부의 합=%d\n", sum);

	return 0;
}
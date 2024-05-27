#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, n, i;
	double result = 1.0;

	printf("실수의 값을 입력하시오: ");
	scanf("%lf", &x);
	printf("거듭 제곱 횟수를 입력하시오: ");
	scanf("%lf", &n);

	for (i = 1; i <= n; i++)
		result = result * x;

	printf("결과값은 %lf", result);


	return 0;
}
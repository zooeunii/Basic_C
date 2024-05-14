#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y;
	double add, minus, multiply, quotient;
	printf("실수를 입력하시오: ");
	scanf("%lf %lf", &x, &y);

	add = x + y;
	minus = x - y;
	multiply = x * y;
	quotient = x / y;
	printf("%.2lf %.2lf %.2lf %.2lf", add, minus, multiply, quotient);

	return 0;
}

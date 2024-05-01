#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x;	//weight_on_earth
	double y;	//weight_on_moon

	printf("몸무게를 입력하시오(단위: kg): ");
	scanf("%lf", &x);

	y = x * 0.17;
	printf("달에서의 몸무게는 %.2lfkg입니다.\n", y);

	return 0;
}
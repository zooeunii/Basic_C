// 함수의 함숫값을 계산하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y;
	printf("x의 값을 입력하시오: ");
	scanf("%lf", &x);

	if (x <= 0) 
	{
		y = x * x - 9 * x + 2;
		printf("f(x)의 값은 %.2lf 입니다.", y);
	}
	else if (x > 0)
	{
		y = 7 * x + 2;
		printf("f(x)의 값은 %.2lf 입니다.", y);

		return 0;
	}
}
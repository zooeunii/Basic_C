// 형변환 예제 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c;
	int i;
	double f;

	c = 10000;
	i = 1.23456 + 10;
	f = 10 + 20;
	printf("c=%d, i=%d, f=%lf\n", c, i, f);

	return 0;
}

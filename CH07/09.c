#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, i, gcd, lcm;
	printf("정수 2개를 구하시오: ");
	scanf("%d %d", &n1, &n2);

	for (i = 1; i <= n1 && i <= n2; i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
			gcd = i;
	}
	lcm = n1 * n2 / gcd;
	printf("최소공배수는 %d입니다.",lcm);
	return 0;
}
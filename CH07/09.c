#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, i, gcd, lcm;
	printf("���� 2���� ���Ͻÿ�: ");
	scanf("%d %d", &n1, &n2);

	for (i = 1; i <= n1 && i <= n2; i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
			gcd = i;
	}
	lcm = n1 * n2 / gcd;
	printf("�ּҰ������ %d�Դϴ�.",lcm);
	return 0;
}
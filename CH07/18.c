#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i;
	double sum = 0;

	printf("���� ����: ");
	scanf("%d", &n);

	for (i = 1;i <= n;i++)
		sum = sum + (1.0 / i);

	printf("������ ��=%lf", sum);

	return 0;
}
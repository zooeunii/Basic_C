#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n)
{
	int i, result = 1;

	for (i = 1;i <= n;i++)
		result *= i;
	return result;
}

int main()
{
	int n;
	printf("�˰� ���� ���丮���� ����? ");
	scanf("%d", &n);
	printf("%d!�� ���� %d�Դϴ�. \n", n, factorial(n));
	return 0;
}
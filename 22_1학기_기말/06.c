#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int m, n, i;
	int result = 1;

	printf("���� m �Է�-> ");
	scanf("%d", &m);
	printf("���� n �Է�-> ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		result *= m;

	printf("\n%d�� %d ������ %d�Դϴ�.\n", m, n, result);

	return 0;
}
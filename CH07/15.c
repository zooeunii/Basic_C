#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, r, i;
	int permutation = 1;

	printf("n�� ��: ");
	scanf("%d", &n);
	printf("r�� ��: ");
	scanf("%d", &r);

	for (i = n;i >= (n - r + 1);i--)
		permutation *= i;

	printf("������ ���� %d�Դϴ�.", permutation);

	return 0;
}
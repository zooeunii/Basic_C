#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LIMIT 10000

int main()
{
	int i = 1, sum = 0;
	do {
		sum += i;	i++;
	} while (sum<10000);
	printf("1���� n������ �� �߿��� 10000�� ���� �ʴ� ���� ū ����?\n");
	printf("1���� %d������ ���� %d�Դϴ�.", i-2, sum-(i-1));

	return 0;
}
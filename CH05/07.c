#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, time;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	printf("2�� ���ϰ� ���� Ƚ��: ");
	scanf("%d", &time);

	printf("\n%d<<%d�� ��: %d", x, time, x << time);

	return 0;
}
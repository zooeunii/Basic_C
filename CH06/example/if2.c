// if ���� ����Ͽ� ������ ���ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &number);

	if (number < 0)
		number = -number;

	printf("������ %d�Դϴ�.", number);

	return 0;
}
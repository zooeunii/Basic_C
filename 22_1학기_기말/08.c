#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("�ݴ�� ����� ������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	printf("�Է��� ���� �ݴ�� ����ϸ�>>> ");

	do {
		printf("%d", num % 10);
		num = num / 10;
	} while (num);

	return 0;
}
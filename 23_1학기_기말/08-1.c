#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int value;
	int r_digit;

	printf("������ �Է��ϼ���.\n");
	scanf("%d", &value);
	printf("\n�Է��� ���� �ݴ�� ����ϸ�>>> ");
	do {
		r_digit = value % 10;
		printf("%d", r_digit);
		value /= 10;
	} while (value);
	printf("\n");

	return 0;
}
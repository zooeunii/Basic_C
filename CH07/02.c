#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	int sum = 0;

	for (i = 1;i < 100;i++)
		if (i % 3 == 0)
			sum += i;
			printf("1���� 100������ ��� 3�� ����� ���� %d�Դϴ�.", sum);

	return 0;
}
// ������� �˻��ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number1;
	int number2;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &number1);
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &number2);

	if (number1 % number2 == 0)
		printf("����Դϴ�.");
	else
		printf("����� �ƴմϴ�.");

	return 0;
}
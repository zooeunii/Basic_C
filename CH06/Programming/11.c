// ���ڸ� �Է¹޴� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a;

	printf("���ڸ� �Է��Ͻÿ�: ");
	a = getchar();

	if (a == 'R' || a == 'r')
		printf("Rectangle\n");
	else if (a == 'T' || a == 't')
		printf("Triangle\n");
	else if (a == 'C' || a == 'c')
		printf("Circle\n");
	else
		printf("Unknown");

	return 0;
}
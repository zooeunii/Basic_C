#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, max;
	printf("���� 3���� �Է��Ͻÿ�: ");
	scanf("%d %d %d", &a, &b, &c);

	max = a > b ? (a > c ? a : c) : (b > c ? b : c);

	printf("�ִ��� %d�Դϴ�.", max);

	return 0;
}
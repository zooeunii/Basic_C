#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, d;
	printf("���� 2���� �Է��Ͻÿ�: ");
	scanf("%d %d", &a, &b);

	c = a / b;
	d = a % b;
	printf("��: %d\n", c);
	printf("������: %d", d);

	return 0;
}
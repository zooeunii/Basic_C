#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int b, c;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &a);

	b = a / 10;
	c = a % 10;
	printf("\n���� �ڸ�: %d\n", b);
	printf("���� �ڸ�: %d\n", c);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2;

	printf("2���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &n1, &n2);

	printf("��:%d ������:%d", n1 / n2, n1 % n2);

	return 0;
}
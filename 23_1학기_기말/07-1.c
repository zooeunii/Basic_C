#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, z;
	printf("����1 �Է�: ");
	scanf("%d", &x);
	printf("����2 �Է�: ");
	scanf("%d", &y);
	printf("����3 �Է�: ");
	scanf("%d", &z);

	printf("�Է��� ���� �߿��� ���� ū ���� %d�Դϴ�.\n", (x > y) ? (x > z ? x : z) : (y > z ? y : z));

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, n3, max;

	printf("����1 �Է�: ");
	scanf("%d", &n1);
	printf("����2 �Է�: ");
	scanf("%d", &n2);
	printf("����3 �Է�: ");
	scanf("%d", &n3);

	max = n1 > n2 ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);

	printf("\n�Է��� ���� �߿��� ���� ū ���� %d�Դϴ�.\n", max);

	return 0;
}

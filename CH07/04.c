#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, i;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	printf("���: ");
	for (i = 1;i <= x;i++)
		if (x % i == 0)
			printf("%d ", i);

	return 0;
}
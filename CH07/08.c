#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, j, i;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	for (i = 1;i <= n;i++)
	{
		for (j = 1;j <= i;j++)
			printf("%d", j);
		printf("\n");
	}

	return 0;
}
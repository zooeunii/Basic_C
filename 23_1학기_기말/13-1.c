#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i;
	int factorial = 1;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		factorial = factorial * i;
		printf("%d!�� %d �Դϴ�.\n", i, factorial);
	}

	return 0;
}
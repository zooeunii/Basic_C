#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i;
	int factorial = 1;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		factorial = factorial * i;
		printf("%d!은 %d 입니다.\n", i, factorial);
	}

	return 0;
}
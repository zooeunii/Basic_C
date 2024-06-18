#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int m, n, i;
	int result = 1;

	printf("정수 m 입력-> ");
	scanf("%d", &m);
	printf("정수 n 입력-> ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		result *= m;

	printf("\n%d의 %d 제곱은 %d입니다.\n", m, n, result);

	return 0;
}
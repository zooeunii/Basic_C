#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, r, i;
	int permutation = 1;

	printf("n의 값: ");
	scanf("%d", &n);
	printf("r의 값: ");
	scanf("%d", &r);

	for (i = n;i >= (n - r + 1);i--)
		permutation *= i;

	printf("순열의 값은 %d입니다.", permutation);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i;
	double sum = 0;

	printf("항의 개수: ");
	scanf("%d", &n);

	for (i = 1;i <= n;i++)
		sum = sum + (1.0 / i);

	printf("수열의 합=%d", sum);

	return 0;
}

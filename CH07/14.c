#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 1;
	int c;
	int n, i;

	printf("몇번째 항까지 구할까요? ");
	scanf("%d", &n);

	for (i = 1;i <= n;i++)
	{
		if (i == 1)
			printf("0, ");
		else if (i == 2)
			printf("1, ");
		else {
			c = a + b;
			a = b;
			b = c;
			printf("%d, ", c);
		}
	}
	return 0;
}

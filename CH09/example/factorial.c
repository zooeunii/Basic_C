#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int factorial(int n);

int main()
{
	int n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	printf("%d!은 %d입니다.", n, factorial(n));
	return 0;
}

int factorial(int n)
{
	printf("factorial(%d)\n", n);

	if (n <= 1)
		return 1;
	else
		return n * factorial(n - 1);
}
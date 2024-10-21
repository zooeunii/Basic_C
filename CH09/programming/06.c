#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum();

int main()
{
	int n;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	printf("1부터 %d까지의 합 = %d", n, sum(n));
}

int sum(int n)
{
	int result = 0;

	if (n <= 1)
		return 1;
	else
	{
		for (int i = 1;i <= n;i++)
			result += i;
	}
	return result;
}
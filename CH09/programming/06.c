#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum();

int main()
{
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	printf("1���� %d������ �� = %d", n, sum(n));
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
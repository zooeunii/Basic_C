#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	int sum = 0;

	for (i = 1;i < 100;i++)
		if (i % 3 == 0)
			sum += i;
			printf("1부터 100사이의 모든 3의 배수의 합은 %d입니다.", sum);

	return 0;
}
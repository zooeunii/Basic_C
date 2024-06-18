#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LIMIT 10000

int main()
{
	int i = 1, sum = 0;
	do {
		sum += i;	i++;
	} while (sum<10000);
	printf("1부터 n까지의 합 중에서 10000를 넘지 않는 가장 큰 합은?\n");
	printf("1부터 %d까지의 합이 %d입니다.", i-2, sum-(i-1));

	return 0;
}
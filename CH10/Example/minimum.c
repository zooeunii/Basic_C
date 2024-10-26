#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int prices[10] = { 0 };
	int minimum;

	printf("------------------------------------------\n");
	printf("1   2   3   4   5   6   7   8   9   10\n");
	printf("------------------------------------------\n");

	srand((unsigned)time(NULL));
	for (int i = 0;i < 10;i++) {
		prices[i] = rand() % 100 + 1;
		printf("%d  ", prices[i]);
	}
	printf("\n\n");

	minimum = prices[0];
	for (int i = 1;i < 10;i++) {
		if (prices[i] < minimum)
			minimum = prices[i];
	}
	printf("최소값은 %d입니다.", minimum);
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	const int MAX = 4;
	for (int i = 1; i <= MAX; i++) {
		for (int j = 0; j <= MAX - i; j++)
			printf("%d ", j);
		printf("\n");
	}

	for (int i = 1; i <= MAX + 1; i++) {
		for (int j = 0; j < i; j++)
			printf("%d ", j);
		printf("\n");
	}
	return 0;
}
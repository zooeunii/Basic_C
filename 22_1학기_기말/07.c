#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j;

	for (i = 1; i <= 4; i++) {
		for (j = 0; j <= 4 - i; j++)
			printf("%d ", j);
		printf("\n");
	}
	for (i = 1; i <= 5; i++) {
		for (j = 0; j < i; j++)
			printf("%d ", j);
		printf("\n");
	}

	return 0;
}
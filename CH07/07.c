#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, i;
	for (y = 0; y < 7; y++) {
		for (i = 0; i <= 7-y; i++)
			printf(" ");
		for (x = 0; x < y; x++)
			printf("*");
		printf("\n");
	}
	

	return 0;
}
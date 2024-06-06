#include <stdio.h>

int main()
{
	int x, y, i;

	for (y = 1;y <= 5;y++) {
		for (i = 0; i<=5-y; i++)
			printf(" ");
		for (x = 0;x < y;x++)
			printf("*");

		printf("\n");
	}

	return 0;
}

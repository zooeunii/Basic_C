#include <stdio.h>

int main()
{
	int x, y, i;

	for (y = 1;y <= 5;y++) {
		for (x = 5;x >= y;x--)
			printf("*");
		for (i = 0; i <= 5 - y; i++)
			printf(" ");

		printf("\n");
	}

	return 0;
}

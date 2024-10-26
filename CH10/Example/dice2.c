#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int dice[6] = { 0 };
	srand(time(NULL));

	for (int i = 0;i < 1000;i++)
		++dice[rand() % 6 ];

	printf("==================\n");
	printf("¼ýÀÚ \tºóµµ\n");
	printf("==================\n");

	for (int i = 0;i < 6;i++) {
		printf("%3d \t%3d\n", i + 1, dice[i]);
	}

	return 0;
}
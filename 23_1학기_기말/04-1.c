#include <stdio.h>

int main()
{
	int i, count = 1;

	for (i = 1; i <= 20; i++)
	{
		if (i % 3)
			continue;
		printf("%3d", i);
		count++ % 4 ? printf("") : printf("\n");
	}
	printf("\n");

	return 0;
}
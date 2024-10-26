#include <stdio.h>

int main()
{
	int i;
	int scores[5] = { 31, 63, 62,87,14 };

	for (i = 0;i < 5;i++)
		printf("scores[%d] = %d\n", i, scores[i]);

	return 0;
}
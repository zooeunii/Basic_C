#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int freq[10] = { 0 };
	int max;

	srand(time(NULL));
	for (int i = 0;i < 100;i++)
		++freq[rand() % 10];
	
	max = 0;
	for (int j = 0;j < 10;j++)
		if (max < freq[j])
			max = j;

	printf("가장 많이 나온 수 = %d\n", max);
	
	return 0;
}
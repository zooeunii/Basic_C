#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int maximum();
int minimum();

int main()
{
	int x[10] = { 0 };
	srand(time(NULL));
	for (int i = 0;i < 10;i++) {
		x[i] = rand();
	}
	printf("최대값은 %d\n", maximum(x));
	printf("최소값은 %d\n", minimum(x));

	return 0;
}
int maximum(int x[10])
{
	int maximum = x[0];
	for (int i = 0;i < 10;i++) {
		if (maximum < x[i])
			maximum = x[i];
	}
	return maximum;
}
int minimum(int x[10])
{
	int minimum = x[0];
	for (int i = 0;i < 10;i++) {
		if (minimum > x[i])
			minimum = x[i];
	}
	return minimum;
}

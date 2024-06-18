#include <stdio.h>

int main()
{
	int i = 0, sum = 0, mult = 1;

	while (++i <= 5) {
		if (i % 2)
			sum += i;
		else
			mult *= i;
	}
	printf("Че: %d Аі: %d\n", sum, mult);

	return 0;
}
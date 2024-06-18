#include <stdio.h>

int main()
{
	int n = 10, result;

	printf("1. %d\n", 2 + 3 % 2 - 5);
	printf("2. %c\n", (char)('A' + 2));
	printf("3. %d\n", n++ - 2);
	printf("4. %d\n", --n + 3);
	return 0;
}
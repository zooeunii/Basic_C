#include <stdio.h>

int main()
{
	int op = 1, n = 2, i = 3;

	switch (op) {
	case 1: i++;
	case 2: n++;
	case 3: i++;
	case 4: n++;
	default: i++;	n++;
	}
	printf("%d         %d\n", i, n);

	return 0;
}
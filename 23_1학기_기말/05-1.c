#include <stdio.h>

int main()
{
	int op = 6, n = 0, i = 5;
	switch (10 / 3) {
	case 1:
		n += i++;
	case 2:
		n += i++;
		break;
	case 3:
		n += i++;
	case 4:
		n += i++;
		break;
	default:
		i++; n++;
		break;
	}
	printf("%d %d\n", i, n);

	return 0;
}
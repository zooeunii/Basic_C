#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x = 10;
	int y = 20;
	int tmp;

	printf("x=%d y=%d\n", x, y);
	
	tmp = x;
	x = y;
	y = tmp;

	printf("x=%d y=%d", x, y);

	return 0;

}
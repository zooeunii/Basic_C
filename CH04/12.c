#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 255;
	printf("%d \n", i);

	printf("%#o %x\n", i, i);

	i = -1;
	printf("%x\n", i);

	i = -2;
	printf("%x\n", i);

	i = -3;
	printf("%x\n", i);

	return 0;
}
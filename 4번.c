#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double F;	//È­¾¾°ª
	double C;	//¼·¾¾°ª

	printf("È­¾¾°ªÀ» ÀÔ·ÂÇÏ½Ã¿À: ");
	scanf("%lf", &F);

	C = (5.0 / 9.0) * (F - 32);
	printf("¼·¾¾°ªÀº %.2lfµµ ÀÔ´Ï´Ù.\n", C);

	return 0;
}
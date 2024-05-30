#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y, result;

	printf("½Ç¼ö 2°³¸¦ ÀÔ·ÂÇÏ½Ã¿À: ");
	scanf("%lf %lf", &x, &y);

	result = x + y;		//µ¡¼À ¿¬»ê
	printf("%lf + %lf = %lf\n", x, y, result);

	result = x - y;		//»¬¼À ¿¬»ê
	printf("%lf - %lf = %lf\n", x, y, result);

	result = x * y;		//°ö¼À ¿¬»ê
	printf("%lf * %lf = %lf\n", x, y, result);

	result = x / y;		//³ª´°¼À ¿¬»ê
	printf("%lf / %lf = %lf\n", x, y, result);

	return 0;
}
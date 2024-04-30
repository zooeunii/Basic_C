#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double mile;	//마일
	double meter;	//미터

	printf("마일을 입력하시오: ");
	scanf("%lf", &mile);

	meter = 1609.0 * mile;
	printf("%.1lf마일은 %.2lf미터입니다.\n", mile, meter);

	return 0;
}
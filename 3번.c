#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double base;	//»ï°¢ÇüÀÇ ¹Øº¯
	double height;	//»ï°¢ÇüÀÇ ³ôÀÌ
	double area;	//»ï°¢ÇüÀÇ ³ĞÀÌ

	printf("»ï°¢ÇüÀÇ ¹Øº¯: ");
	scanf("%lf", &base);

	printf("»ï°¢ÇüÀÇ ³ôÀÌ: ");
	scanf("%lf", &height);

	area = base * height * 0.5;
	printf("»ï°¢ÇüÀÇ ³ĞÀÌ: %.2lf\n", area);

	return 0;
}
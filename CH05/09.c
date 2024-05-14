#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double h;	//지팡이의 높이
	double sh;	//지팡이 그림자의 길이
	double d;	//거리
	double ph;	//피라미드의 높이

	printf("지팡이의 높이를 입력하시오: ");
	scanf("%lf", &h);
	printf("지팡이 그림자의 길이를 입력하시오: ");
	scanf("%lf", &sh);
	printf("피라미드까지의 거리를 입력하시오: ");
	scanf("%lf", &d);

	ph = h * d / sh;
	printf("피라미드의 높이는 %.2lf입니다.", ph);

	return 0;
}
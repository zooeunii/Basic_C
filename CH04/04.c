#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y, z;
	double t;
	printf("상자의 가로 세로 높이를 한번에 입력: ");
	scanf("%lf %lf %lf", &x, &y, &z);

	t = x * y * z;
	printf("상자의 부피는 %lf입니다.", t);

	return 0;
}
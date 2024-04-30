#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double d;	//거리
	double a;	//각도
	double r;	//지구의 반지름
	double area;	//지구의 둘레

	printf("거리를 입력하시오: ");
	scanf("%lf", &d);
	printf("각도를 입력하시오: ");
	scanf("%lf", &a);

	area = (d / a) * 360;
	r = area / (2 * 3.14);
	printf("지구의 반지름은 %.2lf입니다.", r);

	return 0;
}
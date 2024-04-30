#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double r;	//구의 반지름
	double a;	//구의 표면적
	double v;	//구의 체적
	const double π=3.141592;	//파이값

	printf("구의 반지름을 입력하시오: ");
	scanf("%lf", &r);

	a = 4.0 * π * r * r;
	v = (4.0 / 3.0) * π * r * r * r;
	printf("표면적은 %.2lf입니다.\n", a);
	printf("체적은 %.2lf입니다.", v);


	return 0;
}
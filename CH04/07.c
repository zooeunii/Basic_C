#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double m;
	double v;
	double E;

	printf("질량(kg): ");
	scanf("%lf", &m);

	printf("속도(m/s): ");
	scanf("%lf", &v);

	E = 0.5 * m * v * v;

	printf("운동에너지(J): %lf\n", E);

	return 0;
}

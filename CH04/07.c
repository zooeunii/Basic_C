#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double m;
	double v;
	double E;

	printf("����(kg): ");
	scanf("%lf", &m);

	printf("�ӵ�(m/s): ");
	scanf("%lf", &v);

	E = 0.5 * m * v * v;

	printf("�������(J): %lf\n", E);

	return 0;
}
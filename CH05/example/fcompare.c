#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	double a, b;

	a = (0.3 * 3) + 0.1;
	b = 1;

	printf("a==b의 결과: %d\n", a == b);
	printf("fabs(a-b)<0.0001의 결과: %d\n", fabs(a - b) < 0.0001);

	return 0;
}

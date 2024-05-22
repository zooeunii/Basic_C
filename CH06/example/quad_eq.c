#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, x1, x2, dis;

	printf("계수 a, 계수 b, 계수 c를 차례대로 입력하시오: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	dis = b * b - 4 * a * c;
	x1 = (-b + sqrt(dis)) / 2 * a;
	x2 = (-b - sqrt(dis)) / 2 * a;

	if (a == 0)
		printf("방정식의 근은 %.2lf입니다.\n", -c / b);
	else
		if (dis > 0) {
			printf("방정식의 근은 %.2lf입니다.\n", x1);
			printf("방정식의 근은 %.2lf입니다.\n", x2);
		}
		else if (dis == 0)
			printf("방정식의 근은 %.2lf입니다.\n", x1);
		else
			printf("실근은 없습니다.\n");

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x;	//weight_on_earth
	double y;	//weight_on_moon

	printf("�����Ը� �Է��Ͻÿ�(����: kg): ");
	scanf("%lf", &x);

	y = x * 0.17;
	printf("�޿����� �����Դ� %.2lfkg�Դϴ�.\n", y);

	return 0;
}
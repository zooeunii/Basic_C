#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double mile;	//����
	double meter;	//����

	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &mile);

	meter = 1609.0 * mile;
	printf("%.1lf������ %.2lf�����Դϴ�.\n", mile, meter);

	return 0;
}
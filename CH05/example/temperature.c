#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double f_temp;
	double c_temp;

	printf("ȭ���µ��� �Է��Ͻÿ�: ");
	scanf("%lf", &f_temp);
	c_temp = ((double)5/9) * (f_temp - 32);
	printf("�����µ��� %lf�Դϴ�.\n", c_temp);

	return 0;
}
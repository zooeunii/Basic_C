#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y, result;

	printf("�Ǽ� 2���� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &x, &y);

	result = x + y;		//���� ����
	printf("%lf + %lf = %lf\n", x, y, result);

	result = x - y;		//���� ����
	printf("%lf - %lf = %lf\n", x, y, result);

	result = x * y;		//���� ����
	printf("%lf * %lf = %lf\n", x, y, result);

	result = x / y;		//������ ����
	printf("%lf / %lf = %lf\n", x, y, result);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y, z;
	double t;
	printf("������ ���� ���� ���̸� �ѹ��� �Է�: ");
	scanf("%lf %lf %lf", &x, &y, &z);

	t = x * y * z;
	printf("������ ���Ǵ� %lf�Դϴ�.", t);

	return 0;
}
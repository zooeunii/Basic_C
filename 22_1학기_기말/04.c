#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y;
	int sum;

	printf("2���� �Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &x, &y);

	sum = (int)x + (int)y;

	printf("\n�������� ��=%d\n", sum);

	return 0;
}
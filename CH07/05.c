#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, n, i;
	double result = 1.0;

	printf("�Ǽ��� ���� �Է��Ͻÿ�: ");
	scanf("%lf", &x);
	printf("�ŵ� ���� Ƚ���� �Է��Ͻÿ�: ");
	scanf("%lf", &n);

	for (i = 1; i <= n; i++)
		result = result * x;

	printf("������� %lf", result);


	return 0;
}
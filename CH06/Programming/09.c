// �Լ��� �Լ����� ����ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y;
	printf("x�� ���� �Է��Ͻÿ�: ");
	scanf("%lf", &x);

	if (x <= 0) 
	{
		y = x * x - 9 * x + 2;
		printf("f(x)�� ���� %.2lf �Դϴ�.", y);
	}
	else if (x > 0)
	{
		y = 7 * x + 2;
		printf("f(x)�� ���� %.2lf �Դϴ�.", y);

		return 0;
	}
}
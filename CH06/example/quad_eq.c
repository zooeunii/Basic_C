#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, x1, x2, dis;

	printf("��� a, ��� b, ��� c�� ���ʴ�� �Է��Ͻÿ�: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	dis = b * b - 4 * a * c;
	x1 = (-b + sqrt(dis)) / 2 * a;
	x2 = (-b - sqrt(dis)) / 2 * a;

	if (a == 0)
		printf("�������� ���� %.2lf�Դϴ�.\n", -c / b);
	else
		if (dis > 0) {
			printf("�������� ���� %.2lf�Դϴ�.\n", x1);
			printf("�������� ���� %.2lf�Դϴ�.\n", x2);
		}
		else if (dis == 0)
			printf("�������� ���� %.2lf�Դϴ�.\n", x1);
		else
			printf("�Ǳ��� �����ϴ�.\n");

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double d;	//�Ÿ�
	double a;	//����
	double r;	//������ ������
	double area;	//������ �ѷ�

	printf("�Ÿ��� �Է��Ͻÿ�: ");
	scanf("%lf", &d);
	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &a);

	area = (d / a) * 360;
	r = area / (2 * 3.14);
	printf("������ �������� %.2lf�Դϴ�.", r);

	return 0;
}
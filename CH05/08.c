#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double r;	//���� ������
	double a;	//���� ǥ����
	double v;	//���� ü��
	const double ��=3.141592;	//���̰�

	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%lf", &r);

	a = 4.0 * �� * r * r;
	v = (4.0 / 3.0) * �� * r * r * r;
	printf("ǥ������ %.2lf�Դϴ�.\n", a);
	printf("ü���� %.2lf�Դϴ�.", v);


	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double h;	//�������� ����
	double sh;	//������ �׸����� ����
	double d;	//�Ÿ�
	double ph;	//�Ƕ�̵��� ����

	printf("�������� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &h);
	printf("������ �׸����� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &sh);
	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�: ");
	scanf("%lf", &d);

	ph = h * d / sh;
	printf("�Ƕ�̵��� ���̴� %.2lf�Դϴ�.", ph);

	return 0;
}
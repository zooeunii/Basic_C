#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double base;	//�ﰢ���� �غ�
	double height;	//�ﰢ���� ����
	double area;	//�ﰢ���� ����

	printf("�ﰢ���� �غ�: ");
	scanf("%lf", &base);

	printf("�ﰢ���� ����: ");
	scanf("%lf", &height);

	area = base * height * 0.5;
	printf("�ﰢ���� ����: %.2lf\n", area);

	return 0;
}
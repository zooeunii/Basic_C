#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x;	//�Ǽ�
	double y;	//���׽�

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf(" %lf", &x);

	y = (3 * x * x) + (7 * x) + 11;
	printf("���׽��� ����: %.2lf\n", y);
	return 0;
}
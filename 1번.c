#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double ysalary;	//����
	double year;	//�ɸ��� �ð�

	printf("������ �Է��Ͻÿ�(����: ����): ");
	scanf("%lf", &ysalary);

	year = 100000 / ysalary;
	printf("10���� �����µ� �ɸ��� �ð�(����: ��): %.2lf", year);

	return 0;
}
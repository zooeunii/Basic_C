#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double F;	//ȭ����
	double C;	//������

	printf("ȭ������ �Է��Ͻÿ�: ");
	scanf("%lf", &F);

	C = (5.0 / 9.0) * (F - 32);
	printf("�������� %.2lf�� �Դϴ�.\n", C);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>	//fab �Լ��� ����ϱ� ���� �ҷ���

int main()
{
	int x;
	x = fabs((1.0 - 0.9 == 0.1) < 0.000001);
	printf("(1.0-0.9)==0.1�� %d�Դϴ�.", x);

	return 0;
}
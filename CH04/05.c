#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x;
	const double SQMETER_PER_PYEONG = 3.3058;
	double y;

	printf("���� �Է��ϼ���: ");
	scanf("%lf", &x);

	y = x * SQMETER_PER_PYEONG;
	printf("%lf�������Դϴ�.", y);

	return 0;
}
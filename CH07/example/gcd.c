// while ���� �̿��� �ִ� ����� ���ϱ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, r;

	printf("�� ���� ������ �Է��Ͻÿ�(ū��, ������): ");
	scanf("%d %d", &x, &y);

	while (y)
	{
		r = x % y;
		x = y;
		y = r;
	}
	printf("�ִ� ������� %d�Դϴ�.", x);

	return 0;
}
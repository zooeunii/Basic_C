#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, z;

	printf("�� ������ �Է��Ͻÿ�(ū��, ������): ");
	scanf("%d %d", &x, &y);

	while (y)
	{
		z = x % y;
		x = y;
		y = z;
	}
	printf("�ִ� ������� %d�Դϴ�.", x);

	return 0;
}
// ��ǥ�� ���ϴ� ��и��� ȭ�鿡 ����ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;
	printf("x, y��ǥ�� �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
		printf("1��и��Դϴ�");
	if (x < 0 && y > 0)
		printf("2��и��Դϴ�");
	if (x < 0 && y < 0)
		printf("3��и��Դϴ�");
	if (x > 0 && y < 0)
		printf("4��и��Դϴ�");

	return 0;
}
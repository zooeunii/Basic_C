// ¦���� �ո� ���ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int i = 0;
	int sum = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	while (i <= n)
	{
		sum += i;
		i = i + 2;
	}
	printf("1���� %d������ ���� %d�Դϴ�.", n, sum);

	return 0;
}
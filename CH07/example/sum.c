#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int i = 1;
	int sum = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	while (i <= n) {
		sum += i;
		i++;
	}
	printf("1���� %d������ ���� %d�Դϴ�.", n, sum);

	return 0;
}
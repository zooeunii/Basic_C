// while ���� �̿��� �հ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int i = 0;
	int sum = 0;

	while (i < 5)
	{
		printf("���� �Է��Ͻÿ�: ");
		scanf("%d", &n);
		sum += n;
		i++;
	}
	printf("�հ�� %d�Դϴ�.", sum);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, num;
	int sum = 0;

	for (i = 1; i <= 3; i++)
	{
		printf("���ڸ� �Է��Ͻÿ�: ");
		scanf("%d", &num);

		if (num < 0)
		{
			i--;
			continue;
		}
		else
			sum += num;
	}
	printf("�հ�� %d�Դϴ�.", sum);
	return 0;
}
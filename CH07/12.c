#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int h, i;

	while(1) {
		printf("������ ����(����: -1): ");
		scanf("%d", &h);

		if (h == -1)
			break;
		for (i = 0;i < h;i++)
			printf("*");
		printf("\n");
	}
	return 0;
}
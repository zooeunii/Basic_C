#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, i, j;
	

	while (1) {
		printf("���� ���� �Ǵ� 0(����)�� �Է�: ");
		scanf("%d", &num);

		int sum = 0;

		if (num == 0) {
			printf("�����մϴ�.\n");
			break;
		}
		else if (num < 0)
			continue;
		else
			for (i = 1; i <= num; i++) {
				for (int j = 1; j <= i; j++) {
					printf("%d", j);
					if (i != 1 && i != j)
						printf(" + ");
				}
				sum += i;
				printf(" = %d", sum);
				printf("\n");
			}
	}
	return 0;
}
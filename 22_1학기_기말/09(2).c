#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, i, j;
	

	while (1) {
		printf("양의 정수 또는 0(종료)을 입력: ");
		scanf("%d", &num);

		int sum = 0;

		if (num == 0) {
			printf("종료합니다.\n");
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
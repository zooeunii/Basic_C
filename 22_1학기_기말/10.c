#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int user, computer, i;
	srand(time(NULL));
	int tries = 0;

	computer = rand() % 20 + 1;

	while (1) {
		printf("1에서 20사이의 수를 맞춰보세요 >> ");
		scanf("%d", &user);

		if (user == computer) {
			tries++;
			break;
		}

		else if (user > computer) {
			printf("제시한 정수가 높습니다.\n");
			tries++;
		}
		else {
			printf("제시한 정수가 낮습니다.\n");
			tries++;
		}
	}
	printf("\n정답입니다! 시도횟수: %d\n", tries);

	return 0;
}
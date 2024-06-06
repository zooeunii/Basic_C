#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	int guess;
	int answer = rand() % 100 + 1;
	int tries = 0;

	do {
		printf("정답을 추측하시오: ");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)
			printf("HIGH\n");
		else if (guess < answer)
			printf("LOW\n");

	} while (guess != answer);
	printf("축하합니다. 시도 횟수=%d", tries);

	return 0;
}
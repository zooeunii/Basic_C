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
		printf("������ �����Ͻÿ�: ");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)
			printf("HIGH\n");
		else if (guess < answer)
			printf("LOW\n");

	} while (guess != answer);
	printf("�����մϴ�. �õ� Ƚ��=%d", tries);

	return 0;
}
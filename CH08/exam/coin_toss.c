#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coin_toss();
int main()
{
	int toss;
	int heads = 0;
	int tails = 0;
	srand(time(NULL));

	for (toss = 0;toss < 100;toss++) {
		if (coin_toss() == 1)
			heads++;
		else
			tails++;
	}
	
	printf("������ �ո�: %d\n", heads);
	printf("������ �޸�: %d\n", tails);
	return 0;
}
int coin_toss()
{
	int head = rand() % 2;
	return head;
}

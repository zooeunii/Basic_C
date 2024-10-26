#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int s[3][5]; //2차원 배열 선언
	int i, j;

	srand((unsigned)time(NULL));

	for (i = 0;i < 3;i++)
		for (j = 0;j < 5;j++)
			s[i][j] = rand() % 100; //i행, j열에 난수를 저장한다.

	for (i = 0;i < 3;i++) {
		for (j = 0;j < 5;j++)
			printf("%2d ", s[i][j]);
		printf("\n");
	}
	return 0;
}
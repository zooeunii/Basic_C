#include <stdio.h>
#define ROWS 3
#define COLS 5

int main()
{
	int s[ROWS][COLS] = { {12, 56, 32, 16, 98}, {99, 56, 34, 41, 3}, {65, 3, 87, 78, 21} };
	
	for (int i = 0;i < ROWS;i++) {
		int ROWS_SUM = 0;
		for (int j = 0;j < COLS;j++) {
			ROWS_SUM += s[i][j];
		}
		printf("%d행의 합계: %d\n", i, ROWS_SUM);
	}
	for (int i = 0;i < COLS;i++) {
		int COLS_SUM = 0;
		for (int j = 0;j < ROWS;j++) {
			COLS_SUM += s[j][i];
		}
		printf("%d열의 합계", i, COLS_SUM);
	}
}

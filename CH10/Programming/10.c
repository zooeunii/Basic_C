#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int s[5][3] = { 0 };
	srand((unsigned)time(NULL));
	for (int i = 0;i < 5;i++)
		for (int j = 0;j < 3;j++)
			s[i][j] = rand() % 100;

	// 각 시험의 최대점수와 최저점수 계산
	for (int i = 0; i < 3; i++) {
		int max = s[0][i]; // 초기값으로 첫 번째 점수
		int min = s[0][i]; // 초기값으로 첫 번째 점수

		for (int j = 0;j < 5;j++) {
			if (max < s[j][i])
				max = s[j][i];
			else if (min > s[j][i])
				min = s[j][i];
		}

		printf("시험 #%d의 최대점수 = %d\n", i, max);
		printf("시험 #%d의 최저점수 = %d\n", i, min);
	}
}
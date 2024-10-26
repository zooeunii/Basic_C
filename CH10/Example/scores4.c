#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int scores[5];
	int i, sum = 0;
	double average;

	for (i = 0;i < 5;i++) {
		printf("학생들의 성적을 구하시오: ");
		scanf("%d", &scores[i]);
	}

	for (i = 0;i < 5;i++)
		sum += scores[i];

	average = (double)sum / 5.0;
	printf("성적 평균 = %.2lf", average);

	return 0;
}
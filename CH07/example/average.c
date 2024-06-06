// while 문을 이용한 성적 평균 구하기 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int grade = 0;
	int i = 0;
	double sum = 0;
	double average;

	printf("종료하려면 음수를 입력하시오.\n");

	while (grade >= 0)
	{
		printf("성적을 입력하시오: ");
		scanf("%d", &grade);
		sum += grade;
		i++;
	}
	sum = sum - grade;
	i--;
	//평균을 구하고 화면에 출력한다.
	average = sum / i;
	printf("성적의 평균은 %lf입니다.", average);

	return 0;
}
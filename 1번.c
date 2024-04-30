#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double ysalary;	//연봉
	double year;	//걸리는 시간

	printf("연봉을 입력하시오(단위: 만원): ");
	scanf("%lf", &ysalary);

	year = 100000 / ysalary;
	printf("10억을 모으는데 걸리는 시간(단위: 년): %.2lf", year);

	return 0;
}
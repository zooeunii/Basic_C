// 체중 검사하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double height, weight, sw;

	printf("체중과 키를 입력하시오: ");
	scanf("%lf %lf", &weight, &height);

	sw = (height - 100) * 0.9;
	if (sw > weight)
		printf("저체중 입니다");
	else if (sw < weight)
		printf("과체중 입니다.");
	else
		printf("정상체중 입니다.");

	return 0;
}
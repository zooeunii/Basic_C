// 약수인지 검사하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number1;
	int number2;

	printf("정수를 입력하시오: ");
	scanf("%d", &number1);
	printf("정수를 입력하시오: ");
	scanf("%d", &number2);

	if (number1 % number2 == 0)
		printf("약수입니다.");
	else
		printf("약수가 아닙니다.");

	return 0;
}
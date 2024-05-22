// 복권 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int num, solution, digit1, digit2;

	srand(time(NULL));	//매번 다른 숫자 생성

	printf("복권 번호를 입력하시오(0에서 99사이): ");
	scanf("%d", &num);

	solution = rand() % 100;

	printf("당첨번호는 %d입니다.\n", solution);

	digit1 = num / 10;
	digit2 = num % 10;

	if (solution == num)
		printf("상금은 100만원 입니다.\n");
	else if (solution / 10 == digit1 || solution % 10 == digit2)
		printf("상금은 50만원 입니다.\n");
	else
		printf("상금은 없습니다.\n");

	return 0;
}
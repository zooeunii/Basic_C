#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("반대로 출력할 정수를 입력하시오: ");
	scanf("%d", &num);

	printf("입력한 수를 반대로 출력하면>>> ");

	do {
		printf("%d", num % 10);
		num = num / 10;
	} while (num);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int Num;

	printf("정수를 입력하시오: ");
	scanf("%d", &Num);

	do {
		printf("%d", Num % 10);
		Num /= 10;
	} while (Num);

	
	return 0;
}
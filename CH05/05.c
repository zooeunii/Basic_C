#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int b, c;
	printf("정수를 입력하시오: ");
	scanf("%d", &a);

	b = a / 10;
	c = a % 10;
	printf("\n십의 자리: %d\n", b);
	printf("일의 자리: %d\n", c);

	return 0;
}
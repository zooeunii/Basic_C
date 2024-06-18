#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int value;
	int r_digit;

	printf("정수를 입력하세요.\n");
	scanf("%d", &value);
	printf("\n입력한 수를 반대로 출력하면>>> ");
	do {
		r_digit = value % 10;
		printf("%d", r_digit);
		value /= 10;
	} while (value);
	printf("\n");

	return 0;
}
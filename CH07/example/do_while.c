//사용자가 0을 입력할 때까지 숫자를 더한다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0;
	int sum = 0;

	do {
		printf("정수를 입력하시오: ");
		scanf("%d", &num);
		sum += num;
	} while (num);
	
	printf("숫자들의 합 = %d", sum);

	return 0;
}
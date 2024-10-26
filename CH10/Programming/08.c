#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int s[2][10] = { {1, 8, 27, 64, 125, 216, 343, 512, 729, 1000}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} };
	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	for (int i = 0;i < 10;i++)
		if (s[0][i] == n)
				printf("%d의 세제곱근은 %d\n", n, s[1][i]);
	printf("탐색 종료\n");

	return 0;

}
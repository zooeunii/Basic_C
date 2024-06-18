#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, n3, max;

	printf("정수1 입력: ");
	scanf("%d", &n1);
	printf("정수2 입력: ");
	scanf("%d", &n2);
	printf("정수3 입력: ");
	scanf("%d", &n3);

	max = n1 > n2 ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);

	printf("\n입력한 정수 중에서 가장 큰 수는 %d입니다.\n", max);

	return 0;
}

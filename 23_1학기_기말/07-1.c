#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, z;
	printf("정수1 입력: ");
	scanf("%d", &x);
	printf("정수2 입력: ");
	scanf("%d", &y);
	printf("정수3 입력: ");
	scanf("%d", &z);

	printf("입력한 정수 중에서 가장 큰 수는 %d입니다.\n", (x > y) ? (x > z ? x : z) : (y > z ? y : z));

	return 0;
}
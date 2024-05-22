// 좌표가 속하는 사분면을 화면에 출력하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;
	printf("x, y좌표를 입력하시오: ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
		printf("1사분면입니다");
	if (x < 0 && y > 0)
		printf("2사분면입니다");
	if (x < 0 && y < 0)
		printf("3사분면입니다");
	if (x > 0 && y < 0)
		printf("4사분면입니다");

	return 0;
}
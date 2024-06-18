#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, z;

	printf("두 정수를 입력하시오(큰수, 작은수): ");
	scanf("%d %d", &x, &y);

	while (y)
	{
		z = x % y;
		x = y;
		y = z;
	}
	printf("최대 공약수는 %d입니다.", x);

	return 0;
}
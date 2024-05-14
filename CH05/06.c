#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>	//fab 함수를 사용하기 위해 불러옴

int main()
{
	int x;
	x = fabs((1.0 - 0.9 == 0.1) < 0.000001);
	printf("(1.0-0.9)==0.1은 %d입니다.", x);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double height, feet, inch;
	printf("키를 입력하시오(cm): ");
	scanf("%lf", &height);
	
	inch = height / 2.54;
	feet = inch / 12;

	printf("%.lfcm는 %.lf피트 %.2lf인치 입니다.", height, feet, inch);

	return 0;
}
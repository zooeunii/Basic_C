#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double height, feet, inch;
	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf("%lf", &height);
	
	inch = height / 2.54;
	feet = inch / 12;

	printf("%.lfcm�� %.lf��Ʈ %.2lf��ġ �Դϴ�.", height, feet, inch);

	return 0;
}
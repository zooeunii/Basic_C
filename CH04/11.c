#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char num1 = 65;
	char num2 = 66;
	char num3 = 67;
	char num4 = 116;
	char num5 = 97;
	char num6 = 110;

	printf("\"ASCII code\", '%c', '%c', '%c'\n", num1, num2, num3);
	printf("\\%c \\%c \\%c", num4, num5, num6);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int show_digit(int x);

int main()
{
	int x;
	int div = 1;
	int d;

	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	while (x / div > 10) {
		div = div * 10;
	}

	while (div != 1)
	{
		d = x % div;
		printf("%d ", x / div);
		x = d;
		div = div / 10;

	}

	printf("%d", x);


	return 0;
}

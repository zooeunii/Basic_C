#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int power(int b, int p);

int main()
{
	int b;
	int p;
	
	printf("밑: ");
	scanf("%d", &b);
	printf("지수: ");
	scanf("%d", &p);

	printf("%d^%d = %d", b, p, power(b, p));

	return 0;
}

int power(int b, int p)
{
	int result = 1;
	if (p == 0)
		return 1;
	else {
		for (int i = 1;i <= p;i++)
		result *= b;
	}
	return result;
}

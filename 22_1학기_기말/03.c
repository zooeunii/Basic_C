#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, temp, r;

	printf("두 정수를 입력하시오(큰수, 작은수): ");
	scanf("%d %d", &a, &b);
	
	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}

	while (b) { //최대공약수 구하는 방법1
		r = a % b;
		a = b;
		b = r;
	}

	printf("\n최대공약수는 %d입니다.\n", a);

	return 0;

}
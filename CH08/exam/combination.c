// 수학적인 조합 값을 구하는 예제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//팩토리얼 값을 반환
int factorial(int n)
{
	int i, result = 1;

	for (i = 1;i <= n;i++)
		result *= i;
	return result;
}
int combination(int n, int r)
{
	return (factorial(n)) / (factorial(r) * factorial(n - r));
}
int get_integer()
{
	int n;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	return n;
}

int main()
{
	int a, b;

	a = get_integer();
	b = get_integer();

	printf("C(%d, %d) = %d", a, b, combination(a, b));
	return 0;
}
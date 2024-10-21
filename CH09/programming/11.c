#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fib(int n);

int main()
{
	int n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	printf("fib(%d) = %d", n, fib(n));

    return 0;
}

int fib(int n)
{
    int first = 0;
    int second = 1;
    int next;

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    else {
        for (int i = 2; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
    }
    return next;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main()
{
	int x, y;
	char op;

	
	while (1)
	{
		printf("연산을 입력하시오: ");
		scanf("%d %c %d", &x, &op, &y);

		if (op == '+') {
			printf("연산의 결과: %d\n", add(x, y));
		}
		else if (op == '-') {
			printf("연산의 결과: %d\n", sub(x, y));
		}
		else if (op == '*') {
			printf("연산의 결과: %d\n", mul(x, y));
		}
		else if (op == '/') {
			printf("연산의 결과: %d\n", div(x, y));
		}
		else {
			printf("잘못된 연산자입니다.\n");
		}
	}
	return 0;
}

int add(int a, int b) {
	static int count = 0;
	count++;
	printf("덧셈은 총 %d번 실행되었습니다.\n", count);
	return a + b;
}

int sub(int a, int b) {
	static int count = 0;
	count++;
	printf("뺄셈은 총 %d번 실행되었습니다.\n", count);
	return a - b;
}

int mul(int a, int b) {
	static int count = 0;
	count++;
	printf("곱셈은 총 %d번 실행되었습니다.\n", count);
	return a * b;
}

int div(int a, int b) {
	static int count = 0;
	count++;
	printf("나눗셈은 총 %d번 실행되었습니다.\n", count);

	if (b == 0) {
		printf("0으로 나눌 수 없습니다.\n");
	}

	return a / b;
}

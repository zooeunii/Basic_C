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
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d %c %d", &x, &op, &y);

		if (op == '+') {
			printf("������ ���: %d\n", add(x, y));
		}
		else if (op == '-') {
			printf("������ ���: %d\n", sub(x, y));
		}
		else if (op == '*') {
			printf("������ ���: %d\n", mul(x, y));
		}
		else if (op == '/') {
			printf("������ ���: %d\n", div(x, y));
		}
		else {
			printf("�߸��� �������Դϴ�.\n");
		}
	}
	return 0;
}

int add(int a, int b) {
	static int count = 0;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	return a + b;
}

int sub(int a, int b) {
	static int count = 0;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	return a - b;
}

int mul(int a, int b) {
	static int count = 0;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	return a * b;
}

int div(int a, int b) {
	static int count = 0;
	count++;
	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", count);

	if (b == 0) {
		printf("0���� ���� �� �����ϴ�.\n");
	}

	return a / b;
}
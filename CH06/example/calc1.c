#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, result;
	char op;

	printf("������ �Է��Ͻÿ�(��: 2 + 5) >> ");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+')
		result = x + y;

	else if (op == '-')
		result = x - y;

	else if (op == '*')
		result = x * y;

	else if (op == '/')
		result = x / y;

	else if (op == '%')
		result = x % y;

	else
		printf("�������� �ʴ� �������Դϴ�.");
		
	printf("%d %c %d = %d", x, op, y, result);

	return 0;
}
// �������� ���� ���� ���ϴ� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���丮�� ���� ��ȯ
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

	printf("������ �Է��Ͻÿ�: ");
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
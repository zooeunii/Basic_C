// ���� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int num, solution, digit1, digit2;

	srand(time(NULL));	//�Ź� �ٸ� ���� ����

	printf("���� ��ȣ�� �Է��Ͻÿ�(0���� 99����): ");
	scanf("%d", &num);

	solution = rand() % 100;

	printf("��÷��ȣ�� %d�Դϴ�.\n", solution);

	digit1 = num / 10;
	digit2 = num % 10;

	if (solution == num)
		printf("����� 100���� �Դϴ�.\n");
	else if (solution / 10 == digit1 || solution % 10 == digit2)
		printf("����� 50���� �Դϴ�.\n");
	else
		printf("����� �����ϴ�.\n");

	return 0;
}
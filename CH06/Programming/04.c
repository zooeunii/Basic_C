// ���̰��� Ű, ���� ���� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int height, age;

	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf("%d", &height);
	printf("���̸� �Է��Ͻÿ�: ");
	scanf("%d", &age);

	if (height > 140 && age >= 10)
		printf("Ÿ�� �����ϴ�.");
	else
		printf("Ż �� �����ϴ�.");

	return 0;
}
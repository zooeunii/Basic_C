// ���������� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int x, random;

	srand(time(NULL));	//�Ź� �ٸ� ���� ����

	printf("(1:���� 2:���� 3:��)�߿��� �ϳ��� �����Ͻÿ�: ");
	scanf("%d", &x);

	random = rand() % 3 + 1;

	if (x == 1)
		printf("����ڴ� ������ �����Ͽ����ϴ�.\n");
	else if (x == 2)
		printf("����ڴ� ������ �����Ͽ����ϴ�.\n");
	else if (x == 3)
		printf("����ڴ� ���� �����Ͽ����ϴ�.\n");

	if (random == 1)
		printf("��ǻ�ʹ� ������ �����Ͽ����ϴ�.\n");
	else if (random == 2)
		printf("��ǻ�ʹ� ������ �����Ͽ����ϴ�.\n");
	else if (random == 3)
		printf("��ǻ�ʹ� ���� �����Ͽ����ϴ�.\n");

	if ((x == 1 && random == 3) || (x == 2 && random == 1) || (x == 3 && random == 2))
		printf("����ڰ� �̰���ϴ�.");

	else if (x == random)
		printf("�����ϴ�.");
	
	else
		printf("����ڰ� �����ϴ�.");

	return 0;
}
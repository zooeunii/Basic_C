#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int price, money;
	int c1000, c500, c100, change;

	printf("���� ���� �Է��Ͻÿ�: ");
	scanf("%d", &price);
	printf("������ �ݾ��� �Է��Ͻÿ�: ");
	scanf("%d", &money);

	change = money - price;

	c1000 = change / 1000;
	change = change % 1000;

	c500 = change / 500;
	change = change % 500;

	c100 = change / 100;
	change = change % 100;

	printf("�Ž������� ������ �����ϴ�.\n");
	printf("õ����: %d\n��", c1000);
	printf("����� ����: %d��\n", c500);
	printf("��� ����: %d��\n", c100);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int balance = 0;
	int menu;
	int money;

	while (1) {
		printf("*************Welcome to Express ATM*************\n");
		printf("(1)�ܰ� Ȯ��\n(2)�Ա�\n(3)���\n(4)����\n�ϳ��� �����Ͻÿ�: ");
		scanf("%d", &menu);

		switch (menu) {
		case 1:
			printf("���� �ܾ�: %d\n", balance);
			break;
		case 2:
			printf("�Ա� �ݾ�: ");
			scanf("%d", &money);
			balance += money;
			printf("���ο� �ܰ�� %d�Դϴ�.\n", balance);
			break;
		case 3:
			printf("��� �ݾ�: ");
			scanf("%d", &money);
			balance -= money;
			printf("���ο� �ܰ�� %d�Դϴ�.\n", balance);
			break;
		case 4: 
			printf("�����մϴ�.\n");
			return 0;
		default:
			printf("�ٽ� �Է����ּ���.\n");
			break;
		}
	}
	return 0;
}

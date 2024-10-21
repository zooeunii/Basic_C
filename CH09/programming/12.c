#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int balance = 0;
	int menu;
	int money;

	while (1) {
		printf("*************Welcome to Express ATM*************\n");
		printf("(1)잔고 확인\n(2)입금\n(3)출금\n(4)종료\n하나를 선택하시오: ");
		scanf("%d", &menu);

		switch (menu) {
		case 1:
			printf("현재 잔액: %d\n", balance);
			break;
		case 2:
			printf("입금 금액: ");
			scanf("%d", &money);
			balance += money;
			printf("새로운 잔고는 %d입니다.\n", balance);
			break;
		case 3:
			printf("출금 금액: ");
			scanf("%d", &money);
			balance -= money;
			printf("새로운 잔고는 %d입니다.\n", balance);
			break;
		case 4: 
			printf("종료합니다.\n");
			return 0;
		default:
			printf("다시 입력해주세요.\n");
			break;
		}
	}
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int price, money;
	int c1000, c500, c100, change;

	printf("물건 값을 입력하시오: ");
	scanf("%d", &price);
	printf("투입한 금액을 입력하시오: ");
	scanf("%d", &money);

	change = money - price;

	c1000 = change / 1000;
	change = change % 1000;

	c500 = change / 500;
	change = change % 500;

	c100 = change / 100;
	change = change % 100;

	printf("거스름돈은 다음과 같습니다.\n");
	printf("천원권: %d\n장", c1000);
	printf("오백원 동전: %d개\n", c500);
	printf("백원 동전: %d개\n", c100);

	return 0;
}
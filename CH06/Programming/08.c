// 놀이공원의 자유이용권의 가격을 계산하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int time, age, fee;

	printf("현재 시간과 나이를 입력하시오(시간 나이): ");
	scanf("%d %d", &time, &age);

	if (time <= 17)
	{
		if (3 < age < 12 || age >= 65)
			printf("요금은 25,000원입니다.\n");
		else
			printf("요금은 34,000원 입니다.\n");
	}
	else
		printf("요금은 10,000원 입니다.\n");

	return 0;
}
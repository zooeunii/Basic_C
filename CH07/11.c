#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int current = 100;
	int u;

	while(1) {
		printf("현재 연료량: %d\n", current);
		if (current < 20) 
			printf("(경고) 연료가 20리터 미만입니다.");
		printf("연료 충전은 +, 소모는 -로 입력해주세요: ");
		scanf("%d", &u);

		current += u;

		if (current > 500) {
			printf("500리터 이상이 주유될 수 없습니다.\n");
			current -= u;
		}
		else if (current <= 0) {
			printf("연료가 없습니다.");
			break;
		}
	}

	return 0;
	
}
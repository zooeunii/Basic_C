// 놀이공원 키, 나이 제한 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int height, age;

	printf("키를 입력하시오(cm): ");
	scanf("%d", &height);
	printf("나이를 입력하시오: ");
	scanf("%d", &age);

	if (height > 140 && age >= 10)
		printf("타도 좋습니다.");
	else
		printf("탈 수 없습니다.");

	return 0;
}
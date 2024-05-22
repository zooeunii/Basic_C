// 가위바위보 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int x, random;

	srand(time(NULL));	//매번 다른 숫자 생성

	printf("(1:가위 2:바위 3:보)중에서 하나를 선택하시오: ");
	scanf("%d", &x);

	random = rand() % 3 + 1;

	if (x == 1)
		printf("사용자는 가위를 선택하였습니다.\n");
	else if (x == 2)
		printf("사용자는 바위를 선택하였습니다.\n");
	else if (x == 3)
		printf("사용자는 보를 선택하였습니다.\n");

	if (random == 1)
		printf("컴퓨터는 가위를 선택하였습니다.\n");
	else if (random == 2)
		printf("컴퓨터는 바위를 선택하였습니다.\n");
	else if (random == 3)
		printf("컴퓨터는 보를 선택하였습니다.\n");

	if ((x == 1 && random == 3) || (x == 2 && random == 1) || (x == 3 && random == 2))
		printf("사용자가 이겼습니다.");

	else if (x == random)
		printf("비겼습니다.");
	
	else
		printf("사용자가 졌습니다.");

	return 0;
}
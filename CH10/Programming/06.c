#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int Lotto[6] = { 0 };
	int check[46] = { 0 }; //1부터 중복 45까지 체크

	printf("로또 번호는 다음과 같습니다.\n");

	srand(time(NULL));

	for (int i = 0;i < 6;i++) {
		int number = rand() % 45 + 1;
			
		//중복 체크
		if (check[number] == 0) {
			Lotto[i] = number; //중복이 아닐 경우 Lotto 배열에 저장
			check[number] = 1; //체크 배열에 표시
		}
	}
	//생성된 로또 번호 출력
	for (int i = 0;i < 6;i++)
		printf("%d ", Lotto[i]);
	printf("\n");

	return 0;
}
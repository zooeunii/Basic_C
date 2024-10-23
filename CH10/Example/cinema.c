#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Print_Seats(int Seats[10]);
void Reg_Seats(int Seats[10]);

int main()
{
	char Answer;
	int Seats[10] = { 0 };
	
	while (1) {
		printf("좌석을 예약하시겠습니까?(y 또는 n) ");
		scanf(" %c", &Answer);

		switch (Answer) {
		case 'n':
			printf("프로그램을 종료합니다.\n");
			return 0;
		case 'y':
			Reg_Seats(Seats);
			break;
		default:
			printf("다시 예약해주세요:)\n");
			break;
		}
	}
	return 0;
}

void Print_Seats(int Seats[10])
{
	printf("-----------------------------------\n");
	printf("  1  2  3  4  5  6  7  8  9  10\n");
	printf("-----------------------------------\n");

	for (int i = 0;i < 10;i++)
		printf(" %2d", Seats[i]);
	printf("\n");
}

void Reg_Seats(int Seats[10])
{
	int Seat_Num;
	Print_Seats(Seats);
	printf("몇 번째 좌석을 예약하시겠습니까 ");
	scanf("%d", &Seat_Num);

	if (Seats[Seat_Num - 1] == 0) {
		Seats[Seat_Num - 1] = 1;
		printf("예약되었습니다.\n");
	}
	else {
		printf("이미 예약되었습니다.다시 선택해주세요.\n");
	}

	Print_Seats(Seats);
}
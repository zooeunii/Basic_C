#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Print_Seats(int Seats[10]);
void Reg_Seats(int Seats[10]);

int main()
{
	char Answer;
	int Seats[10] = { 0 };
	
	while (1) {
		printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n) ");
		scanf(" %c", &Answer);

		switch (Answer) {
		case 'n':
			printf("���α׷��� �����մϴ�.\n");
			return 0;
		case 'y':
			Reg_Seats(Seats);
			break;
		default:
			printf("�ٽ� �������ּ���:)\n");
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
	printf("�� ��° �¼��� �����Ͻðڽ��ϱ� ");
	scanf("%d", &Seat_Num);

	if (Seats[Seat_Num - 1] == 0) {
		Seats[Seat_Num - 1] = 1;
		printf("����Ǿ����ϴ�.\n");
	}
	else {
		printf("�̹� ����Ǿ����ϴ�.�ٽ� �������ּ���.\n");
	}

	Print_Seats(Seats);
}
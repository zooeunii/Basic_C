#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void disp_car(int car_number, int distance)
{
	int i;

	printf("CAR #%d:", car_number);
	for (i = 0; i < distance / 10;i++)
		printf("*");
	printf("\n");
}
int main()
{
	int i;
	int car1_dist = 0, car2_dist = 0;

	srand(time(NULL));

	for (i = 0;i < 20;i++) {
		system("cls");
		car1_dist += rand() % 100;
		car2_dist += rand() % 100;
		disp_car(1, car1_dist);
		disp_car(2, car2_dist);
		Sleep(1000);
	}
	return 0;
}
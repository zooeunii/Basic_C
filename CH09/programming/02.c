#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int get_dice_face();


int get_dice_face()
{	
	srand(time(NULL));
	int num = 0;
	static int f1, f2, f3, f4, f5, f6 = 0;

	for(int i = 1; i<= 100; i++)
	 {
		num = rand() % 6 + 1;

		if (num == 1)
			f1++;
		else if (num == 2)
			f2++;
		else if (num == 3)
			f3++;
		else if (num == 4)
			f4++;
		else if (num == 5)
			f5++;
		else if (num == 6)
			f6++;
	
	}
	printf("1->%d\n", f1);
	printf("2->%d\n", f2);
	printf("3->%d\n", f3);
	printf("4->%d\n", f4);
	printf("5->%d\n", f5);
	printf("6->%d\n", f6);

	return 0;
}

int main()
{
	get_dice_face();

	return 0;
}
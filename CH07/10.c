#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	int num;

	for (num = 2; num <= 100; num++)
	{
		for (i = 2; i <= num; i++)
		{
			if (num % i == 0)
				break;
		}
		if(num==i)
			printf("%d ", num);
	}

	return 0;
}
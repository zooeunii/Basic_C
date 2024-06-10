#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, num;
	int sum = 0;

	for (i = 1; i <= 3; i++)
	{
		printf("숫자를 입력하시오: ");
		scanf("%d", &num);

		if (num < 0)
		{
			i--;
			continue;
		}
		else
			sum += num;
	}
	printf("합계는 %d입니다.", sum);
	return 0;
}
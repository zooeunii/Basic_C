// while 문을 이용한 합계 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int i = 0;
	int sum = 0;

	while (i < 5)
	{
		printf("값을 입력하시오: ");
		scanf("%d", &n);
		sum += n;
		i++;
	}
	printf("합계는 %d입니다.", sum);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SEC_PER_MINUTE 60

int main()
{
	int time, minute, second;
	
	printf("초를 입력하시오: ");
	scanf("%d", &time);

	minute = time / SEC_PER_MINUTE;
	second = time % SEC_PER_MINUTE;
	printf("%d초는 %d분 %d초입니다.", time, minute, second);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SEC_PER_MINUTE 60

int main()
{
	int time, minute, second;
	
	printf("�ʸ� �Է��Ͻÿ�: ");
	scanf("%d", &time);

	minute = time / SEC_PER_MINUTE;
	second = time % SEC_PER_MINUTE;
	printf("%d�ʴ� %d�� %d���Դϴ�.", time, minute, second);

	return 0;
}
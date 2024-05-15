#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>	//sleep을 사용하기 위한 헤더파일

int main()
{
	int i;
	int count;

	printf("카운터의 초기값을 입력하시오(단위: 초): ");
	scanf("%d", &count);

	for (int i = count;i > 0;i--)
	{
		printf("%d ", i);
		Sleep(1000);
	}

	printf("\a");

	return 0;
}
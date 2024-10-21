#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char sen[100];
	int count = 0;

	printf("문장을 입력하시오: ");

	sen[count] = getchar();
	while (sen[count] != '\n') {
		count++;
		sen[count] = getchar();
	}

	for (int i = count;i > 0;i--)
		printf("%c", sen[i-1]);
	printf("\n");
	
	return 0;
}
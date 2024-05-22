// 모음과 자음을 구분하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a;
	printf("문자를 입력하시오: ");
	scanf("%c", &a);
	
	switch (a)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("모음입니다.");
		break;
	default:
		printf("자음입니다.");
		break;
	}

	return 0;
}
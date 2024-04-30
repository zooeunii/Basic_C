#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a, b, c, d;	//문자
	unsigned int e;		//변수 저장

	printf("첫 번째 문자를 입력하시오: ");
	scanf(" %c", &a);
	printf("두 번째 문자를 입력하시오: ");
	scanf(" %c", &b);
	printf("세 번째 문자를 입력하시오: ");
	scanf(" %c", &c);
	printf("네 번째 문자를 입력하시오: ");
	scanf(" %c", &d);

	e = (unsigned int)a;
	e |= (unsigned int)b << 8;
	e |= (unsigned int)c << 16;
	e |= (unsigned int)d << 24;


	printf("결과값: %x", e);

	return 0;
}
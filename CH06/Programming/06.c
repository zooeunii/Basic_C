// ������ ������ �����ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &a);
	
	switch (a)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("�����Դϴ�.");
		break;
	default:
		printf("�����Դϴ�.");
		break;
	}

	return 0;
}
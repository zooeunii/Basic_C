#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a, b, c, d;	//����
	unsigned int e;		//���� ����

	printf("ù ��° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &a);
	printf("�� ��° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &b);
	printf("�� ��° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &c);
	printf("�� ��° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &d);

	e = (unsigned int)a;
	e |= (unsigned int)b << 8;
	e |= (unsigned int)c << 16;
	e |= (unsigned int)d << 24;


	printf("�����: %x", e);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int data; //data�� 16���� ����
	printf("16���� ������ �Է��Ͻÿ�: ");
	scanf("%x", &data);

	printf("8�����δ� %#o�Դϴ�.\n", data);
	printf("10�����δ� %d�Դϴ�.\n", data);
	printf("16�����δ� %#x�Դϴ�.\n", data);
	return 0;
}
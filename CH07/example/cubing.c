// �ݺ��� �̿��� �������� ���ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int i;
	
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	printf("======================\n");
	printf("i           i�� ������\n");
	printf("======================\n");
	for (i = 1;i <= n;i++)
		printf("%d      %5d\n", i, i * i * i);

	return 0;
}
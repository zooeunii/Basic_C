// �ݺ��� �̿��� ���丮�� ���ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i;
	long fact = 1;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	for (i = 1;i <= n;i++)
		fact *= i;

	printf("%d!�� %d�Դϴ�.", n, fact);

	return 0;
}
//����ڰ� 0�� �Է��� ������ ���ڸ� ���Ѵ�.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0;
	int sum = 0;

	do {
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &num);
		sum += num;
	} while (num);
	
	printf("���ڵ��� �� = %d", sum);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>	//sleep�� ����ϱ� ���� �������

int main()
{
	int i;
	int count;

	printf("ī������ �ʱⰪ�� �Է��Ͻÿ�(����: ��): ");
	scanf("%d", &count);

	for (int i = count;i > 0;i--)
	{
		printf("%d ", i);
		Sleep(1000);
	}

	printf("\a");

	return 0;
}
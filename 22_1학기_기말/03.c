#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, temp, r;

	printf("�� ������ �Է��Ͻÿ�(ū��, ������): ");
	scanf("%d %d", &a, &b);
	
	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}

	while (b) { //�ִ����� ���ϴ� ���1
		r = a % b;
		a = b;
		b = r;
	}

	printf("\n�ִ������� %d�Դϴ�.\n", a);

	return 0;

}
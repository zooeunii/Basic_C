#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char op;
	int x, y;

	while (1) {
		printf("******************\n");
		printf("A----Add\n");
		printf("S----Subtract\n");
		printf("M----Multiply\n");
		printf("D----Divide\n");
		printf("Q----Quit\n");
		printf("******************\n");
		printf("������ �����Ͻÿ�: ");
		scanf("%c", &op);
		if (op == 'Q')
			break;
		printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
		scanf("%d %d", &x, &y);


		if (op == 'A')
			printf("%d\n", x + y);
		else if (op == 'S')
			printf("%d\n", x - y);
		else if (op == 'M')
			printf("%d\n", x * y);
		else if (op == 'D')
			printf("%d\n", x / y);
		else
			printf("�������� �ʴ� ������ �Դϴ�.\n");
	}

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int current = 100;
	int u;

	while(1) {
		printf("���� ���ᷮ: %d\n", current);
		if (current < 20) 
			printf("(���) ���ᰡ 20���� �̸��Դϴ�.");
		printf("���� ������ +, �Ҹ�� -�� �Է����ּ���: ");
		scanf("%d", &u);

		current += u;

		if (current > 500) {
			printf("500���� �̻��� ������ �� �����ϴ�.\n");
			current -= u;
		}
		else if (current <= 0) {
			printf("���ᰡ �����ϴ�.");
			break;
		}
	}

	return 0;
	
}
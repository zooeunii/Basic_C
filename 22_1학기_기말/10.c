#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int user, computer, i;
	srand(time(NULL));
	int tries = 0;

	computer = rand() % 20 + 1;

	while (1) {
		printf("1���� 20������ ���� ���纸���� >> ");
		scanf("%d", &user);

		if (user == computer) {
			tries++;
			break;
		}

		else if (user > computer) {
			printf("������ ������ �����ϴ�.\n");
			tries++;
		}
		else {
			printf("������ ������ �����ϴ�.\n");
			tries++;
		}
	}
	printf("\n�����Դϴ�! �õ�Ƚ��: %d\n", tries);

	return 0;
}
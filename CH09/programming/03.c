#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check();

int main()
{
	for (int i = 0;i < 3;i++) {
		if (check() == 0) {
			printf("�α��� ����!\n");
			return 0;
		}
	}
	printf("�α��� �õ� Ƚ�� �ʰ�\n");
}

int check()
{
	static int attempt = 0;
	int password;

	printf("��й�ȣ: ");
	scanf("%d", &password);

	attempt++;

	if (password == 1234)
		return 0;
	else
		printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.(%d�� �õ�)\n", attempt);
		return 1;
}
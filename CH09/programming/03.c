#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check();

int main()
{
	for (int i = 0;i < 3;i++) {
		if (check() == 0) {
			printf("로그인 성공!\n");
			return 0;
		}
	}
	printf("로그인 시도 횟수 초과\n");
}

int check()
{
	static int attempt = 0;
	int password;

	printf("비밀번호: ");
	scanf("%d", &password);

	attempt++;

	if (password == 1234)
		return 0;
	else
		printf("비밀번호가 틀렸습니다.(%d번 시도)\n", attempt);
		return 1;
}
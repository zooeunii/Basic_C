#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int sum = 0;

	while (1) {
		if (sum >= 10000) {
			sum = sum - i;
			i--;
			break;
		}
		else {
			i++;
			sum += i;
		}
	}
	printf("1���� %d������ ���� %d�Դϴ�.",i, sum);

	return 0;
}
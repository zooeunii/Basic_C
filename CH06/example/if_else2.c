// �������� �ϱ� ���� �и� 0������ if-else ���� �̿��Ͽ� �˻�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, d, result;
	printf("���ڿ� �и� �Է��Ͻÿ�: ");
	scanf("%d %d", &n, &d);

	if (d == 0)
		printf("0���δ� ���� �� �����ϴ�.\n");
	else {
		result = n / d;
		printf("����� %d�Դϴ�.\n", result);
	}
	return 0;
}
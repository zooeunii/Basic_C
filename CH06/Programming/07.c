// ü�� �˻��ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double height, weight, sw;

	printf("ü�߰� Ű�� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &weight, &height);

	sw = (height - 100) * 0.9;
	if (sw > weight)
		printf("��ü�� �Դϴ�");
	else if (sw < weight)
		printf("��ü�� �Դϴ�.");
	else
		printf("����ü�� �Դϴ�.");

	return 0;
}
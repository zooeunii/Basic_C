#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int halflife;
	double initial = 100.0;
	double current;
	int years = 0;

	printf("�ݰ��⸦ �Է��Ͻÿ�(��): ");
	scanf("%d", &halflife);

	current = initial;
	while (current > initial / 10.0)
	{
		years += halflife;
		current = current / 2.0;
		printf("%d�� �Ŀ� ���� �� = %lf\n", years, current);
	}
	printf("1/10 ���Ϸ� �Ǳ���� �ɸ� �ð� = %d��\n", years);

	return 0;
}
// while ���� �̿��� ���� ��� ���ϱ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int grade = 0;
	int i = 0;
	double sum = 0;
	double average;

	printf("�����Ϸ��� ������ �Է��Ͻÿ�.\n");

	while (grade >= 0)
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &grade);
		sum += grade;
		i++;
	}
	sum = sum - grade;
	i--;
	//����� ���ϰ� ȭ�鿡 ����Ѵ�.
	average = sum / i;
	printf("������ ����� %lf�Դϴ�.", average);

	return 0;
}
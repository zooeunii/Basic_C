//2���� �������� ���
#include <stdio.h>
void print_binory(int x);

int main()
{
	print_binory(9);
	printf("\n");
	return 0;
}

void print_binory(int x)
{
	if (x > 0) {
		print_binory(x / 2); //��ȯȣ��
		printf("%d", x % 2); //�������� ���
	}
}
#include <stdio.h>
#include <stdlib.h>
void hw_init();

int main()
{
	hw_init();
	hw_init();
	hw_init();
	return 0;
}
void hw_init()
{
	static int inited = 0;
	if (inited == 0)
	{
		printf("hw_init(): ��Ʈ��ũ ��ġ�� �ʱ�ȭ�մϴ�. \n");
		inited = 1;
	}
	else
		printf("hw_init(): �̹� �ʱ�ȭ�Ǿ����Ƿ� �ʱ�ȭ���� �ʽ��ϴ�. \n");
}
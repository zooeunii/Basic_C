#include <stdio.h>
void inc(int counter);

int main()
{
	int i = 10;

	printf("함수 호출전 i = %d\n", i);
	inc(i);
	printf("함수 호출후 i = %d\n", i);

	return 0;
}

void inc(int counter)
{
	counter++;
}

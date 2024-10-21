#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int get_random();

int main()
{
	printf("초기화 실행");
	printf("%d\n", get_random());
	printf("%d\n", get_random());
	printf("%d\n", get_random());

	return 0;
}

int get_random()
{
	static int inited = 0;
	if (inited == 0) {
		srand(time(NULL));
		inited++;
		return rand();
	}

	return rand();
}

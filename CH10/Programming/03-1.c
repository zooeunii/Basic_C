#include <stdio.h>
int array_equal(int a[], int b[], int size);

int main()
{
	int a[] = {1, 2, 3, 0 ,0, 0, 0, 0, 0, 0};
	int b[] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0};
	int size = 10;

	for (int i = 0;i < 10;i++)
		printf("%d ", a[i]);
	printf("\n");
	for (int i = 0;i < 10;i++)
		printf("%d ", b[i]);
	printf("\n\n");

	if (array_equal(a, b, size))
		printf("2개의 배열은 같음\n");
	else
		printf("2개의 배열은 다름\n");

	return 0;
}

int array_equal(int a[], int b[], int size)
{
	for (int i = 0;i < size;i++) {
		if (a[i] != b[i])
			return 0;
		else
			return 1;
	}

}
#include <stdio.h>
int array_copy(int a[], int b[], int size);

int main()
{
	int a[] = { 1, 2, 3, 0 ,0, 0, 0, 0, 0, 0 };
	int b[10] = { 0 };
	int size = 10;

	array_copy(a, b, size);

	for (int i = 0;i < size;i++)
		printf("%d ", a[i]);
	printf("\n");
	
	for (int i = 0;i < size;i++)
		printf("%d ", b[i]);
	printf("\n\n");
	printf("배열이 복사되었음\n");

	return 0;
}

int array_copy(int a[], int b[], int size)
{
	for (int i = 0;i < size;i++) {
		b[i] = a[i];
	}
}

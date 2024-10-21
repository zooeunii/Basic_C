#include <stdio.h>

double recursive();

int main()
{
	printf("%lf", recursive());
	return 0;
}

double recursive()
{
	double result = 0.0;
	for (int i = 1; i <= 10;i++) 
		result += 1.0 / i;
	
	return result;
}
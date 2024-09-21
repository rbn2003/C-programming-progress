#include<stdio.h>

void sum(int, int); // to sum two numbers
int main()
{
	int c=30, d=40;
	sum(10,20);
	sum (c,d);
	return 0;
}

void sum(int a, int b)
{
	printf("Sum=%d", a+b);
}

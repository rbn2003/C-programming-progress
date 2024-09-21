#include<stdio.h>
int main()
{
	int i=1,a=0;
	do
	{
		a=a+i;
		i++;
	}
	while (i<=10);
	
	printf("sum of 1 to 10 is %d", a);
	return 0;
}

#include<stdio.h>
int main()
{
	int i,j;
	for (i=1; i<=10; i++)
	{
		printf("\n the table of %d is:", i);
		printf("\n------------------------");
		
		for (j=1; j<=10; j++)
		{
			printf("\n %d*%d =%d", i,j, i*j);
		}
		printf("\n------------------------");
	}
	return 0;
}

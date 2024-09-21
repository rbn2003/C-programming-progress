#include<stdio.h>
int main()
{
	int a[3][3], b[3][3], sum[3][3],i,j;
	printf("Sum of an array \n"); // program to add two array
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("Enter value of a[%d][%d]\t", i,j);
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("\n");
	
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("Enter value of b[%d][%d]\t ", i,j);
			scanf("%d", &b[i][j]);
		}
	}
	
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n Sum is \n");
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("\t %d", sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}


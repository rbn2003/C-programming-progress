#include<stdio.h>
int main()
{
	int a[10][5];
	int i,j;
	printf("Enter an elements for array a", a[i][j]);
	scanf("%d", &a[i][j]);
	
	for(i=0; i<10; i++)
	{
		for(j=0; j<5; j++)
		{
		printf("a[%d][%d]=%d \t \n", i,j,a[i][j]);
		// printf("\t %d ", a[i][j]);
		}
		printf("\n");
	}
    return 0;
}

#include<stdio.h>
int main()
{
	int a[3][3]={{3,6,9},
	            {4,8,12},
	            {5,10,15}};
	
	int i,j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
		//	printf("a[%d][%d]=%d \t \n", i,j,a[i][j]);
		printf("\t %d ", a[i][j]);
		}
		printf("\n");
	}
    return 0;
}

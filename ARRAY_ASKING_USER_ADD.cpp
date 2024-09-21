#include<stdio.h>
int main()
{
	int a[10][3],i,j,total;
	
	for(i=0; i<10; i++)
	{
		for(j=0; j<3; j++)
		{
	        printf("Enter the marks of subjects a[%d][%d]\t", i,j);
	        scanf("%d", &a[i][j]);
        }
    }
    
	printf("ENG\t SCI\t MATHS\t TOTAL\n ");
	
	for(i=0; i<10; i++)
	{
		for(j=0; j<3; j++)
		{
	       total= total+ a[i][j];
	       printf("%d\t", a[i][j]);
	    }
	
	printf("%d",total);
		
		if(a[i][j]>40)
		{
			printf("\t PASSED");
		}
		else 
		{
			printf("\t FAILED");
		}
		printf("\n");
		total =0;
	}
}

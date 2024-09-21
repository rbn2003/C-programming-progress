#include<stdio.h>
int main()
{
	int a[10][5]=
	{{82,92,72,73,94},
	{85,95,55,75,65},
	{86,76,96,76,56},
	{77,97,87,67,57},
	{90,80,70,60,50},
	{45,55,65,76,78},
	{97,87,88,99,82},
	{90,99,89,79,79},
	{83,73,93,63,66},
	{67,77,87,78,79}};
	
	int i,j,TOTAL;
	printf("ENG \t NEP \t SCI\t SOC\t MATHS\t TOTAL\n");
	
	for(i=0; i<10; i++)
	{
		for(j=0; j<5; j++)
		{
			TOTAL= TOTAL + a[i][j];
			printf("%d \t", a[i][j]); 
			
		}
		// for addition...................
		printf("%d", TOTAL);
		
		if (a[i][j] > 40)
		{
		printf("\t PASSED");
		}	
		else 
		{
		printf("\t FAILED");
	    }
		printf("\n");
		TOTAL =0;
	}
}

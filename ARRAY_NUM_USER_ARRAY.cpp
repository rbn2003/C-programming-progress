#include<stdio.h>
int main()
{
	int values[5], i;
	
	printf("Enter 5 values: ");
	
	for(i=0; i<5; i++)
	{
		scanf("%d", &values[i]);
	}
	
	printf("Displaying values");
	
	for(i=0; i<5; i++)
    {
	printf("%d[i]\n", values[i]);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int a[10],i,j,temp;
	for (i=0; i<10; i++)
	{
		printf("Enter a[%d]\t",i);
		scanf("%d", &a[i]);
	}
	for (i=0; i<10;i++)
	{
		for (j=i+1; j<10; j++)
		{
			if (a[1]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}		
	}
	for (i=0; i<10; i++)
	{
		printf("\n a[%d]=%d\t",i,a[i]);
	}
	return 0;
}

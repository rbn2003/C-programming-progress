#include<stdio.h>
int main()
{
	int a[10],i,ADD=0;
	for (i=0; i<10; i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d", &a[i]);
	}
	for (i=0; i<10; i++)
	{
		ADD=ADD+a[i];
	}
	printf("The sume is %d", ADD);
	return 0;
}

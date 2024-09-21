#include<stdio.h>
int main()
{
	int a[10], i, SM=0;
	for (i=0; i<10; i++)
	{
		printf("Enter a[%d]\t", i);
		scanf("%d", &a[i]);
	}
	SM =a[0];
	for (i=0; i<10; i++)
	{
		if (SM>a[i])
		{
			SM=a[i];
		}
	}
	printf("Smallest=%d", SM);
	return 0;
}

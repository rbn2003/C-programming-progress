#include<stdio.h>
int main()
{
	int a[10];
    int i;
    for (i=0; i<10; i++)
    {
    	printf("Enter value of a[%d]", i);
    	scanf("%d", &a[i]);
	}
	for (i=0; i<10; i++)
	{
		printf("\n a[%d]=%d", i,a[i]);
	}
	return 0;
}

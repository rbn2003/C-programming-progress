#include<stdio.h>
int main()
{
	int a=1;
	do
	{
		//printf("a=%d\n",a);
		
		if (a%3==0 || a%13==0 || a%17==0)
		{
			printf("%d\n", a);
		}
		
		a++;
		}
    while (a<=100);
return 0;
}

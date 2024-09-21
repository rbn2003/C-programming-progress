#include<stdio.h>
int main()
{
	int a;
//	printf("0");
	for(a=1;a<=100;a++)
	{
	//	printf("%d",a);
		if(a%7==0)
		{
		
			if(a%13==0)
			{
				printf("this %d \n",a);
			}
		}
	}
		return 0;
	
}

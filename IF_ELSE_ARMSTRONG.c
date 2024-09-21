#include<stdio.h>
int main()
{
	int num, ARM=0, rev, rem, ON;
	printf("Enter a number");
	scanf("%d", &num);
	ON=num
	while (num>0)
	{
		rem=num%10;
		ARM=ARM+rem*rem*rem;
		num=num/10;
	}
	if (ARM==ON)
	{
		printf("Armstrong");
	}
	else 
	{
		printf("Not armstrong");
	}
	return 0;
}

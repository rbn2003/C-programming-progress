#include<stdio.h>
int main()
{
	int ON, num, rem, rev;
	printf("Enter a number");
	scanf("%d",&num);
	ON=num;
	while (num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if (ON==rev)
	{
		printf("PALINDROME");
	}
	else
	{
		printf("NOT PALINDROME");
	}
	return 0;
}

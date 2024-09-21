#include<stdio.h>
int main()
{
	int num1, num2;
	printf ("Enter any two numbers");
	scanf (" %d %d", &num1, &num2);
	if (num1>num2)
	{
		printf("num1 is bigger");
	}
	
	else if (num2>num1)
	{
		printf("num2 is greater");
	}
	
	else if(num1=num2)
	{
		printf("Both are equal");
	}
	return 0;
}

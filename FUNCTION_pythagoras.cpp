#include<stdio.h>

void pythagoras (int, int, int); // pythogoras value

int main()
{
	int h,p,b;
	printf("Enter the value of h,p,b \t");
	scanf("%d %d %d, &h, &p,&b");
	pythagoras (h,p,b);
	return 0;
}

void pythagoras (int h, int p, int b)
{
printf("Pythagoras value is %d=%d+%d",h,p,b);

}


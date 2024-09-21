#include<stdio.h>

void printSI();

int main()
{
	printSI();
    return 0;
}

void printSI()
{
	int Sim;
	printf("Enter the value of Sim \t");
	scanf("%d", &Sim);
	printf("The Sim is %d", Sim);
}

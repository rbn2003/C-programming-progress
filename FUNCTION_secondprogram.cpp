#include<stdio.h>

void printData();
void printMyname();  // function declaration

int main()
{
	printData();
	printMyname(); // function calling
	return 0;
}

void printData() // function defination
{
	printf("I am learning function \n");
	
}


void printMyname()
{
	printf("My name is Rabin Poudel");
}



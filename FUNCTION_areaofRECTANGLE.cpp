#include<stdio.h>

// void area (int a, int b); // to find the area of rectangle
void volume (int a, int b, int c);
int main()
{
	int l,b,h;
	
	printf("Enter length, breadth and height \t");
	scanf("%d %d %d", &l, &b, &h);
	area(l,b);
	volume(l,b,h);
	return 0;
 } 
 
 //void area (int l, int b)
 //{
  //printf("The area of rectangle is: %d \t", l*b);
 //}
 
 void volume (int l, int b, int h)
 {
 	printf("The volume of cuboid is: %d \t", l*b*h);
 }

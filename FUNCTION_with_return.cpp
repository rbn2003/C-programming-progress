#include<Stdio.h>
int areaofrectangle (int, int);
int volumeofcuboid (int, int, int);

int main()
{
	int l,b,h,A,V;
	printf("Enter value of l,b,h");
	scanf("%d %d %d", &l, &b, &h);
	A= areaofrectangle (l,b);
	V= volumeofcuboid (l,b,h);
	printf("Area=%d Volume=%d", A,V);
	return 0;
}

int areaofrectangle (int a, int b)
{
	return a*b;
}

int volumeofcuboid (int l, int b, int h)
{
	return l*b*h;
}

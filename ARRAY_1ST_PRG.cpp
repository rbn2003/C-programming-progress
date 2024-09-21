#include<stdio.h>
int main()
{
	int a[]={5,4,3,2,1};
	printf("\n first data is %d", a[0]);
	printf("\n second data is %d", a[1]);
	printf("\n third data is %d", a[2]);
	printf("\n fourth data is %d", a[3]);
	printf("\n fifth data is %d", a[4]);
	
	a[3]=13;
	printf("fourth data after change is %d", a[3]);
	return 0;
}

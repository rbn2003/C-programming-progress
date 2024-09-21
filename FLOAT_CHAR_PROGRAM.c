#include<stdio.h>
int main()
{
	float P=1, T=1, R=1, SI;
	scanf("%d %d %d, &P, &T, &R");
	SI = ( P * T *R ) / 100 ;
	
	printf("Interest is: %f", SI);
	return 0;
		
}



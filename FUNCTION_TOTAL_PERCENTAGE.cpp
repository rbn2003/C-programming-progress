#include<stdio.h>
float findtotal (float, float, float,float);
float findpercentage (float);
void findDivision (float); 
int IsStudentPass(float,float,float,float);

int main()
{
	float S1, S2, S3, S4, total, percent,st;
	printf("Enter S1, S2, S3, S4 \t") ;
	scanf("%f%f%f%f", &S1, &S2, &S3, &S4);
st=IsStudentPass(S1,S2,S3,S4);
	if(st==1)
//	if(IsStudentPass()==1)
	{
	
	total=findtotal(S1,S2,S3,S4);
	printf("total=%f \t",total);
	percent= findpercentage(total);
	printf("Percentage=%f", percent);
	findDivision(percent);
}
else
{
	printf("your are fail");
}
	return 0;
}

float findtotal (float f1, float f2, float f3, float f4)
{
	return (f1+f2+f3+f4);
}

float findpercentage (float tot)
{
	return (tot/400)*100;
}

void findDivision (float Per)
{
	if (Per >= 80)
	{
		printf(" \t First Div");
	}
	
	else if (Per>=60)
	{
		printf(" \t Second");
	}
	
	else if (Per>=40)
	{
		printf(" \t Third");
	}
	
	else 
	{
		printf(" \t Fail");
	}
}
int IsStudentPass(float f1, float f2, float f3, float f4)
{
	if(f1>=40 && f2>=40 && f3>=40 && f4>=40)
	{
		return 1;//for pass
	}
	else
	{
		return 0;
	}
}

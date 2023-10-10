#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,d,r1,r2,realpart,imagepart;
	printf("enter coeffecient a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	//condition for real and different roots 
	
	if (d > 0)
	{
		r1= (-b+sqrt(d))/(2*a);
		r2= (-b-sqrt(d))/(2*a);
		printf("r1=%.2lf and r2=%.2lf",r1,r2);
	}
	
	//condition for a real and equal roots 
	
	else if (d == 0)
	{
		r1=r2= -b/(2*a);
		printf("r1=r2=%.2lf", r1);
	}
	
	// if root are not real
	
	else{
		realpart= -b/(2*a);
		imagepart= sqrt(-d)/(2*a);
		printf("r1=%.2lf+%.2lf and r2= %.2lf- %.2lf" ,realpart, imagepart, realpart,imagepart);
	}
	return 0;
	
}

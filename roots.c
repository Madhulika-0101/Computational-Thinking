#include <stdio.h>
int main()
{
	int point;
	float a,b,c,dis;
	
	printf("Enter the coefficients of x,y,z: ");
	
	scanf("%f %f %f", &a,&b,&c);
	
	dis = (b*b) - (4*a*c);
	
	if (dis>0)
	{
	
		printf("Real roots obtained\n");
		point=20;
		
	}
	else if (dis<0)
	{
	
		printf("Imaginary roots obtained\n");
		point=10;
		
	}
	else 
	{
	
		printf("Equal roots obtained\n");
		point=0;
		
	}
	
	printf("Points obtained: %d\n", point);
}

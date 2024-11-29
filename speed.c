#include <stdio.h>
int main()
{
	float d,v,t;
	
	printf("Enter the distance covered by the vehicle in metres: ");
	scanf("%f", &d);
	printf("Enter the time taken by the vehicle to cover the distance in seconds: ");
	scanf("%f", &t);
	
	v = d/t;
	
	printf("The speed of the vehicle is: %f\n", v);
}

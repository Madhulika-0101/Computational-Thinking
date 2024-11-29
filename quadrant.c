#include <stdio.h>
int main()
{
	float x,y;
	
	printf("Enter the x and y co-ordinates: ");
	
	scanf("%f %f", &x, &y);
	
	if (x>0 && y>0)
	
		printf("First quadrant\n");
		
	else if (x<0 && y>0)
	
		printf("Second quadrant\n");
		
	else if (x<0 && y<0)
	
		printf("Third quadrant\n");
		
	else if (x>0 && y<0)
	
		printf("Fourth quadrant\n");
		
	else
	
		printf("Origin\n");
}

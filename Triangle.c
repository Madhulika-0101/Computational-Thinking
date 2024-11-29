#include <stdio.h>
int main()
{

	float b, h, hy, area, p;
	
	printf("Enter the base of the triangle: ");
	scanf("%f", &b);
	printf("Enter the height of the triangle: ");
	scanf("%f", &h);
	printf("Enter the hypotenuse of the triangle: ");
	scanf("%f", &hy);
	
	area = 0.5*b*h;
	p = b+h+hy;
	
	printf("The area of triangle: %f\n", area);
	printf("The perimeter of triangle: %f\n", p);

}

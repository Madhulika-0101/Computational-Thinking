#include <stdio.h>
int main()
{
float r, area, perimeter;
printf("Enter the radius of the circle: ");
scanf("%f", &r);
area = 3.14*r*r;
perimeter = 2*3.14*r;
printf("The area of circle: %f\n", area);
printf("The perimeter of circle: %f\n", perimeter);
}

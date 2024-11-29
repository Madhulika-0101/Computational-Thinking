/*write C program to display 
the height of person*/
#include <stdio.h>
int main()  // main represents the begining of the program
{
	float i1, i2, i3,totalprice;
	//int p1;
	//int p2;

	printf("Enter of prices the three items:\n");
	scanf("%f%f%f", &i1,&i2,&i3);
	//scanf("%d", &i2);
	//scanf("%d", &i3);
	
	totalprice=i1+i2+i3;
	
	printf("The sum of the three prices are: %f\n", totalprice);
}

#include <stdio.h>
int main()
{
	int i;
	
	printf("Enter a integer: ");
	
	scanf("%d", &i);
	
	if(i<0)
	
		printf("Number is negative\n");
		
	else if(i>0)
	
		printf("Number is positive\n");
}

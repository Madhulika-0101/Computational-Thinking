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
		
	else
	
		printf("Number is zero; neither negative nor positive\n");

}

#include <stdio.h>
#include <math.h>
int armstrong(int n)
{
	int cube, c, num, sum=0;
	num=n;
	
	while (n>0) 
	{
		c=n%10;
		cube=pow(c,3);
		sum+=cube;
		n=n/10;
        }
        
	if (num==sum)
	printf("Armstrong number\n");
	else
	printf("Not a armstrong number\n");
	
}

int main()
{

	int n, a; 
	printf("Enter a number: ");
	scanf("%d", &n);
	
	a=armstrong(n);
	
}

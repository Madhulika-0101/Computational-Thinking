#include <stdio.h>
#include <math.h>

int main()
{
	int n, sum=0, x, i=0;
	
	printf("1 - (X) + (X^2) - (X^3) + ... (X^N)\n");
	printf("Enter the values of X and N for the above series: ");
	
	scanf("%d %d", &x, &n);
	
	while(i<=n)
	{
	
		if (i%2==0)
		
			sum += pow(x,i);
			
		else
		
			sum -= pow(x,i);
			i++;
		
	}
	
	printf("The sum of the series till %d is: %d\n", n, sum);
}

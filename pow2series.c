#include <stdio.h>
#include <math.h>
int main()
{

	int n, sum=0, x, i=1;
	
	printf("1 - 2(X) + 3(X^2) - 4(X^3) + ... N(X^(N-1))\n");
	printf("Enter the values of X and N for the above series: ");
	
	scanf("%d %d", &x, &n);
	
	while(i<=n)
	{
	
		if (i%2==0)
		
			sum -= i*(pow(x,i-1));
			
		else
		
			sum += i*(pow(x,i-1));
			i++;
			
	}
	
	printf("The sum of the series till %d is: %d\n", n, sum);
	
}

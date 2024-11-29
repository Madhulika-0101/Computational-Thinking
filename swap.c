#include <stdio.h>
int main()
{

	int i, n, a, b, l=0;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	i=n;
	
	while (i>0)
	{
		i=i/10;
		l=l+1;
	}
	
	i=n;
	
	while (i>0)
	{
		a=i%10;
		b=i/10;
	}

}

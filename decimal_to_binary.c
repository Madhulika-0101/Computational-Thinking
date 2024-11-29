#include <stdio.h>

int decimaltobinary(int n);

int decimaltobinary(int n)
{

	int c[100], i=0, j=0;
	
	while (n>0)
	{
		c[i]=n%2;
		n=n/2;
		i++;
		j++;
	}
	
	for (i=j-1;i>=0;i--)
	{
		printf("%d",c[i]);
	}
	
	printf("\n");
	
}

int main()
{
	int num;
	
	printf("Enter the number to be converted from decimal to binary: ");
	scanf("%d", &num);
	
	printf("Binary form: ");
	decimaltobinary(num);
}



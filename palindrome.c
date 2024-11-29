#include <stdio.h>
#include <math.h>

int palindrome(int n)
{

	int c, num, r, p=0;
	
	num=n;
	
	while (n>0)
	{
		c=n%10;
		p=p*10+c;
		n=n/10;
	}
	
	if (num==p)
	
		printf("Palindrome\n");
	else
	
		printf("Not Palindrome\n");

}

int main()
{

	int n, pal; 
	printf("Enter a number: ");
	scanf("%d", &n);
	pal=palindrome(n);
	
}

#include <stdio.h>

int square(int n);

int main()
{

	int num, s;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	s = square(num);
	
	printf("Square of %d: %d\n", num, s);

}

int square(int n)
{
	int sq;
	sq=n*n;
	return sq;
}


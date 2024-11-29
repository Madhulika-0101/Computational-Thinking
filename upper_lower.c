#include <stdio.h>
#include <ctype.h>
int main()
{
	char ch;
	
	printf("Enter a alphabet to identify its case: ");
	scanf("%c", &ch);
	
	if (isupper(ch))
	
		printf("Uppercase\n");
	
	else if(islower(ch))
	
		printf("Lowercase\n");
	
	else
	
		printf("Invalid Input\n");
}

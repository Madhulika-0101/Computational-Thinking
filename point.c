#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch;
	int point;
	
	printf("Enter a single digit number, vowel or character: ");
	
	scanf("%c" ,&ch);
	
	if(isdigit(ch))
	
	point=10;
	
	else if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
	
	point=5;
	
	else 
	
	point=0;
	
	printf("Points earned: %d\n", point);
}

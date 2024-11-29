#include <stdio.h>
int main()
{

	char name[20];
	int age;
	
	printf("Enter voter's name: ");
	scanf("%s", &name);
	printf("Enter voter's age: ");
	scanf("%d", &age);
	
	if(age>=18)
	
		printf("%s is eligible to vote\n", name);
	
	else
	
		printf("%s is not eligible to vote\n", name);
	
}

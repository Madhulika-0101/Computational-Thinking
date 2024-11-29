#include <stdio.h>

void display(int a[],int len)
{

	int i;
	
	for (i=0;i<len;i++)
	{
	
		printf("%d ", a[i]);
		
	}
		
}

void display(int a[], int len);

int main()
{

	int len,i,a[100];
	
	printf("Enter the number of elements in the array: \n");
	scanf("%d", &len);
	
	printf("Enter the elements in the array: \n");
	
	for (i=0;i<len;i++)
	{
	
		scanf("%d", &a[i]);
		
	}

	display(a,len);
	
}

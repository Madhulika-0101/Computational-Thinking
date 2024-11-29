#include <stdio.h>
int main()
{
	int len, i, a[5] = {1, 2, 3, 4, 5};
	
	len = sizeof(a)/sizeof(a[0]);
	
	printf("Original order: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	printf("Reverse order: ");
	
	for (i=len-1;i>=0;i--)
	
		printf("%d ", a[i]);
		
	printf("\n");
}



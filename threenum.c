#include <stdio.h>
int main()
{

	int a,b,c,max,min;
	
	printf("Enter three numbers: ");
	scanf("%d%d%d", &a,&b,&c);
	
	if(a>b && a>c)
	{
		max=a;
		if(b<c)
		min=b;
		else
		min=c;
	}
	
	else if(b>a && b>c)
	{
		max=b;
		if(a<c)
		min=a;
		else
		min=c;
	}
	
	else
	{
		max=c;
		if(a<b)
		min=a;
		else
		min=b;
	}
	
	printf("Number which is maximum among the three: %d\n", max);
	printf("Number which is minimum among the three: %d\n",min);

}

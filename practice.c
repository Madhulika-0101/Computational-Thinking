#include <stdio.h>
int main()
{
int a,b,n;
printf("a=%d",a);
while(a>0)
{
	b=a%100;
	printf("b=%d",b);
	if (b<=25)
	{
		n=b;
		printf("n=%d",n);
		break;
	}
	else
	a=a*12345;
}
printf("%d",n);
}

int r = rand() % (max-min+1)+min

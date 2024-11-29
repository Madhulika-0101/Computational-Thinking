#include <stdio.h>
int factorial(int n)
{
int i=1, f=1;
while (i<=n)
{
f*=i;
i++;
}
return f;
}

int main()
{
int n;
float sum=0.0,a,i,f;
printf("Enter the value of n for the given series: ");
scanf("%d", &n);
while (i<=n)
{
f=factorial(i);
a=i/f;
sum+=a;
i=i+1.0;
}
printf("Sum of the given series till %d: %f\n", n, sum);
}	


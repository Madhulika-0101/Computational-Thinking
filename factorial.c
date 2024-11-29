#include <stdio.h>
int main()
{
int n,i=1,fac=1;
printf("Enter the number of which the factorial is to found: ");
scanf("%d", &n);
while(i<=n)
{
if (n==0)
{
printf("Factorial of 0: 1\n");
break;
}
else
{
fac*=i;
i++;
}
}
printf("Factorial of %d: %d\n", n, fac);
}

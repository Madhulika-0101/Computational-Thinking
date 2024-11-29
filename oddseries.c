#include <stdio.h>
int main()
{
int  n, sum=0, i=1;
printf("Enter the limit(positive odd integer) for the series - 1+3+5+...+N: ");
scanf("%d",&n);
while(i<=n)
{
if (i%2!=0)
sum+=i;
i++;
}
printf("Sum of the series till %d is: %d\n", n, sum);
}

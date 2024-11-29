#include <stdio.h>
int main()
{
int n, i=0, a=0, b=1, f=0;
printf("Enter a number: ");
scanf("%d", &n);
printf("First %d numbers of the Fibbonaci series: \n", n);
printf("0\n1\n");
while(i<(n-2))
{
f=a+b;
printf("%d\n",f);
a=b;
b=f;
i++;
}
}

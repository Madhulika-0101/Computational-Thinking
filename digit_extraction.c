#include <stdio.h>
int main()
{
int n, c;
printf("Enter a number: ");
scanf("%d", &n);
printf("Digits present in the number: \n");
while (n>0)
{
c=n%10;
printf("%d\t", c);
n=n/10;
}
printf("\n");
}

int maximum(int a, int b, int c)
{
int max;
if ((a>b) && (a>c))
max=a;
else if ((b>a) && (b>c))
max=b;
else 
max=c;
return max;
}

#include <stdio.h>
int maximum(int a, int b, int c);
int main()
{
int x, y, z, max;
printf("Enter three numbers: ");
scanf("%d %d %d", &x, &y, &z);
max=maximum(x,y,z);
printf("Maximum of %d, %d and %d: %d\n", x, y, z, max);
}

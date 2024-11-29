int absolute(int n)
{
int abs;
if (n>0)
abs=n;
else if (n<0)
abs=n/-1;
else 
abs=0;
return abs;
}

#include <stdio.h>
int absolute(int n);
int main()
{
int num, abs;
printf("Enter a number: ");
scanf("%d", &num);
abs=absolute(num);
printf("The absolute value of %d: %d\n", num, abs);
}

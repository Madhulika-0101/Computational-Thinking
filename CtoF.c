#include <stdio.h>
int main()
{
float c, f;
printf("Enter the temperature in degree celsius: ");
scanf("%f", &c);
f = (9/5)*c + 32;
printf("The temperature in degree fahrenheit: %f\n", f);
}

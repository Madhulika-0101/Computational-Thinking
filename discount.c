#include <stdio.h>
int main()
{
float amount, discount, final;
printf("Enter amount spent for the purchase: ");
scanf("%f", &amount);
if (amount>=0 && amount<=1000)
discount=0.05;
else if (amount>=1001 && amount<=5000)
discount=0.1;
else if (amount>=5001 && amount<=10000)
discount=0.2;
else
printf("No discount for given amount\n");
final = amount - (discount*amount);
printf("Amount to be paid after discount: %f\n", final);
}

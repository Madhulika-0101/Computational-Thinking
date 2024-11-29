#include <stdio.h>
int main()
{
float weight, height, bmi;
printf("Enter weight in kilograms:");
scanf("%f", &weight);
printf("Enter height in metres:");
scanf("%f", &height);
bmi=weight/(height*height);
if (bmi<18.5)
printf("BMI: %f = Underweight\n", bmi);
if ((bmi>=18.5) || (bmi<=24.9))
printf("BMI: %f = Normal weight\n", bmi);
if (bmi>=25)
printf("BMI: %f = Overweight\n", bmi);
}

#include <stdio.h>
#include <string.h>
int main()
{
char emp_name[20];
float hours_week, rate_perhour, weeks_month, monthly_pay;
printf("Enter employee name: ");
scanf("%s", &emp_name);
printf("Enter the number of hours worked per week: ");
scanf("%f", &hours_week);
printf("Enter the total number of weeks present in the month: ");
scanf("%f", &weeks_month);
printf("Enter the pay rate per hour: ");
scanf("%f", &rate_perhour);
monthly_pay = hours_week*weeks_month*rate_perhour;
printf("The monthly pay of %s is: %f/-\n", emp_name,monthly_pay);
}

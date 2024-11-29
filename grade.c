#include <stdio.h>
int main()
{
char grade;
float avg;
printf("Enter average marks of the student: ");
scanf("%f" ,&avg);
if(avg>80 && avg<=100)
grade='A';
else if(avg>60 && avg<=80)
grade='B';
else if(avg>40 && avg<=60)
grade='C';
else 
grade='F';
printf("Grade of given average marks: %c\n", grade);
}

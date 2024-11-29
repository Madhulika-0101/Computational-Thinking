#include <stdio.h>
int main()
{
int i, marks[5], max=0;
printf("Enter marks of 5 students: ");
scanf("%d %d %d %d %d", &marks[0], &marks[1], &marks[2], &marks[3], &marks[4]);
for (i=0;i<5;i++)
{
if (marks[i]>max)
max=marks[i];
}
printf("Maximum marks among the entered marks: %d\n", max);
}


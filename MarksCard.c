#include <stdio.h>
int main()
{
float math, phy, chem, comp, eng;
printf("Enter the marks obtained in Mathematics, Physics, Chemistry, Computer and English:\n");
scanf("%f%f%f%f%f" ,&math,&phy,&chem,&comp,&eng);
printf("------Marks Card------\n");
printf("Mathematics: %f\n", math);
printf("Physics: %f\n", phy);
printf("Chemistry: %f\n", chem);
printf("Computer: %f\n", comp);
printf("English: %f\n",eng);
}

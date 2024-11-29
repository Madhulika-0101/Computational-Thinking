#include <stdio.h>
int main()
{
int height;
printf("Enter height in centimeters: ");
scanf("%d", &height);
if(height>160)
printf("Tall\n");
else if(height>=130 && height<=160)
printf("Medium\n");
else
printf("Short\n");
}

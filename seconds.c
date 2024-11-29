#include <stdio.h>
int main()
{

	int i, hour, min, sec;
	printf("Enter a integer(in seconds) to be converted to hours, minutes and seconds: ");
	scanf("%d", &i);
	hour = i/3600;
	min = (i-(hour*3600))/60;
	sec = (i-(hour*3600))-(min*60);
	printf("%d hours, %d minutes %d seconds\n", hour,min,sec);
	
}

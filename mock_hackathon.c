#include <stdio.h>

char status[5][5];
int seat_number[5][5];

struct theatre
{

	

}seats;

int BNB()
{
	
	for(int i=0;i<5;i++)
	{
	
		for(int j=0;j<5;j++)
		{
		
			seats.status[i][j] = 'B';
			
		}
		printf("\n");
	
	}
	
}

int Random_booking(int max, int min)
{
	
	for(int i=0;i<5;i++)
	{
	
		for(int j=0;j<5;j++)
		{
		
			i = rand() % (max-min+1)+min;
			j = rand() % (max-min+1)+min;
			seats.status[i][j] = 'N';
			
		}
	
	}

}

int seat_number_assignment()
{

	int a=1;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			seats.seat_number[i][j]=a;
			a++;
			
		}
	}

}

int seat_display()
{

	for(int i=0;i<5;i++)
	{
	
		for(int j=0;j<5;j++)
		{
			if (seats.seat_number[i][j]<=9)
				printf("%d(%c)   ", seats.seat_number[i][j], seats.status[i][j]);
			else
				printf("%d(%c)  ", seats.seat_number[i][j], seats.status[i][j]);
			
			
		}
		printf("\n");
	
	}
}

int seat_choice()
{

	int inp;
	printf("1. Single Seat \n");
	printf("2. Multiple Seat \n");
	scanf("%d", &inp);
	return inp;

}

int BNB();
int Random_booking(int max, int min);
int seat_number_assignment();
int seat_display();
int seat_choice();

struct theatre;

int main()
{
	int max=4, min=0,inp,ss,ans='y';
	int i,j;
	BNB();
	Random_booking(max,min);
	seat_number_assignment();
	
	printf("-----------------------Theatre Booking System--------------------------\n");
	printf("Seats Available:\n");
	
	seat_display();
	
	printf("N=Not Booked, B=Booked\n");
	printf("Enter what type of seat you want to book: \n");
	inp=seat_choice();
	
		if (inp==1)
		{
		
			printf("Enter the seat number to be booked: ");
			scanf("%d",&ss);
			printf("%d %d", ss/10, ss%10);
			if (ss<=9)
			{
				if (seats.status[0][ss]=='B')
				{
					printf("Sorry! That seat is already booked");
				}
				else
				{
					seats.status[ss/10][ss%10]='B';
				}
			}
			else
			{
				if (seats.status[ss/10][ss%10]=='B')
				{
					printf("Sorry! That seat is already booked\n");
				}
				else
				{
					seats.status[ss%10][ss/10]='B';
					printf("%c\n",seats.status[ss/10][ss%10]);
				}
			}
			printf("Successfully booked\n");
			printf("Updated Seat Arrangement: \n");
			seat_display();
		}
	
	

	
	

}

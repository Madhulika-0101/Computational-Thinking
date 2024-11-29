#include <stdio.h>

int twoDArray(int x, int y);

int main()
{
int m,n;
printf("Enter the number of rows of the matrix: ");
scanf("%d", &m);
printf("Enter the number of columns of the matrix: ");
scanf("%d", &n);
int num[m][n];
twoDArray(m,n);
}

int twoDArray(int x, int y)
{
int i, j, n[x][y];
printf("Enter the elements of the array: ");
for (i=0;i<x;i++)
{
for (j=0;j<y;j++)
{
scanf("%d", &n[i][j]);
}
}
printf("Elements present in the matrix: \n");
for (i=0;i<x;i++)
{
for (j=0;j<y;j++)
{
printf("%d,", n[i][j]);
}
printf("\n");
}
printf("\n");
}



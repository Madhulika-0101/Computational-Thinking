#include <stdio.h>

void twoDArray(int x, int y, int (*n)[y]);
int add_matrix(int x, int y, int (*a)[y], int (*b)[y]);

int main() {

	int m,n;
	
	printf("Addition of Two Matrices\n\n");
	
	printf("Enter the number of rows: ");
	scanf("%d",&m);
	printf("Enter the number of columns: ");
	scanf("%d",&n);
	
	int n1[m][n] = {};
	int n2[m][n] = {};
	
	for (int i=0;i<m;i++) {
		
		for (int j=0;j<n;j++) {
		
			printf("Enter the (%d,%d) of matrix 1: ",i,j);
			scanf("%d",&n1[i][j]);
		
		}
		
	}
	
	printf("Matrix 1:\n");
	twoDArray(m,n,n1);
	
	for (int i=0;i<m;i++) {
		
		for (int j=0;j<n;j++) {
		
			printf("Enter the (%d,%d) of matrix 2: ",i,j);
			scanf("%d",&n2[i][j]);
		
		}
		
	}
	
	printf("Matrix 2:\n");
	twoDArray(m,n,n2);
	
	printf("Matrix 1  + Matrix 2 = \n");
	add_matrix(m,n,n1,n2);
}

void twoDArray(int x, int y, int (*n)[y]) {
	int i, j;
	
	for (i=0;i<x;i++) {
	
		for (j=0;j<y;j++) {
		
			printf("%d\t", n[i][j]);
			
		}
		
		printf("\n");
	}
	
	printf("\n");
}

int add_matrix(int x, int y, int (*a)[y], int (*b)[y]) {

	int c[x][y] = {};
	
	for (int i=0;i<x;i++) {
	
		for (int j=0;j<y;j++) {
			
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
			
		}
		
		printf("\n");
	}
}

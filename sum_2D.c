#include <stdio.h>

void twoDArray(int x, int y, int (*n)[y]);
int row_sum(int x, int y, int (*n)[y]);
int column_sum(int x, int y, int (*n)[x]);

int main(void) {
	int m,n;
	printf("Enter the number of rows of the matrix: ");
	scanf("%d", &m);
	printf("Enter the number of columns of the matrix: ");
	scanf("%d", &n);
	
	int num[m][n];
	
	for (int i = 0; i < m; i++ ) {
		
	for (int j = 0; j < n ; j++) {
	
			printf("Enter (%d,%d) element: ", i,j);
			scanf("%d", &num[i][j]);
			printf("\n");
			
		}
		
	}
	
	twoDArray(m,n,num);
	
	row_sum(m,n,num);
	
	column_sum(m,n,num);
	
	return 0;
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

int row_sum(int x, int y, int (*n)[y]) {
	int i, j, rsum[x] = {};
	for (i=0;i<x;i++) {
		for (j=0;j<y;j++) {
			rsum[i]+=n[i][j];
		}
	}
	printf("Sums of each row:\n");
	for (i=0;i<x;i++) {
		printf("Sum of row%d: %d\n",(i+1),rsum[i]);
	}
}

int column_sum(int x, int y, int (*n)[x]) {
	int i, j, csum[y] = {};
	for (i=0;i<y;i++) {
		for (j=0;j<x;j++) {
			csum[j]+=n[i][j];
		}
	}
	printf("Sums of each column:\n");
	for (i=0;i<y;i++) {
		printf("Sum of column%d: %d\n",(i+1),csum[i]);
	}
}

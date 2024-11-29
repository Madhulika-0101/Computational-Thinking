#include <stdio.h>

int rowS(int m, int n,int (*goofy)[n]);
int columnS(int m, int n,int (*goofy)[n]);

int main(int argc, char* argv[]) {

	int m,n;

	if (argc < 2) {
		
		printf("Enter no. of rows> ");
		scanf("%d",&m);
		printf("\nEnter no. of columns> ");
		scanf("%d",&n);
		
		printf("\n");

	} else {
	
		m = atoi(argv[1]);
		n = atoi(argv[2]);
		
	};
	
	int goofy[m][n];
	
	for (int i = 0; i < m; i++ ) {
		
		for (int j = 0; j < n ; j++) {
			printf("Enter (%d,%d) element> ", i,j);
			scanf("%d", &goofy[i][j]);
			printf("\n");
		}
		
	};
	
	rowS(m,n,goofy);
	columnS(m,n,goofy);
	
	return 0;

};

int rowS(int m, int n,int (*goofy)[n]) {
	
	int res[m] = { };
	
	for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) res[i] += goofy[i][j];
	
	int k = 0;
	
	while ( (k < m) && ( printf("Sum of %dth row is %d\n",(k+1),res[k]) ) ) k++;

};

int columnS(int m, int n,int (*goofy)[m]) {
	
	int res[n] = { };
	
	for (int j = 0; j < n; j++) for (int i = 0; i < m; i++) res[i] += goofy[i][j];
	
	int k = 0;
	
	while ( (k < m) && ( printf("Sum of %dth column is %d\n",(k+1),res[k]) ) ) k++;

};

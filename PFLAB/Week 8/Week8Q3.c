#include <stdio.h>

int main () {
	
	int matrix[2][3][3] = { {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}} };
	
	int page = 1;
	for (int k=0; k<2; k++) {
		int sum=0;
		for (int i=0; i<3; i++) {
			for (int j=0; j<3; j++){
				sum += matrix[k][i][j];	
			}
		}
		printf("Sum of Elements in Matrice %d: %d", page, sum);
		printf("\n\n");
		page++;
	} 
	
	return 0;
}
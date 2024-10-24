#include <stdio.h>

int main() {
	int matrix[2][3][3] = {
		{
			{1, 2, 3},	
		    {4, 5, 6},
			{7, 8, 9}
		},
		
		{
			{10, 11, 12},
			{13, 14, 15},
			{16, 17, 18}
		}
	};
	
	int sum1 = 0, sum2 = 0;
	
	for (int h=0; h<2; h++) {
		for (int i=0; i<3; i++) {
			for (int j=0; j<3; j++) {
				if (h==0) sum1+= matrix[h][i][j];
				if (h==1) sum2+= matrix[h][i][j];
			}
		}
	}
	
	printf("Sum of page 1 = %d", sum1);
	printf("\nSum of page 2 = %d", sum2);
	
	return 0;
}
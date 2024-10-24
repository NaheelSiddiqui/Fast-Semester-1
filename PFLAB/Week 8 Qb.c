#include <stdio.h> 

int main() {
	printf("Enter number of rows: ");
	int rows; 
	scanf("%d", &rows);
	
	for (int i=0; i<6; i++) {
		if (i<3) {
			for (int l=0; l<6/2-i; l++) {
				printf(" ");
			}
			for (int j=0; j<=i; j++) {
				printf("* ");
			}
		} else {
			for (int l=0; l<=i-3; l++) {
				printf(" ");
			}
			for (int j=0; j<=i-3; j++) {
				printf("* ");
			}
		}
		printf("\n");
	}
}
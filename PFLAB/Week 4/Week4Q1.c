#include<stdio.h>

int main(){
	int num, x;	
	printf("Enter a number: ");
	scanf("%d", &num);
	x = num%3;
	switch (x) {
		case 0: 
			printf("\nNumber is a multiple of 3");
			break;
		default:
			printf("\nNumber is not a multiple of 3");
			break; 
	}
	return 0;
}
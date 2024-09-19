#include<stdio.h>

int main() {
	printf("Enter 1st number: ");
	int num1;
	scanf("%d", &num1);
	printf("Enter 2nd number: ");
	int num2;
	scanf("%d", &num2);
	
	(num1>num2)?printf("%d is greater than %d", num1, num2):printf("%d is greater than %d", num2, num1);
	
	return 0;

}
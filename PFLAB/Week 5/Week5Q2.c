#include<stdio.h>

int main() {
	printf("Enter a number: ");
	int num;
	scanf("%d", &num);
	if (num<0) {
		printf("%d is negative", num);
	}
	else if (num==0) {
		printf("Number is zero");
	}
	else if (num>0) {
		int num2 = num%2;
		if (num2==0) {
			printf("%d is positive and even", num);
		} else {
			printf("%d is positive and odd", num);
		}
	}
	return 0;	
}
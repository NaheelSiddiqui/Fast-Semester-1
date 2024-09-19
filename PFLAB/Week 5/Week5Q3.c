#include<stdio.h>

int main() {
	printf("Enter a number: ");
	int num;
	scanf("%d", &num);
	if (num%3==0 && num%5==0) {
		printf("%d is divisible by 3 and 5", num);
	}  else if (num%3==0 && num%5!=0 ){
		printf("%d is divisible by 3 but not divisible by 5", num);
	} else if (num%5==0 && num%3!=0) {
		printf("%d is divisible by 5 but not divisible by 3", num);
	} else {
		printf("%d is not divisible by either 3 or 5", num);
	}
	return 0;
}
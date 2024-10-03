#include <stdio.h>

int main(){
	int num, num1=1, num2=2, sum;
	printf("Enter number of terms: ");
	scanf("%d", &num);
	printf("%d ", num1);
	printf("%d ", num2);
	for (int i=1; i<=num-2; i++) {
		sum = num1 + num2;
		printf("%d ", sum);
		num1 = num2;
		num2 = sum;
	}
}

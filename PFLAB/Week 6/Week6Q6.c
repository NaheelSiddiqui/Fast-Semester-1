#include <stdio.h>

int main(){
	int num, num1=1, num2=2, prod;
	printf("Enter number of terms: ");
	scanf("%d", &num);
	printf("%d ", num1);
	printf("%d ", num2);
	for (int i=1; i<=num-2; i++) {
		prod = num1 * num2;
		printf("%d ", prod);
		num1 = num2;
		num2 = prod;
	}
}
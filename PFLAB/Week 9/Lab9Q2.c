#include <stdio.h>

void swapIntegers(int *num1, int *num2) {
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    return;
}

int main() {
    printf("Enter number 1: ");
    int num1;
    scanf("%d", &num1);
    printf("Enter number 2: ");
    int num2;
    scanf("%d", &num2);
    swapIntegers(&num1, &num2);

    printf("Number 1 = %d", num1);
    printf("\nNumber 2 = %d", num2);

    return 0;
}
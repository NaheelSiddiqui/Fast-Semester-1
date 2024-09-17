#include<stdio.h>

int main() {
    printf("Enter a operator (+,-,*,/): ");
    char operator;
    scanf("%c", &operator);

    printf("\nEnter First Number: ");
    float num1;
    scanf("%f", &num1);
    printf("\nEnter Second Number: ");
    float num2;
    scanf("%f", &num2);
    float answer;

    switch (operator) {
        case '+': //addition
            answer = num1 + num2;
            printf("\n%.2f %c %.2f = %.2f", num1, operator, num2, answer);
            break;
        case '-': //subtraction
            answer = num1 - num2;
            printf("\n%.2f %c %.2f = %.2f", num1, operator, num2, answer);
            break;
        case '*': //multiplication
            answer = num1 * num2;
            printf("\n%.2f %c %.2f = %.2f", num1, operator, num2, answer);
            break;
        case '/': //division
            answer = num1 / num2;
            printf("\n%.2f %c %.2f = %.2f", num1, operator, num2, answer);
            break;
        default:
            printf("\nInvalid Operator Entered");    
            break;
    }
    return 0;
}
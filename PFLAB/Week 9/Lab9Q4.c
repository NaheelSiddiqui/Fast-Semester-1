#include <stdio.h>  

void calculate(int num1, int num2, char operator) {     
    int answer;     
    switch (operator) {         
        case '+':              
            answer = num1 + num2;             
            break;         
        case '-':              
            answer = num1 - num2;             
            break;         
        case '*':              
            answer = num1 * num2;             
            break;         
        case '/':              
            if (num2 != 0) {
                answer = num1 / num2;             
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return;
            }
            break;         
        default:             
            printf("Invalid input\n");             
            return;
    }         
    printf("Answer = %d\n", answer);  
}  

int main() {     
    printf("Enter number 1: ");     
    int num1;     
    scanf("%d", &num1);     
    printf("Enter number 2: ");     
    int num2;     
    scanf("%d", &num2);     
    printf("Enter operator (+ - * /): ");     
    char operator;      
    scanf(" %c", &operator);     

    calculate(num1, num2, operator);     
    
    return 0; 
}